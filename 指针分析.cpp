#include<stdio.h>
int main(void)
{
	int a[] = { 1,2,3,4,5 };
	int* p = a;
	printf("{ 1,2,3,4,5 }\n");
	printf("a is %p\n", a);
	printf(" p is %p\n", p);
	printf(" *p is %d\n", *p);
	printf(" *(++p) is %d\n", *(++p));
	printf(" (*p)++ is %d\n", (*p)++);
	printf("*p is %d\n", *p);
	printf("*p-- is %d\n", *p--);
	printf("--(*p) is %d\n", --(*p));
	printf("*p is %d\n", *p);
	return 0;
}