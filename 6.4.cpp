#include<stdio.h>
int main(void)
{
	printf("输入转换的最大数\n");
	float array, limit;
	scanf_s("%f", &limit);
	for (array = 1; array <= limit; array++)
	{
		printf("数字是%f,该数平方是%f，该数立方是%f\n", double(array), double(array) * double(array), double(array) * double(array) * double(array));
	}
	printf("over");
	return 0;
}
