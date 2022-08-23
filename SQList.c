#include <stdio.h>
#define MAXSIZE 128

typedef int ElemType;

typedef struct
{
	ElemType data[MAXSIZE];//�洢���Ա��Ԫ��ֵ 
	int length;//�洢���Ա��Ԫ�ظ��������ȣ� 
}SQList;

/*
Ԫ�ص��±귶Χ��0 -- length-1 
*/

/*
1.��ʼ��
����һ���յ����Ա� 
*/
SQList InitList()
{
	SQList l;
	l.length=0; 
	return l;
} 

/*
2.����
˳��洢���������ٲ��� 
*/
void DestroyList(SQList *l)
{
	
} 

/*
3.�ж����Ա��Ƿ�Ϊ��
��Ϊ�գ�����1��
���򣬷���0 
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
4.�����Ա�ĳ��� 
*/
int ListLength(SQList l)
{
	return l.length; 
}

/*
5.��� 
*/
void DispList(SQList l)
{
	int i;
	printf("���Ա��Ԫ��Ϊ:");
	for(i=0;i<=l.length-1;i++)
	{
		printf("%d ",l.data[i]);
	}
	printf("\n");
}

/*
6.ȡԪ��ֵ
�����Ա�l�еĵ�i��Ԫ��ȡ�������洢��*e�� 

�����Ϸ���Χ��i>=1 && i<=length

�������Ϸ���������ز�����������1��
������ʾ������0 
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
		printf("��������\n");
		return 0; 
	}	 
} 

/*
7.����
�����Ա�l�в����Ƿ����ֵΪe��Ԫ�أ�
���ҵ������ظ�Ԫ�ص�λ�򣨵ڼ�����
���򣬷���0

��ע�������ڶ����ͬ��ֵ��ֻ�ҵ�һ�� 
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
8.��� 
�����Ա�l�еĵ�i��λ�����һ��ֵΪe��Ԫ�ؽ�ȥ 

�����Ϸ���Χ��i>=1 && i<=length+1

�������Ϸ���������ز�����������1��
������ʾ������0 
*/
int ListInsert(SQList *l,int i,ElemType e)
{
	int j;
	
	if(i>=1 && i<=(*l).length+1)
	{
		//1.�����ƶ�һ��λ��
		/*
		�ƶ�Ԫ���±귶Χ��i-1   --   length-1 
		*/
		for(j=(*l).length-1;j>=i-1;j--)
		{
			(*l).data[j+1]=(*l).data[j];
		}
		//2.��e�洢����i��λ��
		(*l).data[i-1]=e;
		//3.����+1
		(*l).length=(*l).length+1;
		return 1;
	}
	else
	{
		printf("��������\n");
		return 0; 
	}	
}

/*
9.ɾ��
�����Ա�l�еĵ�i��Ԫ��ɾ�������Ѹ�Ԫ��ֵ�洢��*e��

�����Ϸ���Χ��i>=1 && i<=length

�������Ϸ���������ز�����������1��
������ʾ������0  
*/
int ListDelete(SQList *l,int i,ElemType *e)
{
	int j;
	
	if(i>=1 && i<=(*l).length)
	{
		//1.�ѵ�i��Ԫ�ش洢��*e��
		*e=(*l).data[i-1];
		//2.��ǰ�ƶ�һ��λ��
		/*
		�ƶ�Ԫ���±귶Χ��i   --   length-1 
		*/
		for(j=i;j<=(*l).length-1;j++)
		{
			(*l).data[j-1]=(*l).data[j];
		}
		//3.����-1
		(*l).length=(*l).length-1; 
		return 1;
	}
	else
	{
		printf("��������\n");
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
	//ʹ��ǰ�����ʼ��
	
	SQList ll;
	ll=InitList(); 
	ListInsert(&ll,ListLength(ll)+1,100);
	ListInsert(&ll,ListLength(ll)+1,200);
	ListInsert(&ll,ListLength(ll)+1,300);
	ListInsert(&ll,ListLength(ll)+1,400);

	DispList(ll);

	return 1;
} 











