#include<stdio.h>
int main(void) 
{
	int i = 1;
	int* p;
	p = &i;
	printf("%d", p);
	return 0;
}