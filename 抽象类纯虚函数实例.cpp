#include<iostream>
#include<string>
using namespace std;

class base
{
public:
	virtual int isgood(int) = 0;
	void settitle();
	void showtitle();

};

class book :public base
{
public:
	int isgood(int init)
	{
		if (init > 500) return 1;
		else return 0;
	}
};


class journal :public base
{
public:
	int isgood(int init)
	{
		if (init > 2500) return 1;
		else return 0;
	}
};
int main(void)
{
	int flag = 0;
	base* ptr;
	book b;
	ptr = &b;
	flag=ptr->isgood(600);
	cout << "flag is " << flag << endl;

	journal j;
	ptr = &j;
	flag=ptr->isgood(2400);
	cout << "journal is " << flag << endl;
}