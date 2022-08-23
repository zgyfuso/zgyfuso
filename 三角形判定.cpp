#include<stdio.h>
#include<math.h>
#define test 1e-3
void main()
{
	float a, b, c;
	printf("输入第一条边：");
	scanf_s("%f", &a);
	printf("输入第二条边：");
	scanf_s("%f", &b);
	printf("输入第三条边：");
	scanf_s("%f", &c);
	if (a + b > c && a + c > b && c + b > a) {
		if (fabs(a - b) < test || fabs(b - c) < test || fabs(c - a) < test) printf("是等腰三角形");
	if ((a * a + b * b - c * c) < test || (a * a + c * c - b * b) < test || (c * c + b * b - a * a) < test) printf("是直角三角形");
	else printf("一般三角形");
	}
	else printf("不是三角形");
}