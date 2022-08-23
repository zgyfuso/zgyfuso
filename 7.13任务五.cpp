#include<stdio.h>
#include<math.h>
long prime_number(long);
int main(void)
{
	long array, array_last, last;
	long start, start_last=0, test, debris;
	printf("input number to judge\n");
	do
	{
		scanf_s("%ld", &array);
	} while (array < 0);
	array_last = array;
	last = prime_number(array);
	if (last == 1) {
		printf("the %ld is prime number\n", array);
	}
	else if (last == 0) {
		printf("the %ld is not prime number \n", array_last);
		for (start = 1; start < array; start++) {
			start_last += start;
			if (start_last == array_last)
				goto last;
		}
	last:printf(" but the %ld is perfect number \n",array_last);
	}
	return 0;
}
long prime_number(long array) {
	long min, max, test;
	min = 2;
	max = sqrt(array);
	for (test = min; test <= max; test++) {
		if (array % test == 0) {
			goto back;
		}
	}
	return 1;
back:return 0;
}
