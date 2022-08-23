#include<stdio.h>
long fact(long);
int main(void)
{
	long m, test, last,sum=0;
	printf("now input max array\n");
	scanf_s("%ld", &m);
	for (test = 1; test < m; test++) {
		last = fact(test);
		sum += last;
	}
	printf("the last sum is %ld", sum);
	return 0;
}
long fact(long n)
{
	int i;
	long result = 1;
	for (i = 2; i < n; i++)
		result *= i;
	return result;
}