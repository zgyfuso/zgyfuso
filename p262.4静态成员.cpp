#include<string>
#include<iostream>
using namespace std;
class Bank
{
private:
	int balance;
public:
	static int flag;
	Bank() = default;
	Bank(int balance):balance(balance)
	{
		flag++;
	}
};

int Bank::flag = 0;//����������Bank��������������ľ���ʵ��

int main(void)
{
	Bank one(20);
	Bank second(30);
	Bank thrid(40);
	cout << "hava " << Bank::flag << " banks" << endl;
}