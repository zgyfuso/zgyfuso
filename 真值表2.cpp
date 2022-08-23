#include<iostream>
#include<string>
using namespace std;

class run
{
private:
	int p;
	int q;
	int r;

public:
	run() = default;
	run(int p, int q, int r)
	{
		this->p = p;
		this->q = q;
		this->r = r;
	}
	int first_run(int, int);
	int second_run(int, int);
	int last_run(int, int);
};
int run::first_run(int p, int q)
{
	int back = 0;
	if (p == 1 && q == 0)
		back = 0;
	else
		back = 1;
	return back;
}

int run::second_run(int p, int r)
{
	return (!p && !r);
}
int run::last_run(int f, int s)
{
	if (f == 1 && s == 0)
		return 0;
	else
		return 1;
}
int main(void)
{
	run math;
	int p, q, r;
	int temp_1, temp_2, last;
	cout << "输入p值：";
	cin >> p;
	cout << "输入q值：";
	cin >> q;
	cout << "输入r值：";
	cin >> r;
	temp_1 = math.first_run(p, q);
	temp_2 = math.second_run(p, r);
	last = math.last_run(temp_1, temp_2);
	cout << endl << "最终结果是：" << last;
}