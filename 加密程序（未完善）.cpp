#include<stdio.h>
int a, b, c, d;
long array;
int max,max_,min,min_,last;
void input(void);
void transfrom(void);
void change(void);
void add(void);
int main(void)
{
	input();
	transfrom();
	change();
	add();
	printf("���ܺ�Ϊ%d\n", last);
	return 0;
}
void input(void)
{
	printf("����һ����λ��\n");
	do {
		scanf_s("%ld", &array);
	} while (array < 999 && array>10000);
	a = array / 1000;//��
	b = array / 100 % 10;//ǧ
	c = array / 10 % 10;//��
	d = array % 10;//ʮ
	printf("��λ��%d,ǧλ��%d��ʮλ��%d����λ��%d\n", a, b, c, d);
}
void transfrom(void)
{
	a = (a + 5) % 10;
	b = (b + 5) % 10;
	c = (c + 5) % 10;
	d = (d + 5) % 10;
}
void change(void)
{

}
void add(void)
{
	last = a * 1000 + b * 100 + c * 10 + d;
}