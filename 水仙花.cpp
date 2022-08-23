#include<stdio.h>
int main(void)
{
	int f, s, t, array;
	for (array = 100; array < 1000; array++)
	{
		f = array % 10;
		s = (array / 10) % 10;
		t = array / 100;
		if (array == f * f * f + s * s * s + t * t * t) {
			printf("¸ÃÊı×ÖÊÇ %d\n", array);
		}
	}
	return 0;
}