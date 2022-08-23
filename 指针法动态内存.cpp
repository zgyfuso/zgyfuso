#include <stdio.h>
#include<stdlib.h>
void Input(int* a, int n, int m);
int Findmax(int* a, int n, int m, int* pos, int* col);
int main()
{
    int  n, m, *p=NULL;
    int maxNum;//存放数组最大值
    int pRow;//存放最大值下标
    int pcol;
    printf("Input n as row:\n");
    scanf_s("%d", &n);
    getchar();
    printf("Input m as col:\n");
    scanf_s("%d", &m);
    getchar();
    p = (int*)calloc(m * n, sizeof(int));
    if (p == NULL)
    {
        printf("no enough memotys\n");
        exit(1);
    }
    Input(p, n, m);
    maxNum = Findmax(p, n, m, &pRow, &pcol);
    printf("max=%d,row=%d,col=%d\n", maxNum, pRow, pcol);
    free(p);
    return 0;
}
//读入数组元素的值
void Input(int* a, int n, int m)
{
    int i, j, flag = 0;
    printf("Input %d*%d array:\n", n, m);
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < m; j++)
        {
            printf("input %d row ,%d col numbers\n", i + 1, j + 1);
            scanf_s("%d", &a[i * m + j]);
        }
    }
}
//计算数组最大值及最大值下标
int Findmax(int* a, int n, int m, int* pos, int* col)
{

    int i, j, maxNum;
    *pos = 0;
    *col = 0;
    maxNum = *a;
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < m; j++)
        {
            if (a[i * m + j] > maxNum)
            {
                maxNum = a[i * m + j];
                *pos = i;
                *col = j;
            }
        }
    }

    return maxNum;
}