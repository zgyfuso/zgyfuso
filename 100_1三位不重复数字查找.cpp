#include<stdio.h>
void main()
{
	long array;
	int a, b, c;
	for(a=1;a<5;a++)
		for(b=1;b<5;b++)
			for (c = 1; c < 5; c++) {
				if (a != b && a != c && c != a&&c!=b)
					printf("这个数字是%d%d%d\n", a, b, c);
			}

}