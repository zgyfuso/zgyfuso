#include<stdio.h>
void main()
{
	int a, b, c,t;
	scanf_s("%d,%d,%d", &a, &b, &c);
	if (b > a) { t = a; a = b; b = t; }
	if (b < c) { t = b; b =c ; c = t; }
	if (a < b) { t = a; a = b; b = t; }
	printf("%d,%d,%d", a, b, c);
}