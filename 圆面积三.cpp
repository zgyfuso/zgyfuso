#include<stdio.h>
void main()
{
	double r;
	do {
		printf("输入圆的半径：");
		scanf_s("%lf", &r);
		getchar();
	} while (r < 0 || r>9);
	printf("圆的面积是%lf", r * r * 3.1415826);
}