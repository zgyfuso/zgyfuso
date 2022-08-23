#include<stdio.h>
int main(void)
{
	int ten, five, one,paper=1;
	for (ten = 10; ten < 50; ten += 10, paper+=2)
		for (five = 5; five < 50; five += 5) {
			one = 50 - paper;
			if (ten + five + one == 100)
				printf("ten is %d,five is%d,one is %d", ten / 10, five / 10, one);
		}
}