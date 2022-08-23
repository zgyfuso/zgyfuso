#include<stdio.h>
int main(void)
{
	long double a=1, temp=0;
	for (int i = 1; i <= 20; i++) {
		a *= i;
		temp += a;
	}
	printf("%lf", temp);
}