#include<stdio.h>
int main(void)
{
	int a, b;
	for (a = 0; a < 10; a++) {
		for (b = 1; b < a+1; b++) {
			printf("%2d*%2d=%3d  ", a, b, a * b);
		}
		printf("\n");
	}
	return 0;
}