#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#define ten 10
int main(void)
{
	int last[ten+1 ] = { 0,0,0,0,0,0,0,0,0,0 ,0};
	int temp;
	int max;
	printf("输入你想测试正态分布的总值\n");
	scanf_s("%d", &max);
		srand(time(0));
	for (int i = 0; i < max; i++)
	{
		temp = rand() % 10 + 1;
		last[temp]++;
	}
	for (int i = 1; i <= 10; i++) {
		printf("%d出现的频率是%d\n", i, last[i]);
	}
	return 0;
}
