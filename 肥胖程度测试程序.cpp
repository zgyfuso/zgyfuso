#include<stdio.h>
int main(void)
{
	float weight, high,last;
	printf("输入体重\n");
	scanf_s("%f", &weight);
	printf("输入身高\n");
	scanf_s("%f", &high);
	high /= 100;
	last = weight/ (high * high);
	if (last > 18.5 && last < 24.9)
		printf("正常\n");
	else if (last < 18.5)
		printf("消瘦\n");
	else if (last > 25 && last < 29.9)
		printf("1级肥胖\n");
	else if (last >= 25)
		printf("超重\n");
	else if (last > 30 && last < 34.5)
		printf("2级肥胖\n");
	else if (last > 35 && last < 39.9)
		printf("3级肥胖\n");
	else if (last > 40)
		printf("4级肥胖\n");
	return 0;
}