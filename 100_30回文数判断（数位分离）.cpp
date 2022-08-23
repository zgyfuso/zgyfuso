#include<stdio.h>
int main(void)
{
	int number;
	int a, b, c, d, e;
	printf("输入五位数\n");
	scanf_s("%d", &number);
	a = number / 10000;
	b = number % 10000 / 1000;
	c = number % 100 / 10;
	d = number % 10;
	if (a == d && b == c) printf("这个数字是回文数\n");
	else printf("这个数字不是回文数\n");
	return 0;
}