#include<string>
#include<iostream>
#include<stdlib.h>
using namespace std;

class account
{
private:
	char id;
	int balance;

public:
	account(char id, int balance);
	void get_id();
	void get_balance();
	void init();
	void outit();
	void lookup();
};
account::account(char id, int balance)
{
	this ->id = id;
	this ->balance = balance;
}

void account:: get_id()
{
	cout << "input your id:";
	cin >> id;
	cout << "your id is " << id<<endl;
}

void account::get_balance()
{
	cout << "input your balance:";
	cin >> balance;
	cout << "your balance is " << balance << endl;
}

void account::init()
{
	int temp=0;
	cout << "input how much you want in it:";
	cin >> temp;
	balance += temp;
}
void account::outit()
{
	int temp = 0;
	cout << "input how much you want out it:";
	cin >> temp;
	balance -= temp;
}
void account::lookup()
{
	cout << "***************************" << endl;
	cout << "your id is " << id << endl << "your last balance is " << balance;

}
int main()
{
	account first('zgy', 100), secound('pxj',10);
	first.get_id();
	first.get_balance();
	first.init();
	first.outit();
	first.lookup();
	cout<<endl<<system("pause");
	system("cls");
	secound.get_id();
	secound.get_balance();
	secound.init();
	secound.outit();
	secound.lookup();
}