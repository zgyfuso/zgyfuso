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

int Bank::flag = 0;//该类型属于Bank，而不是属于类的具体实例

int main(void)
{
	Bank one(20);
	Bank second(30);
	Bank thrid(40);
	cout << "hava " << Bank::flag << " banks" << endl;
}