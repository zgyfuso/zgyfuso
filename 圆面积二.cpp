#include<stdio.h>
#define pai 3.1415926
#define area(x) (x*x)*pai
void main()
{
	double r;
	printf("����Բ�İ뾶��");
	if (scanf_s("%lf", &r))
		printf("\nԲ������ǣ�%lf", area(r));
}