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
		cout << "������������ȷ";
	}
	else
	{
		cerr << "���������ݲ���ȷ";
	}
	flag = test_2.judgement();
	if (flag != 0)
	{
		cout <<endl<< "������������ȷ";
	}
	else
	{
		cerr <<endl<< "���������ݲ���ȷ";
	}
}