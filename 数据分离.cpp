#include<stdio.h>
void main(void)
{
	float a;
	printf("������Ҫ���������\n");
	scanf_s("%f", &a);
	printf("������%d��С����%.4f", (int)a,a-(int)a);
}