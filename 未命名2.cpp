#include<iostream>
using namespace std
int yunhan (int p,int q,);
int country_Function(int x);
int and_function (int!p,inr!r);
int main()
{
	int numbers[8][3]={{0，0，0}，{0，0，1}，{0，1，0}，{0，1，1}，{1，0，0}，{1，0，1}，{1，1，0}，{1，1，1}，}；
	cout<<"现有公式：(p->q)->(!p^!r):<<endl" 
    cout<<"此公式的真值表是：\n"; 
	cout<<"p\tq\t!p\t!r\t(p->q)\t(!p^!r)\t(p->q)->(!p^!r)\n";  
for(int i =0;i<8;i++)
{
    cout<<numbers[i][0]<<"\t"
        <<numbers[i][1]<<"\t"
        <<numbers[i][2]<<"\t"
        <<contrary_Function(numbers[i][0])<<"\t"
        <<contrary_Function(numbers[i][2])<<"\t"
    <<yunhan(numbers[i][0], numbers[i][1])<<"\t\t"
    <<And_Function(contrary_Function(numbers[i][0]),countrary_Function(numbers[i][2]))<<"\t\t"
    <<yunhan(yunhan(numbers[i][0], numbers[i][1]), And_Function(countrary_Function(numbers[i][0]),countrary_Function(numbers[i][2])))<<endl;
}
    return 0;
}
int yunhan (int p,int q)
{
    if(p==1&&q==0)
    {
     return 0;	
    }  
    else
	{
	 return 1;
	}
      
}
int country_Function(int x)
{
    return !x;
}
int And_Function(int !p ,int !r)
{
   if(!p==1&&!r==1)
   {
   	return 1;
   }
   else
   	{
   	return 0;
   }
   
}
