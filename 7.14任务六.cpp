#include<stdio.h>
#include<time.h>
#include<stdlib.h>
int main(void)
{
	int array_a, array_b;
	int input;//float数据截断2位没解决
	int frequency = 1;
	int right = 0;
	int result;
	int seed;
	int answer_a;
	int answer_b;
	answer_a = rand() % 1 + 4;
	answer_b = rand() % 1 + 4;
	begin:
	while (frequency < 11 )
	{

		srand(time(NULL));
		array_a = rand() % 11;
		array_b = rand() % 11;
		seed = rand() % 4 + 1;
		printf("%d ", array_a);
		switch (seed) {
		case 1:printf("+%d how much\n", array_b);
			result = array_a + array_b;
			break;
		case 2:printf("-%d how nuch\n", array_b);
			result = array_a - array_b;
			break;
		case 3:printf("*%d how much\n", array_b);
			result = array_a * array_b;
			break;
		case 4:printf("/%d how much\n", array_b);
			result = array_a / array_b;
			break;
		}
		scanf_s("%d", &input);

		if (input != result) {
			++frequency;

			switch (answer_a) {
			case 1:printf("no,please try again\n");
				break;
			case 2:printf("wrong try once more\n");
				break;
			case 3:printf("don't give up\n");
				break;
			case 4:printf("not correct,keep trying\n");
				break;
			}
			srand(time(NULL));
		}
		else {
			srand(time(NULL));
			++frequency;
			++right;

			switch (answer_b){
			case 1:printf("very good\n");
				break;
			case 2:printf("excellent\n");
				break;
			case 3:printf("nice work\n");
				break;
			case 4:printf("keep up the good work\n");
				break;
			}
			srand(time(NULL));
			getchar();
		}
	}
	printf("game over\n");
	printf("you answer accuracy is%d%%\n", right * 10);
	if (right > 7)
		printf("you can quit\n");
	else {
		printf("you score less than 75%,you will again\n");
		frequency = 1;
		goto begin;
	}
	return 0;
}
