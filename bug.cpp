#include<stdio.h>
#include<ctype.h>
#define N 100 
int main()
{
    char ch[N];
    int i, count = 0;
    printf("����һ���ַ���");
    gets_s(ch);
    i = 0;
    while (ch[i] != '\0')
    {
        if (!isgraph(ch[i])) //���ո�ִ��
        {
            count++;
        }
        i++;
    }
    printf("��%d������\n", count + 1);//countֻ��¼�˿ո�
}