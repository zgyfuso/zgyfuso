#include<stdio.h>
int main()
{
    double s = 1, i,flag = 0, n = 1;;
    for (i = 1;1.0 / i >=1e-7; i++,flag++, i = i * n){
        s += 1.0 / i;
       if (flag >= 1) { n++; }
    }
    printf("e�Ľ���ֵ�ǣ�%lf\nrun %0.0lf", s,flag);
}
