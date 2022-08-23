#include <stdio.h>

//typedef int int;

typedef struct Node
{
	int data;//存储线性表的元素值（1个） 
	struct Node *next;//存储后继元素节点的地址 
	struct Node *prior;//存储前驱元素节点的地址
}DLinkList;

/*
为了方便操作，特别地加了一个头节点进来，类型和普通节点一样
data：不用 
next：存储第1个元素节点的地址
第一个元素的前驱可以看作是头节点 
prior：NULL 

执行语句p=p->next;一次，p的指向往后移动一个位置
执行语句p=p->prior;一次，p的指向往前移动一个位置

空：h->next==NULL&&h->prior==NULL 
最后一个节点：若p->next==NULL,说明p指向最后一个节点 
*/

/*
1.初始化
构造一个空的线性表 
*/
DLinkList *InitList()
{
	DLinkList *h;
	h=(DLinkList *)malloc(sizeof(DLinkList));
	h->next=NULL;
	h->prior=NULL;
	return h;
}

/*
2.销毁 
*/
void DestroyList(DLinkList *h)
{
	int ListDelete(DLinkList *h,int i,int *e);
	int v;
	
	while(h->next!=NULL||h->prior!=NULL)//不空
	{
		//删除第1个元素节点
		ListDelete(h,1,&v); 
	} 
	free(h);
} 

/*
3.判断线性表是否为空
若为空，返回1；
否则，返回0 
*/
ListEmpty(DLinkList *h)
{
	if(h->next==NULL&&h->prior==NULL)
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
int ListLength(DLinkList *h)
{
	DLinkList *p;
	int len;
	p=h;
	len=0;
	while(p->next!=NULL)
	{
		p=p->next;
		len=len+1;
	} 
	return len;
} 

/*
5.输出 
*/
void DispList(DLinkList *h)
{
	DLinkList *p;
	p=h; 
	printf("线性表的元素为：");
	while(p->next!=NULL)
	{
		p=p->next;
		printf("%d ",p->data); 
	} 
	printf("\n");
}

/*
5.输出 
*/
void DispList1(DLinkList *h)
{
	DLinkList *p;
	//让p指向最后一个元素节点
	p=h;
	while(p->next!=NULL)
	{
		p=p->next;
	}
	//逆序输出
	printf("线性表的元素为：");
	while(p!=h)
	{
		printf("%d ",p->data);
		p=p->prior;
	} 
	printf("\n");	
}

/*
6.取值
 
参数合法：i>=1 && i<=ListLength(h)
若参数合法，进行相关操作，返回1；
否则，提示，返回0  
*/
int GetElem(DLinkList *h,int i,int *e)
{
	DLinkList *p;
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
若存在，返回该元素的位序
否则，返回0 
*/
int LocateElem(DLinkList *h,int e)
{
	DLinkList *p;
	int len;
	p=h;
	len=0;
	while(p->next!=NULL)
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

参数合法：i>=1 && i<=ListLength(h)+1
若参数合法，进行相关操作，返回1；
否则，提示，返回0  
*/
int ListInsert(DLinkList *h,int i,int e)
{
	DLinkList *p,*q;
	int j;
	
	if(i>=1 && i<=ListLength(h)+1)
	{
		//1.构造一个节点q，存储元素e
		q=(DLinkList *)malloc(sizeof(DLinkList));
		q->data=e;
		//2.让p指向第i-1个元素节点 
		p=h;
		for(j=1;j<=i-1;j++)
		{
			p=p->next;
		} 
		//3.添加
		q->next=p->next;
		p->next->prior=q;
		p->next=q;
		q->prior=p;
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

参数合法：i>=1 && i<=ListLength(h)
若参数合法，进行相关操作，返回1；
否则，提示，返回0  
*/
int ListDelete(DLinkList *h,int i,int *e)
{
	DLinkList *p,*q;
	int j;
	
	if(i>=1 && i<=ListLength(h))
	{
		//1.让p指向第i-1个
		p=h;
		for(j=1;j<=i-1;j++)
		{
			p=p->next;
		} 
		//2.让q指向第i个
		q=p->next;
		//3.把要删除的元素值存储到*e中 
		*e=q->data;
		//4.删除
		p->next=q->next;
		q->next->prior=p;
		//5.释放存储空间
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
	/*
	int a;
	int b;
	
	b=a*10;
	printf("%d\n",b);*/
	
	/*
	int *p;
	
	p=(int *)malloc(sizeof(int));
	
	*p = 123;
	
	printf("%d\n",*p);
	
	free(p);
	*/
	return 1;
} 
