#include<stdio.h>
void main(void)
{
	long temp=1, sum=0;
	for (int i = 1; i <= 3; i++) {
		for (int j = 1; j <= i; j++) {
			temp *= long(j);
		}
		sum += temp;
		temp = 1;
	}
	printf("%ld", sum);
}