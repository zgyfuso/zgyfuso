#include<stdio.h>
int main(void)
{
	long a, b, c=0,flag=0;
	scanf_s("%2ld%2ld", &a, &b);
	if (a > 12)
	{
		if ((a - 1)-10 == 0)
			c = 1;
		if ((a - 2)-20 == 0)
			c = 2;
		if ((c - 3)-30 == 0)
			c = 3;
		if (c==0)
		{
			printf("�·��������\n");
			goto last;
		}
		b += c * 10;
		a /= 10;
	}
	if (b > 32)
	{
		printf("�����������\n");
		goto last;
	}
	printf("��������·���%ld   ������%ld\n", a, b);
	last:
	return 0;
}