#include<stdio.h>
int main(void)
{
	int m=100,total=0, again=0, flag;
	printf("����С�򷴵��Ĵ���\n");
	scanf_s("%d", &flag);
	for (int i = 0; i < flag; i++) {
		total += m;
		m /= 2;
		total += m;
		again++;
	}
	printf("�ܹ��˶���%d����ʮ�η�����%d\n", total, m);
}