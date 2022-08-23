#include<stdio.h>
#define N 10
void swap(int* max, int* min);
void readscore(int score[]);
int findmax(int score[],int *mmax);
int findmin(int score[],int *mmin);
int main(void)
{
	int score[N], max, min,test;
	int mmax,mmin;
	readscore(score);
	max = findmax(score,&mmax);
	printf("the max is %d\n\n\n", max);
	min = findmin(score,&mmin);
	printf("the min is %d\n\n\n", min);
	swap(&mmax, &mmin);
	for (test = 0; test < 10; test++)
	{
		printf("%d\n", score[test]);
	}
	return 0;
}
void swap(int* mmax, int* mmin)
{
	int temp;
	temp = *mmax;
	*mmax = *mmin;
	*mmin = temp;
}
void readscore(int score[])
{
	int i,flag=1;
	for (i = 0; i < 10; i++) {
		printf("input %d number\n",flag);
		scanf_s("%d", &score[i]);
		flag++;
	}
}
int findmax(int score[],int *mmax)
{
	int i = 0;
	int flag;
	int max;
		for (i = 0, max = score[i]; i < 10; i++) {
			if (score[i] > max) {
				max = score[i];
				*mmax = score[i];
			}
		}
		return max;
}
int findmin(int score[],int *mmin)
{
	int i;
	int flag;
	int min;
	for (i = 0, min = score[i]; i < 10; i++) {
		if (score[i] < min) {
			min = score[i];
			*mmin = score[i];
		}
	}
	return min;
}