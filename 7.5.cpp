#include<stdio.h>
long fact(long);
int main(void)
{
	long m,test,last;
	printf("now input max array\n");
	scanf_s("%ld",&m);
	printf("array  array!\n");
	for (test = 1; test < m; test++) {
		printf("%ld      ",test);
		last = fact(test);
		printf("%ld\n", last);
	}
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