#include<stdio.h>
void run(int, int, int);
int main(void)
{
	int p, q, r;
	printf("����p��q��r�����֣�֮��Ϊ0����1��\n");
	printf("����p��");
	scanf_s("%d", &p);
	printf("\n����q��");
	scanf_s("%d", &q);
	printf("\n����r��");
	scanf_s("%d", &r);
	run(p, q, r);
}
void run(int p, int q, int r)
{
	int p_temp = 0,s_temp=0,last=0;
	if (p == 1 && q == 0) {
		p_temp = 0;
	}
	else
		p_temp = 1;
	s_temp = !p && !r;
	if (p_temp == 1 && s_temp == 0) {
		last = 0;
	}
	else
		last = 1;
	printf("*******************************************\n\n");
	printf("(p->q)->(!p&&!r)�ý���ǣ�%d", last);
	
}