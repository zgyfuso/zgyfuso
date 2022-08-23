#include<stdio.h>
int main(void)
{
	int c,c_h,c_f, r,r_h,r_f;
	for(c=0,c_h=0,c_f=0;c_f<387&&c_h<99;c_h++,c_f+=2,c++)
		for (r = 0, r_h = 0, r_f = 0; r_h < 98 && r_f < 386; r++, r_h++, r_f += 4) {
			if (c_h + r_h == 98 && c_f + r_f == 386) {
				printf("¼¦ÓÐ %d,ÍÃÓÐ %d\n", c, r);
			}
		}

}