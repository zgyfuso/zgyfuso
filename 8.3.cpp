#include<stdio.h>
#define N 40
int main(void)
{
	long grade[N],fall=0,test=0,flag=1;
	printf("input grade \n");
	for (int i = 0; i < N; i++,flag++) {
		printf("input %ld grade\n",flag);
		scanf_s("%ld", &grade[i]);
		if (grade[i] <= 0) {
			test--;
			break;
		}
		test++;
	}
	for (int i = 0; i <= test; i++) {
		if (grade[i] <= 60&&grade[i]>0)
			fall++;
	}
	printf("all input %ld grades,inside fall is %ld", ++test, fall);
	return 0;
}