#include<stdio.h>
int main(void)
{
	int c, c_h, c_f, r, r_h, r_f;
	int foot, head;
	printf("����ŵĸ�����");
	scanf_s("%d", &foot);
	printf("����ͷ�ĸ�����");
	scanf_s("%d", &head);
	for (c = 0, c_h = 0, c_f = 0; c_f < foot && c_h < head; c_h++, c_f += 2, c++)
		for (r = 0, r_h = 0, r_f = 0; r_h < foot && r_f < head; r++, r_h++, r_f += 4) {
			if (c_h + r_h == 98 && c_f + r_f == 386) {
				printf("���� %d,���� %d\n", c, r); 
				break;
			}
		}
	printf("������");
}