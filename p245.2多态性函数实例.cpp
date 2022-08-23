#include<iostream>
#include<string>
using namespace std;

class empolyee
{
protected:
	int mouth;
public:
	empolyee() = default;
	virtual int mouth_money(int mouth)=0;
};

class manager :public empolyee
{
	int mouth_money(int mouth)
	{
		return (8000 * mouth);
	}
};

class technician :public empolyee
{
	int mouth_money(int mouth)
	{
		return(24 * (30 * mouth) * 20);
	}
};

class salesmanager :public empolyee
{
	int mouth_money(int mouth)
	{
		return(5000 * mouth + (5000 * mouth * 0.05));
	}
};

int main(void)
{
	int show;
	empolyee* person;
	manager m;
	technician t;
	salesmanager s;
	
	person = &m;
	show=person->mouth_money(2);
	cout << "manager money is " << show << endl;

	person = &t;
	show = person->mouth_money(2);
	cout << "technician money is " << show << endl;

	person = &s;
	show = person->mouth_money(2);
	cout << "salesmanager money is " << show << endl;

}