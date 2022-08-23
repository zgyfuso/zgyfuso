#include<stdio.h>
#include<time.h>
#include<stdlib.h>
int main(void)
{
	int array_a, array_b;
	int input;
	int frequency = 1;
	int right = 0;
	int result;
	int seed;

	while (frequency < 11 || right<7)
	{

		srand(time(NULL));
		array_a = rand() % 11;
		array_b = rand() % 11;
		seed = rand() % 4+1;
		printf("%d ", array_a);
		switch (seed) {
		case 1:printf("+ %d how much\n", array_b);
			result = array_a + array_b;
			break;
		case 2:printf("- %d how nuch\n", array_b);
			result = array_a - array_b;
			break;
		case 3:printf("* %d how much\n", array_b);
			result = array_a * array_b;
			break;
		case 4:printf("/ %d how much\n", array_b);
			result = array_a / array_b;
			break;
		}
		scanf_s("%d", &input);

		if (input != result) {
			++frequency;
			printf("you are wrong \n");
		}
		else {
			++frequency;
			++right;
			printf("you are right \n");
			getchar();
		}
	}
	printf("game over\n");
	printf("you answer accuracy is%d%%\n", right * 10);
	return 0;
}
