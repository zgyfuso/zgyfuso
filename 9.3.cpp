#include<stdio.h>
void swap(int* a, int* b);
int main(void)
{
	int a, b;
	printf("input two number to change\n");
	printf("the first is \n");
	scanf_s("%d", &a);
	printf("the second is \n");
	scanf_s("%d", &b);
	swap(&a, &b);
	printf("a is %d,b is %d\n", a, b);
	return 0;
}
void swap(int* a, int* b)
{
	int temp;
	temp = *a;
	*a = *b;
	*b = temp;
}