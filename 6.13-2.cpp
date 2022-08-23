#include<stdio.h>
#include<stdlib.h>
#include <time.h>
int main(void)
{
	int m, w, c;
	for(m=0;m<28;m++)
		for (w = 0; (w + m) < 29; w++) {
			c = 30 - w - m;
			if (3 * m + 2 * w + c == 50)
				printf("man is%5d,woman is %5d,child is%5d\n", m, w, c);
		}
	return 0;
}