#include<iostream>
#include<string>
using namespace std;

class one
{
public:
	virtual void out()
	{
		cout << "���";
	}
};
class second:public one
{
public:
	void out()
	{
		cout << "������";
	}
};
void test(one& o)
{
	o.out();
}
int main(void)//ʲô����д��Ĭ��˽��
{
	one o; second s;
	test(o);
	test(s);
}