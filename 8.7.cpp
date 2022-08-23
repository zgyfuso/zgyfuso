#include<stdio.h>
#define N 40
int main(void)
{
	int score[N],i=-1,flag=-1;
	int test = 1;
	do {
		i++;
		printf("student %d enter you score\n", test);
		flag++;
		scanf_s("%d", &score[i]);
	} while (score[i] >= 0);
	printf("grade     count     histogram\n");
	for (i = 0,test=1; i < flag; i++) {
		printf("%d          %d         ",test++,score[i]);
		for (int h = 0; h <score[i]; h++) {
			printf("*");
		}
		printf("\n");
	}
	
}