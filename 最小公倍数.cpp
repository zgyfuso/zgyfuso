#include<stdio.h>
int lowest(int, int);
int main(void)
{
	int a, b, c,low,big;
	printf("now input first array\n");
	scanf_s("%d", &a);
	printf("now input second array\n");
	scanf_s("%d", &b);
	low = a < b ? a : b;
	big = a > b ? a : b;
	c = lowest(low, big);
	printf("the lowest array is%d", c);
	return 0;
}
int lowest(int a, int b)
{
	for (int i = a+1; i < 100; i++) {
		if (i%a==0&&i % b == 0&&i!=b) return i;
	}
	
}