#include<stdio.h>
#define N 80
void mystrcpy(char dststr[], char srcstr[]);
int main(void)
{
	char a[N], b[N];
	printf("input start string\n");
	gets_s(a);
	printf("input change string\n");
	gets_s(b);
	mystrcpy(b, a);
	printf("the last is \n");
	puts(a);
	return 0;
}
void mystrcpy(char dststr[], char srcstr[])
{
	int i = 0;
	while (srcstr[i] != '\0')
	{
		
		if (srcstr[i] == dststr[0]) {
			srcstr[i] = ' ';
		}
		i++;
	}
	srcstr[i] = '\0';
}