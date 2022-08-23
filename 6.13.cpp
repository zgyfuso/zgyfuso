#include<stdio.h>
#include<stdlib.h>
#include <time.h>
int main(void)
{
	int m, w, c;
	srand((unsigned)time(NULL));
	for (;;) {
		m = rand()%31;
		w = rand()%31;
		c = rand()%31;
		if (3 * m + c + 2 * w == 50 && m + w + c == 30) {
			printf("man is %d,women is %d,child is%d\n", m, w, c);
			break;
		}
	}
	return 0;
}