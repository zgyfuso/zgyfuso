#include<time.h>
#include<stdlib.h>
#include<stdio.h>
int main(void)
{
	printf("������ҺͶ��ֿ�ʼ��1000���֡���3����������֮ǰ����ұ�������ע�������ַ�ʽ��ѡ��ѡ��ѡС���߱��ӣ��������ѡ����ô3����������֮���������֮�ͱ������11����Ҳ���Ӯ���������Ӯ���������ѡС����ô3����������֮���������֮�ͱ���С��11����Ҳ���Ӯ���������Ӯ���������ѡ���ӣ���ô3����������֮��3�����ӵ����ֱ�����ͬ����Ҳ���Ӯ���������Ӯ��");
	int a,b,c,n,m,integral=1000,opponent=1000;
	int ret;
	srand((unsigned)time(NULL));
	do{
		a=rand()%6+1,b=rand()%6+1,c=rand()%6+1;
		printf("��Ͷע��ѡ������1��ѡС����2��ѡ��������3��");
		ret=scanf("%d",&n);
		printf("������Ͷע���������ʮ������");
		ret=scanf("%d",&m);
		while(ret!=1)
		{
			printf("����������������룡\n");
			while(getchar()!='\n');
            printf("��Ͷע��ѡ������1��ѡС����2��ѡ��������3��");
            ret=scanf("%d",&n);
            printf("������Ͷע���������ʮ������");
            ret=scanf("%d",&m);
		} 
		if(n>3)
		{
			printf("����������������룡\n");
			printf("��Ͷע��ѡ������1��ѡС����2��ѡ��������3��");
		    ret=scanf("%d",&n);
		    printf("������Ͷע���������ʮ������");
	 	    ret=scanf("%d",&m);
		}
		else if(n<0)
		{
			printf("����������������룡\n");
			printf("��Ͷע��ѡ������1��ѡС����2��ѡ��������3��");
		    ret=scanf("%d",&n);
		    printf("������Ͷע���������ʮ������");
		    ret=scanf("%d",&m);
		}
		else if(m<0)
		{
			printf("����������������룡\n");
			printf("��Ͷע��ѡ������1��ѡС����2��ѡ��������3��");
		    ret=scanf("%d",&n);
		    printf("������Ͷע���������ʮ������");
		    ret=scanf("%d",&m);
		}
		else if(m>10)
		{
			printf("����������������룡\n");
		    printf("��Ͷע��ѡ������1��ѡС����2��ѡ��������3��");
		    ret=scanf("%d",&n);
	   	    printf("������Ͷע���������ʮ������");
		    ret=scanf("%d",&m);
		}
		printf("a=%d\nb=%d\nc=%d\n",a,b,c);
		printf("a+b+c=%d\n",a+b+c);
		if(n=1)
		{
			if(a+b+c>11)
			{ 
			integral=integral-(10*m)+(2*m); 
			opponent=opponent-(10*m);
			printf("��һ�ʤ��\n");
			} 
			else if(a+b+c<11)
			{ 
			integral=integral-(10*m);
			opponent=opponent-(10*m)+(2*m);
			printf("���ֻ�ʤ��\n");
			} 
			else if(a+b+c==11)
			{ 
			integral=integral-(10*m);
			opponent=opponent-(10*m);
			printf("��ƽ��\n");
			} 
		}
		else if(n=2)
		{
			if(a+b+c<11)
			{ 
			integral=integral-(10*m)+(2*m);
			opponent=opponent-(10*m);
			printf("��һ�ʤ��\n");
			} 
			else if(a+b+c>11)
			{ 
			integral=integral-(10*m);
			opponent=opponent-(10*m)+(2*m);
			printf("���ֻ�ʤ��\n");
			} 
			else if(a+b+c==11)
			{
			integral=integral-(10*m);
			opponent=opponent-(10*m);
			printf("��ƽ��\n");
		    }
		}
		else if(n=3)
		{
			if(a=b=c)
			{
			integral=integral-(10*m)+(10*m);
			opponent=opponent-(10*m);
			printf("��һ�ʤ��\n");
		    }
			else if(a+b+c>11)
			{ 
			integral=integral-(10*m);
			opponent=opponent-(10*m)+(10*m);
			printf("���ֻ�ʤ��\n");
			} 
			else if(a+b+c<11)
			{ 
			integral=integral-(10*m);
			opponent=opponent-(10*m)+(10*m);
			printf("���ֻ�ʤ��\n");
			} 
			else if(a+b+c==11)
			{ 
			integral=integral-(10*m);
			opponent=opponent-(10*m);
			printf("��ƽ��\n");
			} 
		}
		printf("integral=%d\nopponent=%d\n",integral,opponent);
	}while(!(integral<10||opponent<10));
	printf("������Ϸ���ֲ���10���޷�������Ϸ��\n");
	return 0;
}
