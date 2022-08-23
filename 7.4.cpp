#include<stdio.h>
int lowest(int, int);
int main(void)
{
	int a, b, c;
	printf("now input first array\n");
	scanf_s("%d", &a);
	printf("now input second array\n");
	scanf_s("%d", &b);
	c = lowest(a, b);
	printf("the lowest array is%d", c);
	return 0;
}
int lowest(int a, int b)
{
	int f;
	for (f = 1;; f++) {
		if (a *b==f)
			break;
	}
	return f;
}