#include < iostream>
#include <windows.h>
#include<stdio.h>
void main()
{
    long start_time = GetTickCount64();   //��ȡ��ʼִ��ʱ��

//����

        long end_time = GetTickCount64();     //��ȡ����ʱ��
    long Times = end_time - start_time;
    printf("\n\n\n��������ʱ��%ldseconds\n", Times);

}