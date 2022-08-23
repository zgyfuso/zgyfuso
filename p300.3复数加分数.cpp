#include<iostream>
using namespace std;

class complex
{
private:
	int s;
	int x;
public:
	complex():s(1),x(1){}
	complex(int s,int x):s(s),x(x){}
	friend ostream& operator<<(ostream& out, complex& c);
	friend complex operator+(double d, complex c);
};

complex operator+(double d, complex c)
{
	complex temp;
	d *= c.x;
	c.s += d;
	temp.s = c.s;
	temp.x = c.x;
	return temp;
}

ostream& operator<<(ostream& out, complex& c)
{
	out << "complex is " << c.s << "/" << c.x;
	return out;
}

int main(void)
{
	complex c(1, 2);
	cout << c;
	cout << "\n runing ";
	complex last = 2+c;
	cout << last;
}