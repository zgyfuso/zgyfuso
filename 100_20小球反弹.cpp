#include<stdio.h>
int main(void)
{
	int m=100,total=0, again=0, flag;
	printf("输入小球反弹的次数\n");
	scanf_s("%d", &flag);
	for (int i = 0; i < flag; i++) {
		total += m;
		m /= 2;
		total += m;
		again++;
	}
	printf("总共运动了%d，第十次反弹了%d\n", total, m);
}