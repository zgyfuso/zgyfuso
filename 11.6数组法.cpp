#include <stdio.h>
void Input(int a[][10], int n, int m);
int Findmax(int a[][10], int n, int m, int* pos, int* col);
int main()
{
    int  n, m, a[30][10];
    int maxNum;//����������ֵ
    int pRow;//������ֵ�±�
    int pcol;
    printf("Input n as row:\n");
    scanf_s("%d", &n);
    getchar();
    printf("Input m as col:\n");
    scanf_s("%d", &m);
     getchar();

    Input(a, n, m);
    maxNum = Findmax(a, n, m, &pRow, &pcol);
    printf("max=%d,row=%d,col=%d\n", maxNum, pRow, pcol);
    return 0;
}
//��������Ԫ�ص�ֵ
void Input(int a[][10], int n, int m)
{
    int i, j,flag=0;
    printf("Input %d*%d array:\n", n, m);
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < m; j++)
        {
            printf("input %d row ,%d col numbers\n", i + 1, j + 1);
            scanf_s("%d", &a[i][j]);
        }
    }
}
//�����������ֵ�����ֵ�±�
int Findmax(int a[][10], int n, int m, int* pos, int* col)
{

    int i, j, maxNum;
    *pos = 0;
    *col = 0;
    maxNum = a[0][0];
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < m; j++)
        {
            if (a[i][j] > maxNum)
            {
                maxNum = a[i][j];
                *pos = i;
                *col = j;
            }
        }
    }

    return maxNum;
}