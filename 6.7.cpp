#include<stdio.h>
int main()
{
    double i, sum = 1000000;

    int year;    /* j 为计数器 计算多少年可以实现翻一番 */

    printf("请输入产值增长率,增长率请用小数表示\n");

    scanf_s("%lf", &i);

    for (year = 1;; year++)
    {
        sum = sum * (1 + i);

        if(sum >= 2000000)
        {
            break;
        }
    }
    printf("至少%d年实现翻一番\n", year);

    return 0;

}

