#include<stdio.h>
#include<time.h>
#include<stdlib.h>
int main(void)
{
	int array_a, array_b; 
	int input;
	char test;
	int frequency = 1;
	
	do{
		srand(time(NULL));
		array_a = rand() % 11;
		array_b = rand() % 11;
		printf("%d+%d=how mush\n", array_a, array_b);
		scanf_s("%d", &input);
		
		while (input != array_a + array_b&&frequency<4) {
			frequency++;
				printf("you are wrong and go again\n");
			scanf_s("%d", &input);
			if (frequency == 3)
				goto over;
		}
		frequency = 0;
		printf("you are right \n");
		printf("do you want go again\n");
		getchar();
		scanf_s("%c",&test);
	} 	while (test == 'y');
	over:
	printf("game over\n");
	return 0;
}