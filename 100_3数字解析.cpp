#include<stdio.h>
#include<math.h>
int main() {
	long int i, x, y, z;
	for (i = 1; i < 100000; i++) {
		x = sqrt(i + 100);/*xΪ����100�󿪷���Ľ��*/
		y = sqrt(i + 268);/*yΪ�ټ���168�󿪷���Ľ��*/

		if (x * x == i + 100 && y * y == i + 268) {/*���һ������ƽ������ƽ�����ڸ�������˵����������ȫƽ����*/

			printf("\n%ld\n", i);
		}
	}
}
