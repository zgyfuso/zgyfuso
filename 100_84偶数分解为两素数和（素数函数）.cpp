#include<stdio.h>
#include<math.h>
int prime( int);
void main()
{
	 int even_number;
	printf("输入一个偶数：");
	if (scanf_s("%d", &even_number)) {
		if (even_number < 0||even_number % 2 != 0) goto wrong;
		printf("##################################\n\n");
		for (int i = 2; i < even_number; i++)
			if (prime(i) && prime(even_number - i)) {
				printf("\n\n%d=%d+%d", even_number, i, even_number - i);
			}
	}
wrong:printf("\n\n输入错误");
}
int prime(int n)
{
	int i;
	if (n < 4)return 1;
	else if (n % 2 == 0)return 0;
	else
		for (i = 3; i < sqrt(n) + 1; i++)
			if (n % i == 0)return 0;

	return 1;
}