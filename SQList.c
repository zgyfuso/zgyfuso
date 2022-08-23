#include <stdio.h>
#define MAXSIZE 128

typedef int ElemType;

typedef struct
{
	ElemType data[MAXSIZE];//存储线性表的元素值 
	int length;//存储线性表的元素个数（长度） 
}SQList;

/*
元素的下标范围：0 -- length-1 
*/

/*
1.初始化
构造一个空的线性表 
*/
SQList InitList()
{
	SQList l;
	l.length=0; 
	return l;
} 

/*
2.销毁
顺序存储不存在销毁操作 
*/
void DestroyList(SQList *l)
{
	
} 

/*
3.判断线性表是否为空
若为空，返回1；
否则，返回0 
*/
int ListEmpty(SQList l)
{
	if(l.length==0)
	{
		return 1;
	} 
	else
	{
		return 0;
	}
}

/*
4.求线性表的长度 
*/
int ListLength(SQList l)
{
	return l.length; 
}

/*
5.输出 
*/
void DispList(SQList l)
{
	int i;
	printf("线性表的元素为:");
	for(i=0;i<=l.length-1;i++)
	{
		printf("%d ",l.data[i]);
	}
	printf("\n");
}

/*
6.取元素值
把线性表l中的第i个元素取出来，存储到*e中 

参数合法范围：i>=1 && i<=length

若参数合法，进行相关操作，并返回1；
否则，提示，返回0 
*/
int GetElem(SQList l,int i,ElemType *e)
{
	if(i>=1 && i<=l.length)
	{
		*e=l.data[i-1];
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
在线性表l中查找是否存在值为e的元素，
若找到，返回该元素的位序（第几个）
否则，返回0

备注：若存在多个相同的值，只找第一个 
*/
int LocateElem(SQList l,ElemType e)
{
	int i;
	
	for(i=0;i<=l.length-1;i++)
	{
		if(l.data[i]==e)
		{
			return i+1;
		}
	} 
	return 0;
}

/*
8.添加 
在线性表l中的第i个位置添加一个值为e的元素进去 

参数合法范围：i>=1 && i<=length+1

若参数合法，进行相关操作，并返回1；
否则，提示，返回0 
*/
int ListInsert(SQList *l,int i,ElemType e)
{
	int j;
	
	if(i>=1 && i<=(*l).length+1)
	{
		//1.往后移动一个位置
		/*
		移动元素下标范围：i-1   --   length-1 
		*/
		for(j=(*l).length-1;j>=i-1;j--)
		{
			(*l).data[j+1]=(*l).data[j];
		}
		//2.把e存储到第i个位置
		(*l).data[i-1]=e;
		//3.长度+1
		(*l).length=(*l).length+1;
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
把线性表l中的第i个元素删除，并把该元素值存储到*e中

参数合法范围：i>=1 && i<=length

若参数合法，进行相关操作，并返回1；
否则，提示，返回0  
*/
int ListDelete(SQList *l,int i,ElemType *e)
{
	int j;
	
	if(i>=1 && i<=(*l).length)
	{
		//1.把第i个元素存储到*e中
		*e=(*l).data[i-1];
		//2.往前移动一个位置
		/*
		移动元素下标范围：i   --   length-1 
		*/
		for(j=i;j<=(*l).length-1;j++)
		{
			(*l).data[j-1]=(*l).data[j];
		}
		//3.长度-1
		(*l).length=(*l).length-1; 
		return 1;
	}
	else
	{
		printf("参数错误！\n");
		return 0; 
	}	
}

int main()
{
	SQList InitList();
	void DestroyList(SQList *l);
	int ListEmpty(SQList l);
	int ListLength(SQList l);
	void DispList(SQList l);
	int GetElem(SQList l,int i,ElemType *e);
	int LocateElem(SQList l,ElemType e);
	int ListInsert(SQList *l,int i,ElemType e);
	int ListDelete(SQList *l,int i,ElemType *e);
	//使用前必须初始化
	
	SQList ll;
	ll=InitList(); 
	ListInsert(&ll,ListLength(ll)+1,100);
	ListInsert(&ll,ListLength(ll)+1,200);
	ListInsert(&ll,ListLength(ll)+1,300);
	ListInsert(&ll,ListLength(ll)+1,400);

	DispList(ll);

	return 1;
} 











