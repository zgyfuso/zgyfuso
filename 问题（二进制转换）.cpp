#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#define SIZE 32
int change(char*);
int main()
{
	char input[SIZE]="1001";
	//printf("enter the binary string:");
	//scanf_s("%s", input);
	//为何上行无法正常运行
	printf("%d\n", change(input));
	return 0;
}
int change(char* st)
{
	int sum = 0;
	while(*st != '\0') {
		sum *= 2;
		sum += *st++ - '0';
	}
	return sum;
}