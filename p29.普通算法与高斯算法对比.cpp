#include<stdio.h>
#include < iostream>
#include <windows.h>
void test();
int main(void)
{
	printf("普通累加算法：\n");
	long start_time = GetTickCount64();   //获取开始执行时间

	long n = 100000000;
	long sum=0;
	for (int i = 1; i <= n; i++) {
		sum += long(i);
	}
	printf("%ld", sum);

	long end_time = GetTickCount64();     //获取结束时间
	long Times = end_time - start_time;
	printf("\n程序运行时间%ldseconds\n", Times);
	test();
}
void test()
{

	printf("\n高斯算法：\n");
	long start_time = GetTickCount64();   //获取开始执行时间

	long n = 100000000;
	long sum = 0;
	sum = n * (n + 1) / 2;
	printf("%ld", sum);

	long end_time = GetTickCount64();     //获取结束时间
	long Times = end_time - start_time;
	printf("\n程序运行时间%ldseconds\n", Times);
}