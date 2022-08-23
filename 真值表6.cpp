#include<stdio.h>

//计算p、q命题的蕴含
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
//对命题X去反
int Anti_F(int x)
{
    return !x;
}
//对命题p、q取与
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
    printf("输出 (p->q)->(!p∩！r)\n");
    int num[4][2] = { {0,0},{0,1},{1,0},{1,1} };//存储P、Q的真值
    int r[2] = { 0,1 };//存储R的真值
    printf("p  q  r  p->q   !p∩！r    (p->q)->(!p∩！r)\n");
    for (int i = 0; i < 4; i++)
    {
        printf("%d  %d  %d", num[i][0], num[i][1], r[0]);//输出p、q、r的真值
        printf("   %d", contain_F(num[i][0], num[i][1]));//计算p、q命题的蕴含值
        printf("       %d", And_F(Anti_F(num[i][0]), Anti_F(r[0])));//计算p、q取反后的合取值
        //计算总的命题真值
        printf("               %d", contain_F(contain_F(num[i][0], num[i][1]), And_F(Anti_F(num[i][0]), Anti_F(r[0]))));
        printf("\n");
        //计算R值取另一种情况下的值
        printf("%d  %d  %d", num[i][0], num[i][1], r[1]);
        printf("   %d", contain_F(num[i][0], num[i][1]));
        printf("       %d", And_F(Anti_F(num[i][0]), Anti_F(r[1])));
        printf("               %d", contain_F(contain_F(num[i][0], num[i][1]), And_F(Anti_F(num[i][0]), Anti_F(r[1]))));
        printf("\n");
    }
}
