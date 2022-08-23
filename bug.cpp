#include<stdio.h>
#include<ctype.h>
#define N 100 
int main()
{
    char ch[N];
    int i, count = 0;
    printf("输入一行字符：");
    gets_s(ch);
    i = 0;
    while (ch[i] != '\0')
    {
        if (!isgraph(ch[i])) //遇空格执行
        {
            count++;
        }
        i++;
    }
    printf("有%d个单词\n", count + 1);//count只记录了空格
}