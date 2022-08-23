#include<stdio.h>
long fact(int);
int main(void)
{
	int m;
}
long fact(int n)
{
	int i;
	long result=1;
	for (i = 2; i < n; i++) 
		result *= i;
	return result;
}