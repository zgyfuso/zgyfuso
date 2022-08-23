#include<stdio.h>
int main(void)
{
	int input,sum=0;
	do
	{
		printf("input number\n");
		scanf_s("%d", &input);
		sum += input;
	} while (input >0);
	sum -= input;
	printf("the sum is %d", sum);
}