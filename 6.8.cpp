#include<stdio.h>
int main(void)
{
    float s = 1, i, e, flag = 1;
    for (i = 3; 1.0 / i >= 1.0 / 100000; i++)
    {
        s = 1 / i * flag;

    }
    e = s;
    printf("e的近似值是：%f\n", e);
}
