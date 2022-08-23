#include<stdio.h>
void main(void)
{
	float a;
	printf("输入需要分离的数字\n");
	scanf_s("%f", &a);
	printf("整数是%d，小数是%.4f", (int)a,a-(int)a);
}