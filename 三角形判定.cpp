#include<stdio.h>
#include<math.h>
#define test 1e-3
void main()
{
	float a, b, c;
	printf("�����һ���ߣ�");
	scanf_s("%f", &a);
	printf("����ڶ����ߣ�");
	scanf_s("%f", &b);
	printf("����������ߣ�");
	scanf_s("%f", &c);
	if (a + b > c && a + c > b && c + b > a) {
		if (fabs(a - b) < test || fabs(b - c) < test || fabs(c - a) < test) printf("�ǵ���������");
	if ((a * a + b * b - c * c) < test || (a * a + c * c - b * b) < test || (c * c + b * b - a * a) < test) printf("��ֱ��������");
	else printf("һ��������");
	}
	else printf("����������");
}