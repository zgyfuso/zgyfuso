#include<string.h>
#include<iostream>
using namespace std;
class ABank;
class BBank;
class CBank;
//��ǰ�������ʽ
class ABank
{
	
private:
	int balance;
public:
	int all(ABank&, BBank&, CBank&);//������Ԫ����
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
int ABank:: all(ABank& a, BBank& b, CBank& c)//�˴�������Ҫʹ��ABank������
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
	last=a.all(a,b,c);//����ͨ�����ʵ��������
	cout << "last is " << last;
}