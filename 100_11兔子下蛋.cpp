#include<stdio.h>
int main()
{
    int a = 1, b = 1,c;
    for (int i=1;i<20;i++) {
        printf("%12d%12d ",a,b);
        if (i % 2 == 0) printf("\n");
        a = b+a;
        b = b+a;
    }
    return 0;
}