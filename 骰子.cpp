#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<conio.h>
int main(void)
{
    int array;
    int limit;
    int test;
        printf("��������������ֵ\n");
        scanf_s("%d", &limit);
        printf("�������������ʼ�������\n");
        _getch();
        srand(time(0));
        while (!_kbhit())
        {
            array = rand() % limit + 1;
            system("cls");
            printf("���������:.................���������ֹͣ\n");
            printf("�������:%d\n", array);
        }
return 0;
}