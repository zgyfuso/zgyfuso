#include<iostream>
#include<string>
using namespace std;

namespace 
{
	void test_1()
	{
		auto run = [](int a, int b)
		{
			return a + b;
		};//¼Ó·ÖºÅ
		cout << run(1,2);

		auto run_2 = [](int a, int b, int c)
		{
			return a * b * c;
		};
		cout << "\n" << run_2(2, 3, 4);
	}
}

int main(void)
{
	::test_1();
	
}