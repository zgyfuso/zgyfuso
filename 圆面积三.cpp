#include<stdio.h>
void main()
{
	double r;
	do {
		printf("����Բ�İ뾶��");
		scanf_s("%lf", &r);
		getchar();
	} while (r < 0 || r>9);
	printf("Բ�������%lf", r * r * 3.1415826);
}