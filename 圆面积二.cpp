#include<stdio.h>
#define pai 3.1415926
#define area(x) (x*x)*pai
void main()
{
	double r;
	printf("输入圆的半径：");
	if (scanf_s("%lf", &r))
		printf("\n圆的面积是：%lf", area(r));
}