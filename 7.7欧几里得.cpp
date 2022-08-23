#include<stdio.h>
long max(long, long);
int main(void)
{
	long a, b, c;
	printf("now input first array\n");
	scanf_s("%ld", &a);
	printf("now input second array\n");
	scanf_s("%ld", &b);
	c = max(a, b);
	printf("the biggest commen measure%ld", c);
	return 0;

}
long max(long a, long b)
{
	long test, min, max, r;
	min = (a < b) ? a : b;
	max = (a > b) ? a : b;
	for (;;) {
		r = max / min;
		if (r == 0)
			break;
		max = min;
		min = r;
	}
	test = min;
	return test;
}