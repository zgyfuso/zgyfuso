#include<iostream>
using namespace std;

class matrix
{
private:
	int x;
	int y;
public:
	matrix() = default;
	matrix(int x,int y):x(x),y(y){}
	friend matrix operator+(matrix x, matrix y);
	//friend 后的参数为返回值类型
	friend ostream& operator<<(ostream& out, matrix& m);
};

ostream& operator<<(ostream& out, matrix& m)
{
	out << "x is " << m.x << " y is " << m.y<<"\n";
	for (int i = 0; i < m.x; i++)
	{
		for (int j = 0; j < m.y; j++)
		{
			out << "! ";
		}
		out << "\n";
	}
	return out;
}

matrix operator+(matrix x, matrix y)
{
	matrix temp;
	temp.x = x.x + y.x;
	temp.y = x.y + y.y;
	return temp;
}


int main(void)
{
	matrix a(1, 2);
	matrix b(2, 3);
	matrix last;
	last = a + b;
	cout << "last is " << last;
}