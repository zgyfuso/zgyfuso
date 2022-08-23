#include < iostream>
#include <windows.h>
#include<stdio.h>
void main()
{
    long start_time = GetTickCount64();   //获取开始执行时间

//过程

        long end_time = GetTickCount64();     //获取结束时间
    long Times = end_time - start_time;
    printf("\n\n\n程序运行时间%ldseconds\n", Times);

}