#include<string>
#include<iostream>
using namespace std;

class Array
{
public:
	//Array()=default;
	Array();//构造函数声明
	friend Array operator+(Array&, Array&);
	void input();
	void show();
private:
	int data[2][3];
};

Array::Array()//类名最好大写                 构造函数定义
{
	for (int i = 0; i < 2; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			data[i][j] = 0;
		}
	}
}

void Array::input()
{
	cout << "input array:" << endl;
	for (int i = 0; i < 2; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			cout <<endl<< i + 1 << " line " << j+1 << " column : ";
			cin >> data[i][j];
		}
	}
}


void Array::show()
{
	cout << "this is result:" << endl;
	for (int i = 0; i < 2; i++)
	{
		for (int j = 0; j < 3; j++)
		{
		cout<< data[i][j];
		}
		cout << endl;
	}
}

Array operator+(Array& a, Array& b)
{
	Array c;
	for (int i = 0; i < 2; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			c.data[i][j] = a.data[i][j] + b.data[i][j];
		}
	}
	return c;
}

int main(void)
{
	Array a, b, c;
	a.input();
	b.input();
	c = a + b;
	c.show();
}