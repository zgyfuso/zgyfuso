#include<stdio.h>

//����p��q������̺�
int contain_F(int x, int y)
{
    if (x == 1)
    {
        if (y == 0)
        {
            return 0;
        }
        else
        {
            return 1;
        }
    }
    else
    {
        return 1;
    }
}
//������Xȥ��
int Anti_F(int x)
{
    return !x;
}
//������p��qȡ��
int And_F(int x, int y)
{
    if (x == y)
    {
        if (x == 0)
        {
            return 0;
        }
        else
        {
            return 1;
        }
    }
    else
    {
        return 0;
    }
}





int main()
{
    printf("��� (p->q)->(!p�ɣ�r)\n");
    int num[4][2] = { {0,0},{0,1},{1,0},{1,1} };//�洢P��Q����ֵ
    int r[2] = { 0,1 };//�洢R����ֵ
    printf("p  q  r  p->q   !p�ɣ�r    (p->q)->(!p�ɣ�r)\n");
    for (int i = 0; i < 4; i++)
    {
        printf("%d  %d  %d", num[i][0], num[i][1], r[0]);//���p��q��r����ֵ
        printf("   %d", contain_F(num[i][0], num[i][1]));//����p��q������̺�ֵ
        printf("       %d", And_F(Anti_F(num[i][0]), Anti_F(r[0])));//����p��qȡ����ĺ�ȡֵ
        //�����ܵ�������ֵ
        printf("               %d", contain_F(contain_F(num[i][0], num[i][1]), And_F(Anti_F(num[i][0]), Anti_F(r[0]))));
        printf("\n");
        //����Rֵȡ��һ������µ�ֵ
        printf("%d  %d  %d", num[i][0], num[i][1], r[1]);
        printf("   %d", contain_F(num[i][0], num[i][1]));
        printf("       %d", And_F(Anti_F(num[i][0]), Anti_F(r[1])));
        printf("               %d", contain_F(contain_F(num[i][0], num[i][1]), And_F(Anti_F(num[i][0]), Anti_F(r[1]))));
        printf("\n");
    }
}
