#include<stdio.h>
int main(void)
{
	int begin=1,last,temp;
	printf("���Ҳ²¿���֪������͵���˼����\n");
	scanf("%d", &temp);
	for (int i = 1; i < temp; i++) {
		last = (begin + 1) * 2;
		begin = last;
	}
	printf("��һ�����Ŀ��%d\n", last);
	return 0;
}