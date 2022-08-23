#include<stdio.h>
#include<time.h>
#include<stdlib.h>
int main(void)
{
	int array_a, array_b;
	int input;
	char test;
	int frequency = 1;
	int right = 0;
	while(frequency<11)
	{

		srand(time(NULL));
		array_a = rand() % 11;
		array_b = rand() % 11;
		printf("%d*%d=how mush\n", array_a, array_b);
		scanf_s("%d", &input);

		if (input != array_a * array_b) {
			++frequency;
			printf("you are wrong \n");
			}
		else {
			++frequency;
			++right;
			printf("you are right \n");
			printf("do you want go again\n");
			getchar();
			scanf_s("%c", &test);
		}
}
	printf("game over\n");
	printf("you answer accuracy is%d%%\n",right*10);
	return 0;
}