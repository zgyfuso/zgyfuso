#include<iostream>
///#include<string>
using namespace std;
struct test
{
	int a,b,c;
	test(int a_=1, int b_=2, int c_=3)
	{
		/*
		this->a = a_;
		this->b = b_;       此情况一般用于同名情况
		this->c = c_;
		*/
		a = a_;
		b = b_;
		c = c_;
	}
	void out();
};

void test::out()
{
	cout << "test is: " << a << " " << b << " " << c;
}

int main(void)
{
	test a;
	a.out();
	
}