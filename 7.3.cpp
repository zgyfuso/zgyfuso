#include<stdio.h>
int max(int, int);
int main(void)
{
	int a, b,c;
	printf("now input first array\n");
	scanf_s("%d", &a);
	printf("now input second array\n");
	scanf_s("%d", &b);
	c = max(a, b);
	printf("the max is %d", c);
	return 0;
}
int max(int a,int b)
{
	int hhh;
	hhh = (a > b) ? a : b;
	return hhh;
	
}