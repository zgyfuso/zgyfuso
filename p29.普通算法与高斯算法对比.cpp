#include<stdio.h>
#include < iostream>
#include <windows.h>
void test();
int main(void)
{
	printf("��ͨ�ۼ��㷨��\n");
	long start_time = GetTickCount64();   //��ȡ��ʼִ��ʱ��

	long n = 100000000;
	long sum=0;
	for (int i = 1; i <= n; i++) {
		sum += long(i);
	}
	printf("%ld", sum);

	long end_time = GetTickCount64();     //��ȡ����ʱ��
	long Times = end_time - start_time;
	printf("\n��������ʱ��%ldseconds\n", Times);
	test();
}
void test()
{

	printf("\n��˹�㷨��\n");
	long start_time = GetTickCount64();   //��ȡ��ʼִ��ʱ��

	long n = 100000000;
	long sum = 0;
	sum = n * (n + 1) / 2;
	printf("%ld", sum);

	long end_time = GetTickCount64();     //��ȡ����ʱ��
	long Times = end_time - start_time;
	printf("\n��������ʱ��%ldseconds\n", Times);
}