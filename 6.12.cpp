#include<stdio.h>
int main(void)
{
	int m, w, c;
	for (m = 0,w = 0, c = 0; m < 30 || w < 30 || c < 30;m++,w++,c++) {

		if(3m + c + 2w == 50 )
		printf("m is %d,w is %d,c is%d\n", m, w, c);
	}
	return 0;
}