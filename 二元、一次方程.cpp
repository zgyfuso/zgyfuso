#include<stdio.h>
#include<math.h>
int main(void)
{
	double a, b, c, temp;
		printf("输入a值：");
		scanf_s("%lf", &a);
		printf("\n输入b值：");
		scanf_s("%lf", &b);
		printf("\n输入c值：");
		scanf_s("%lf", &c);
		temp = (b * b) - (4 * a * c);
		if (temp < 0) printf("\n不成立");
		else {
			if (temp == 0) {
				printf("\n只有一个解");
				printf("解为%lf", ((-b) + sqrt(temp)) / (2 * a));
			}
			printf("\n两个解  ");
			printf("一：%lf,二：%lf", ((-b) + sqrt(temp)) / (2 * a), ((-b) - sqrt(temp)) / (2 * a));
		}
}