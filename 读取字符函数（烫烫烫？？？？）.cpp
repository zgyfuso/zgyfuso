#include<stdio.h>
#define SIZE 10
char* get(char array[],int n);
int main(void)
{
	char a[SIZE],*put;
	get(a,SIZE);
	puts(a);
	return 0;
}
char* get(char array[],int n)
{
	for (int i = 0; i < n; i++)
	{
		array[i] = getchar();
	}
	return array;
}
