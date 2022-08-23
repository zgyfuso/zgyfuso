#include<iostream>
#include<string>
using namespace std;

class one
{
public:
	virtual void out()
	{
		cout << "你好";
	}
};
class second:public one
{
public:
	void out()
	{
		cout << "略略略";
	}
};
void test(one& o)
{
	o.out();
}
int main(void)//什么都不写则默认私有
{
	one o; second s;
	test(o);
	test(s);
}