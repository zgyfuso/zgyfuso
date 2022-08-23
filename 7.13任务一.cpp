#include<stdio.h>
#include<math.h>
long prime_number(long);
int main(void)
{
	long array, last;
	printf("input number to judge\n");
	do
	{
		scanf_s("%ld", &array);
	} while (array < 0);
	last = prime_number(array);
	if (last == 1) {
		printf("the %ld is prime number\n", array);
	}
	else if (last == 0) {
		printf("the %ld is not prime number\n", array);
	}
	return 0;
}
long prime_number(long array) {
	long min, max, test;
	min = 2;
	max = array;
	for (test = min; test < max; test++) {
		if (array % test == 0) {
			goto back;
		}
	}
	return 1;
back:return 0;
}
