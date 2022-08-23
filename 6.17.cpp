#include<stdio.h>
int main(void)
{
	int line, list;
	printf("1       2      3     4      5      6      7      8      9\n");
	printf("-       -      -     -      -      -      -      -      -\n");
	for (line = 1; line < 10; line++) {
		for (list = 1; list <10; list++) {
			printf("%2d     ", list*line);
		}
		printf("\n");
	}
}