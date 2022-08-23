#include<stdio.h>
int main(void)
{
	printf("the following is conversional table\n");
	printf(" ¡æ           ¨H\n");
	for (float array = 0; array <= 300; array=array + 10)
	{
		printf("%4.2f        %4.2f\n", array, (double(array) + 32) / 9 * 5);
	}
	return 0;
}