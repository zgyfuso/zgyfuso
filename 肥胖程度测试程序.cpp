#include<stdio.h>
int main(void)
{
	float weight, high,last;
	printf("��������\n");
	scanf_s("%f", &weight);
	printf("�������\n");
	scanf_s("%f", &high);
	high /= 100;
	last = weight/ (high * high);
	if (last > 18.5 && last < 24.9)
		printf("����\n");
	else if (last < 18.5)
		printf("����\n");
	else if (last > 25 && last < 29.9)
		printf("1������\n");
	else if (last >= 25)
		printf("����\n");
	else if (last > 30 && last < 34.5)
		printf("2������\n");
	else if (last > 35 && last < 39.9)
		printf("3������\n");
	else if (last > 40)
		printf("4������\n");
	return 0;
}