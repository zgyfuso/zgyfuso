#include<stdio.h>
long jiechen(int);
void main(void)
{
	long sum=0,temp=0;
	int flag;
	printf("input a number to jiechen:");
	scanf_s("%d", &flag);
	for (int i = 1; i <= flag; i++) {
		temp = jiechen(i);
		sum += temp;
	}
	printf("%ld", sum);
}
long jiechen(int x)
{
	long last = 1;
	for (int i = 1; i <= x; i++) {
		last *= i;
	}
	return last;
}