#include<stdio.h>
int main(void)
{
	int number;
	int a, b, c, d, e;
	printf("������λ��\n");
	scanf_s("%d", &number);
	a = number / 10000;
	b = number % 10000 / 1000;
	c = number % 100 / 10;
	d = number % 10;
	if (a == d && b == c) printf("��������ǻ�����\n");
	else printf("������ֲ��ǻ�����\n");
	return 0;
}