#include<iostream>
#include<string>
using namespace std;

class table
{
protected:
	string height;
public:
	table(string height) :height(height){}
};
class circle
{
	protected:
		string pai;
public:
	circle(string pai):pai(pai){}


};
class roundtable :public table, public circle
{
protected:
public:
	roundtable(string pai,string height):circle(pai),table(height){}
	void show()
	{
		cout << "binggo";
	}
};


int main(void)
{
	roundtable* p = new roundtable("20", "3.131213");
	p->show();
}