#include<stdio.h>
#define N 40
int readscore(int score[]);
int average(int score[],int i);
int found(int score[],int test,int member);
int main(void)
{
	int score[N], max, member,test,last;
	member = readscore(score);
	printf("total student are %d\n", member);
	test = average(score,member);
	printf(" average is %d\n", test);
	last = found(score,test,member);
	printf("higher than average students are %d", last);

	return 0;
}
int readscore(int score[])
{
	int i = -1;
	int flag = 1;
	do {
		i++;
		printf("input score %d\n", flag);
		flag++;
		scanf_s("%d", &score[i]);
	} while (score[i] >= 0);
	return i;
}
int average(int score[],int n) {
	int total=0,i=0;
	for (i = 0; i < n;i++) {
		total += score[i];
	}
	return(total > 0) ? total / n : 0;
	}
int found(int score[], int t,int r)
{
	int flag=0;
	for (int i = 0; i < r; i++) {
		if (score[i] > t)
			flag++;
	}
	return(flag > 0) ? flag : 0;
}