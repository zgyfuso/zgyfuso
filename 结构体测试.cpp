#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define N 10
#define M 3

typedef struct candidate
{
    char name[N];
    int votes;
    int Invalid_ticket;
}CAND;

void Vote(int n, CAND arr[]);
int main()
{
    CAND candidate[M] = {//y一个 cand类型的candidate数组
                            {"zhang",0,0},//对应name
                            {"li",0,0 },//对应votes
                            {"wang",0,0 }//对应invalid ticker
    };
    int n;
    printf("please input the number of voters: \n");
    scanf_s("%d", &n);
    getchar();
    printf("the number of voters is %d \n", n);
    Vote(n, candidate);
    return 0;
}
void Vote(int n, CAND arr[])
{
    int i, j;
    char name[10];
    for (i = 0; i < n; i++)
    {
        printf("input %d name\n",i+1);
        gets_s(name);//大小为10
        for (j = 0; j < 3; j++)
        {
            if (strcmp(name, arr[j].name) == 0)
                arr[j].votes++;//计数        arr实际为candidate
    }
    for (j = 0; j < 3; j++)//输出模块
    {
        printf("%s: %d   ，last %d \n", arr[j].name, arr[j].votes,n-arr[j].votes);
    }
    // printf("%s: %d",arr[0].name,arr[1].votes);
}