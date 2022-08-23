#include<stdio.h>
void trans(int*, int*);
int main(void)
{
	int x = 3, y = 2, z = 1;
	if (z < x) trans(&z, &x);
	if (z < y) trans(&z, &y);

	printf("x is %d,y is %d,z is %d", x, y, z);
}
void trans(int*a, int*b)
{
	int temp=*a;
	*a = *b;
	*b = temp;
}
