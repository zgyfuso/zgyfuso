#include<stdio.h>
double cube(double date)
{
	return (date * date * date);
}
void first()
{
	int flag = 3;
	double last = 0, temp = 0;
	//printf("  3���� 4���� 5����   \n");
	for (flag; flag < 6; flag++)
	{
		temp = cube(flag);
		last += temp;
		printf("%d������%5.0lf\n", flag, temp);
	}
	printf("����֮��Ϊ��%5.0lf", last);
	printf("\n6����Ϊ%5.0lf", cube(6));
}
void second()
{
	int flag = 6;
	double last = 0, temp = 0;
	//printf("  3���� 4���� 5����   \n");
	for (flag; flag < 70; flag++)
	{
		temp = cube(flag);
		last += temp;
		printf("   %d������%.0lf", flag, temp);
	}
	printf("\n\nȫ��֮��Ϊ��%.0lf", last);
	printf("\n180����Ϊ%.0lf", cube(180));
}
int main(void)
{
	first();
	printf("\n\n����һ�������ķָ���\n");
	printf("\n***************************************************\n");
	second();
}