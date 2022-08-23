#include<stdio.h>
int main(void)
{
	int year,mouth,day;
	printf("input array\n\n\n\n");
	do {
		scanf_s("%d-%d-%d", &year, &mouth, &day);
	} while ((year > 2999 || year < 999) ||( mouth>12 || mouth < 1) ||( day>32 || day < 1));

	printf("你输入的是%d年%d月", year, mouth);
}