#include<iostream>
using namespace std;


class Class
{
private:
	int score;
public:
	Class() = default;
	Class(int score) :score(score) { all_score += score; }
	static int all_score;
	static int return_all();
};
int Class::all_score = 0;//单独开辟空间，所以类外定义
int Class::return_all()
{
	return all_score;
}

int main(void)
{
	Class _(100);
	Class __(100);
	Class ___(100);
	Class ____(200);
	int all = Class::return_all();
	cout << "all score is " << all;
}