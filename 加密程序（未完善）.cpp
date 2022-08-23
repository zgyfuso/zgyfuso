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
	printf("加密后为%d\n", last);
	return 0;
}
void input(void)
{
	printf("输入一个四位数\n");
	do {
		scanf_s("%ld", &array);
	} while (array < 999 && array>10000);
	a = array / 1000;//万
	b = array / 100 % 10;//千
	c = array / 10 % 10;//百
	d = array % 10;//十
	printf("万位是%d,千位是%d，十位是%d，个位是%d\n", a, b, c, d);
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