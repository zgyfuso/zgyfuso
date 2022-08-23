#include<iostream>
#include<string>
using namespace std;
class run
{
private:
	int a;
	int b;
	int c;
public:
	run() = default;
	run(int a,int b,int c):a(a),b(b),c(c){}
	int judgement();
};
int run::judgement()
{
	int last=0;
	last = (b * b) - 4 * a * c;
	return last;
}
int main(void)
{
	run test_1(0, 0, 1);
	run test_2(3, 7, 9);
	int flag;
	flag = test_1.judgement();
	if (flag != 0)
	{
		cout << "这三个数据正确";
	}
	else
	{
		cerr << "这三个数据不正确";
	}
	flag = test_2.judgement();
	if (flag != 0)
	{
		cout <<endl<< "这三个数据正确";
	}
	else
	{
		cerr <<endl<< "这三个数据不正确";
	}
}