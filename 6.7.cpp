#include<stdio.h>
int main()
{
    double i, sum = 1000000;

    int year;    /* j Ϊ������ ������������ʵ�ַ�һ�� */

    printf("�������ֵ������,����������С����ʾ\n");

    scanf_s("%lf", &i);

    for (year = 1;; year++)
    {
        sum = sum * (1 + i);

        if(sum >= 2000000)
        {
            break;
        }
    }
    printf("����%d��ʵ�ַ�һ��\n", year);

    return 0;

}

