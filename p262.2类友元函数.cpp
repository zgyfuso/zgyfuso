#include<iostream>
using namespace std;
class Cbank
{
	friend int get_all();
private:
	int money;
public:
	Cbank(int i):money(i){}
	int get()
	{
		return money;
	}
};
class Bbank
{
	friend int get_all();
private:
	int money;
public:
	Bbank(int i) :money(i) {}
	int get()
	{
		return money;
	}
};
class Gbank
{
	friend int get_all();
private:
	int money;
public:
	Gbank(int i) :money(i) {}
	int get()
	{
		return money;
	}
};

int get_all(Cbank& c, Bbank& b, Gbank& g)
{
	return(c.get() + b.get() + g.get());
}

int main(void)
{
	Cbank c(100);
	Bbank b(100);
	Gbank g(100);
	int all = get_all(c, b, g);
	cout << "all money is " << all;
}