#include <stdlib.h>
#include <stdio.h>
void fun(int  a[], int  n, int* max, int* d)
{
    *max = 0;
    for (int i = 0; i < n; i++) {
        if (a[i] > *max) {
            *max = a[i];
            *d = i;
        }
    }


}

main()
{
    int i, x[20], max, index, n = 10; //void NONO();
    for (i = 0; i < n; i++) { x[i] = rand() % 50; printf("%4d", x[i]); }
    printf("\n");
    fun(x, n, &max, &index);
    printf("Max =%5d ,  Index =%4d\n", max, index);
    //NONO();
    getchar();
}
/*void NONO()
{/* 本函数用于打开文件，输入数据，调用函数，输出数据，关闭文件。
    FILE* fp, * wf;
    int i, x[20], max, index, n = 10, j;

    fp = fopen("..\\..\\in.dat", "r");
    wf = fopen("..\\..\\out.dat", "w");
    for (i = 0; i < 10; i++) {
        for (j = 0; j < n; j++) fscanf(fp, "%d,", &x[j]);
        fun(x, n, &max, &index);
        fprintf(wf, "Max=%d,Index=%d\n", max, index);
    }
    fclose(fp);
    fclose(wf);
}*/

