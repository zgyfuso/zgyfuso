#include<stdio.h>
int main(void)
{
	int w, m, s;
	for (w = 0; w < 100; w++)
		for (s = 0; s < 100; s+=3) 
		for(m=0;m<100;m++)
		{
			if (5 * w + 3 * m + s == 100)
				printf("cook is %5d,chicken is %5d,small chicken is %5d\n", w, m, s);
		}
}