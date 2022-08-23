#include<iostream>
#include<string>
using namespace std;
class Date
{
	friend void output(Date&);//该友元可以放在任意位置
private:						//该类中的任何位置
	int year;
	int mouth;
	int day;
public:
	Date() = default;
	Date(int mouth, int day) :mouth(mouth), day(day) {}
	Date(int year,int mouth,int day):year(year),mouth(mouth),day(day){}
	
	void set()
	{
		cout << "输入巴拉巴拉巴拉巴拉：";
		cin >> day;
		cout << endl << "binggo";
	}
};
void output(Date&t)
{
	cout << "*********************" << endl;
	cout << "year is " << t.year
		<< "mouth is " << t.mouth
		<< "day is " << t.day;
}

int main(void)
{
	Date date(2021,10, 7);
	date.set();
	output(date);
}