#include<stdio.h>
#define pai 3.1415926
void main()
{
	double r;
	printf("����Բ�İ뾶��");
	while (scanf_s("%lf", &r)) {
		printf("Բ�������%5lf", pai * (r * r));
		printf("\n���� q ����,���������Բ�뾶��");
	}
}