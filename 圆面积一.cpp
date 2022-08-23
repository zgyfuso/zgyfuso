#include<stdio.h>
#define pai 3.1415926
void main()
{
	double r;
	printf("输入圆的半径：");
	while (scanf_s("%lf", &r)) {
		printf("圆的面积是%5lf", pai * (r * r));
		printf("\n输入 q 结束,或继续输入圆半径：");
	}
}