#include<stdio.h>
char* gohead(char* first, char* second);
int main(void)
{
	char first[20], second[20];
	printf("input first array\n");
	gets_s(first);
	printf("inpur second array\n");
	gets_s(second);
	printf("last is %s", gohead(first, second));
	return 0;
}
char* gohead(char* first, char* second)
{
	char* last;
	last = first;
	while (*first != '\0')
		first++;
	for (; *second != '\0'; first++, second++)
	{
		*first = *second;
	}
	*first = '\0';
	return last;
}