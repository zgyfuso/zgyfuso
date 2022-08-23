#include<string.h>
#include<iostream>
using namespace std;
class ABank;
class BBank;
class CBank;
//提前定义类格式
class ABank
{
	
private:
	int balance;
public:
	int all(ABank&, BBank&, CBank&);//求总友元函数
	ABank() = default;
	void get()
	{
		cin >> balance;

	}
};
class BBank
{
	friend ABank;
private:
	int balance;
public:
	BBank() = default;
	void get()
	{
		cin >> balance;

	}
};
class CBank
{
	friend ABank;
private:
	int balance;
public:
	CBank() = default;
	void get()
	{
		cin >> balance;

	}
};
int ABank:: all(ABank& a, BBank& b, CBank& c)//此处定义需要使用ABank来定义
{
	return(a.balance+b.balance+c.balance);
}
int main()
{
	int last;
	ABank a;
	BBank b;
	CBank c;
	a.get();
	b.get();
	c.get();
	last=a.all(a,b,c);//必须通过类的实例来调用
	cout << "last is " << last;
}