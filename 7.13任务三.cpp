#include<stdio.h>
#include<math.h>
long prime_number(long);
int main(void)
{
	long array, last,start,sum=0;
	printf("input number to judge\n");
	do
	{
		scanf_s("%ld", &array);
	} while (array < 0);
	for (start = 2; start <= array; start++) {
		last = prime_number(start);
		sum += last;
	}
	printf(" the range of 1-%ld sum is %ld", array,sum);
	return 0;
}
long prime_number(long array) {
	long min, max, test;
	min = 2;
	max = array;
	for (test = min; test <max; test++) {
		if (array % test == 0) {
			goto back;
		}
	}
	return array;
back:return 0;
}
