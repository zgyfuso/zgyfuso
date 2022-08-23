#include<stdio.h>
int main(void)
{
	float a=2, b=1, sum=0,temp;
	for (int i = 0; i < 20; i++) {
		sum += a / b;
		temp = a;
		a += b;
		b=temp;
	}
	printf("第二十个数列是%f", sum);
}