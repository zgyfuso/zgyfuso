#include<stdio.h>
void coupy1(double tar1[5], double sou[5], double flag);
void coupy2(double *tar2, double *sou, double flag);
void coupy3(double tar3[5], double sou[5], double flag);
int main(void)
{
	double source[5] = { 1.1,2.2,3.3,4.4,5.5 };
	double target1[5];
	double target2[5];
	double target3[5];
	return 0;
}
void coupy1(double tar1[5], double sou[5], double flag)
{
	for (int i = 0; i < flag; i++)
	{
		tar1[i] = sou[i];
	}
}
void coupy2(double *tar2, double *sou, double flag)
{
	for (int i = 0; i < flag; i++)
	{
		*(tar2 + i) = *(sou + i);
	}
}