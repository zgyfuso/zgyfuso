#include <stdio.h>



typedef struct Node
{
	char data;//存储线性表的元素值（1个） 
	struct Node *next;//存储后继元素节点的地址 
}SLinkList;

/*
为了方便操作，特别地加了一个头节点进来，类型和普通的节点一样
data：不使用 
next：存储第1个元素节点的地址 

若知道某个节点的地址，则
地址->data表示该节点data成员的值
地址->next表示该节点next成员的值

空：h->next==NULL 
最后一个节点：若p->next==NULL，说明p指向最后一个节点

执行下面语句1次， 
p=p->next; 
p的指向往后移动1个位置。 
*/

/*
1.初始化 
*/
SLinkList *InitList()
{
	SLinkList *h;
	h=(SLinkList *)malloc(sizeof(SLinkList));
	h->next=NULL;
	return h;
} 

/*
2.销毁 
*/
void DestroyList(SLinkList *h)
{
	int ListDelete(SLinkList *h,int i,char *e);
	char v;
	
	while(h->next!=NULL)//表不空
	{
		//删除第1个元素节点
		ListDelete(h,1,&v); 
	} 
	free(h);
} 

/*
3.判断线性表是否为空，
若为空，返回1；
否则，返回0 
*/
int ListEmpty(SLinkList *h)
{
	if(h->next==NULL)
	{
		return 1;
	} 
	else
	{
		return 0;
	}
}

/*
4.求长度 
*/ 
int ListLength(SLinkList *h)
{
	SLinkList *p;
	int len;
	p=h;
	len=0;
	while(p->next!=NULL)//p不是最后一个
	{
		p=p->next;
		len=len+1;
	} 
	return len;
} 

/*
5.输出 
*/
void DispList(SLinkList *h)
{
	SLinkList *p;
	p=h;
	while(p->next!=NULL)//p不是最后一个
	{
		p=p->next;
		printf("%d ",p->data); 
	} 
}

/*
5.取值
把线性表中的第i个元素取出来，存储到*e中

参数合法：i>=1 && i<=ListLength(h) 

若参数合法，进行相关操作，并返回1；
否则，提示，返回0 
*/
int GetElem(SLinkList *h,int i,char *e)
{
	SLinkList *p;
	int j;
	
	if(i>=1 && i<=ListLength(h))
	{
		p=h;
		for(j=1;j<=i;j++)
		{
			p=p->next;
		} 
		*e=p->data;
		return 1;
	} 
	else
	{
		printf("参数错误！\n");
		return 0;
	}	
}

/*
7.查找 
在线性表中查找是否存在值为e的元素，
若存在，返回该元素的位序；
否则，返回0 
*/
int LocateElem(SLinkList *h,char e)
{
	SLinkList *p;
	int len;
	p=h;
	len=0;
	while(p->next!=NULL)//p不是最后一个
	{
		p=p->next;
		len=len+1;
		
		if(p->data==e)
		{
			return len;
		} 
	} 
	return 0;
}

/*
8.添加 
在线性表的第i个位置添加一个值为e的元素进去

参数合法：i>=1 && i<=ListLength(h)+1 

若参数合法，进行相关操作，并返回1；
否则，提示，返回0 
*/
int ListInsert(SLinkList *h,int i,char e)
{
	SLinkList *p,*q;
	int j;
	
	if(i>=1 && i<=ListLength(h)+1)
	{
		//1.构造一个节点q，存储值为e的元素
		q=(SLinkList *)malloc(sizeof(SLinkList));
		q->data=e;
		//2.让p指向第i-1个 
		p=h;
		for(j=1;j<=i-1;j++)
		{
			p=p->next;
		}
		//3.添加
		q->next=p->next;
		p->next=q; 
		return 1;
	}
	else
	{
		printf("参数错误！\n");
		return 0;
	}	
}

/*
9.删除
把线性表中的第i个元素删除，并把删除的元素值存储到*e中 

参数合法：i>=1 && i<=ListLength(h) 

若参数合法，进行相关操作，并返回1；
否则，提示，返回0 
*/
int ListDelete(SLinkList *h,int i,char *e)
{
	SLinkList *p,*q;
	int j;
	
	if(i>=1 && i<=ListLength(h))
	{
		//1.让p指向第i-1个元素节点
		p=h;
		for(j=1;j<=i-1;j++)
		{
			p=p->next;
		}
		//2.让q指向第i个元素节点
		q=p->next;
		//3.把要删除的元素存储到*e中
		*e=q->data;
		//4.删除
		p->next=q->next;
		//5.释放所占的存储空间
		free(q); 
		return 1;
	}
	else
	{
		printf("参数错误！\n");
		return 0;
	}	
}


/*
变量先定义，再赋初值，才能使用 
*/
int main()
{
    
    
    
    return 0;
}
