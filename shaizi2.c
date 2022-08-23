#include<time.h>
#include<stdlib.h>
#include<stdio.h>
int main(void)
{
	printf("规则：玩家和对手开始有1000积分。在3粒骰子掷出之前，玩家必须先下注。有三种方式可选，选大，选小或者豹子，假如玩家选大，那么3粒骰子掷出之后，骰子相加之和必须大于11，玩家才能赢，否则对手赢：假如玩家选小，那么3粒骰子掷出之后，骰子相加之和必须小于11，玩家才能赢，否则对手赢；假如玩家选豹子，那么3粒骰子掷出之后，3粒骰子的数字必须相同，玩家才能赢，否则对手赢。");
	int a,b,c,n,m,integral=1000,opponent=1000;
	int ret;
	srand((unsigned)time(NULL));
	do{
		a=rand()%6+1,b=rand()%6+1,c=rand()%6+1;
		printf("请投注：选大输入1，选小输入2，选豹子输入3：");
		ret=scanf("%d",&n);
		printf("请输入投注倍数（最高十倍）：");
		ret=scanf("%d",&m);
		while(ret!=1)
		{
			printf("输入错误，请重新输入！\n");
			while(getchar()!='\n');
            printf("请投注：选大输入1，选小输入2，选豹子输入3：");
            ret=scanf("%d",&n);
            printf("请输入投注倍数（最高十倍）：");
            ret=scanf("%d",&m);
		} 
		if(n>3)
		{
			printf("输入错误，请重新输入！\n");
			printf("请投注：选大输入1，选小输入2，选豹子输入3：");
		    ret=scanf("%d",&n);
		    printf("请输入投注倍数（最高十倍）：");
	 	    ret=scanf("%d",&m);
		}
		else if(n<0)
		{
			printf("输入错误，请重新输入！\n");
			printf("请投注：选大输入1，选小输入2，选豹子输入3：");
		    ret=scanf("%d",&n);
		    printf("请输入投注倍数（最高十倍）：");
		    ret=scanf("%d",&m);
		}
		else if(m<0)
		{
			printf("输入错误，请重新输入！\n");
			printf("请投注：选大输入1，选小输入2，选豹子输入3：");
		    ret=scanf("%d",&n);
		    printf("请输入投注倍数（最高十倍）：");
		    ret=scanf("%d",&m);
		}
		else if(m>10)
		{
			printf("输入错误，请重新输入！\n");
		    printf("请投注：选大输入1，选小输入2，选豹子输入3：");
		    ret=scanf("%d",&n);
	   	    printf("请输入投注倍数（最高十倍）：");
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
			printf("玩家获胜！\n");
			} 
			else if(a+b+c<11)
			{ 
			integral=integral-(10*m);
			opponent=opponent-(10*m)+(2*m);
			printf("对手获胜！\n");
			} 
			else if(a+b+c==11)
			{ 
			integral=integral-(10*m);
			opponent=opponent-(10*m);
			printf("打平！\n");
			} 
		}
		else if(n=2)
		{
			if(a+b+c<11)
			{ 
			integral=integral-(10*m)+(2*m);
			opponent=opponent-(10*m);
			printf("玩家获胜！\n");
			} 
			else if(a+b+c>11)
			{ 
			integral=integral-(10*m);
			opponent=opponent-(10*m)+(2*m);
			printf("对手获胜！\n");
			} 
			else if(a+b+c==11)
			{
			integral=integral-(10*m);
			opponent=opponent-(10*m);
			printf("打平！\n");
		    }
		}
		else if(n=3)
		{
			if(a=b=c)
			{
			integral=integral-(10*m)+(10*m);
			opponent=opponent-(10*m);
			printf("玩家获胜！\n");
		    }
			else if(a+b+c>11)
			{ 
			integral=integral-(10*m);
			opponent=opponent-(10*m)+(10*m);
			printf("对手获胜！\n");
			} 
			else if(a+b+c<11)
			{ 
			integral=integral-(10*m);
			opponent=opponent-(10*m)+(10*m);
			printf("对手获胜！\n");
			} 
			else if(a+b+c==11)
			{ 
			integral=integral-(10*m);
			opponent=opponent-(10*m);
			printf("打平！\n");
			} 
		}
		printf("integral=%d\nopponent=%d\n",integral,opponent);
	}while(!(integral<10||opponent<10));
	printf("您的游戏积分不足10，无法继续游戏！\n");
	return 0;
}
