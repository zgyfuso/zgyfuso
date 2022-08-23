#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<conio.h>
int main(void)
{
    int array;
    int limit;
    int test;
        printf("输入随机数的最大值\n");
        scanf_s("%d", &limit);
        printf("输入任意键来开始随机运行\n");
        _getch();
        srand(time(0));
        while (!_kbhit())
        {
            array = rand() % limit + 1;
            system("cls");
            printf("数字在随机:.................按下任意键停止\n");
            printf("随机数是:%d\n", array);
        }
return 0;
}