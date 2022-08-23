#include<stdio.h>
void run(int, int, int);
int main(void)
{
	int p, q, r;
	printf("输入p，q，r都数字（之可为0或者1）\n");
	printf("输入p：");
	scanf_s("%d", &p);
	printf("\n输入q：");
	scanf_s("%d", &q);
	printf("\n输入r：");
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
	printf("(p->q)->(!p&&!r)得结果是：%d", last);
	
}