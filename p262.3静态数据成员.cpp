#include<string>
#include<iostream>
using namespace std;
class student
{
private:
	int score;
public:
	student() = default;
	student(int score)// :score(score) {}       �˴�Ӧ��ʹ������ĳ�ʼ������
	{
		this->score = score;
		all += score;
	}
	static int all;
};


int student::all = 0;


int main(void)
{
	student a(20), b(30), c(40);
	cout << "last is " << student::all;
}