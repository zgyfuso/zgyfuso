#include<stdio.h>
#include<math.h>
int main(void)
{
	double a, b, c, temp;
		printf("����aֵ��");
		scanf_s("%lf", &a);
		printf("\n����bֵ��");
		scanf_s("%lf", &b);
		printf("\n����cֵ��");
		scanf_s("%lf", &c);
		temp = (b * b) - (4 * a * c);
		if (temp < 0) printf("\n������");
		else {
			if (temp == 0) {
				printf("\nֻ��һ����");
				printf("��Ϊ%lf", ((-b) + sqrt(temp)) / (2 * a));
			}
			printf("\n������  ");
			printf("һ��%lf,����%lf", ((-b) + sqrt(temp)) / (2 * a), ((-b) - sqrt(temp)) / (2 * a));
		}
}