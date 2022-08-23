#include<stdio.h>
double cube(double date)
{
	return (date * date * date);
}
void first()
{
	int flag = 3;
	double last = 0, temp = 0;
	//printf("  3立方 4立方 5立方   \n");
	for (flag; flag < 6; flag++)
	{
		temp = cube(flag);
		last += temp;
		printf("%d立方：%5.0lf\n", flag, temp);
	}
	printf("三者之和为：%5.0lf", last);
	printf("\n6立方为%5.0lf", cube(6));
}
void second()
{
	int flag = 6;
	double last = 0, temp = 0;
	//printf("  3立方 4立方 5立方   \n");
	for (flag; flag < 70; flag++)
	{
		temp = cube(flag);
		last += temp;
		printf("   %d立方：%.0lf", flag, temp);
	}
	printf("\n\n全部之和为：%.0lf", last);
	printf("\n180立方为%.0lf", cube(180));
}
int main(void)
{
	first();
	printf("\n\n这是一条华丽的分割线\n");
	printf("\n***************************************************\n");
	second();
}