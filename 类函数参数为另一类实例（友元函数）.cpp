#include<iostream>
#include<string>
using namespace std;
class Date
{
protected:
	int year;
	int mouth;
	int day;
public:
	Date() = default;
	Date(int year, int mouth, int day) :year(year), mouth(mouth), day(day) {}
	friend class Employee;
	int get_year()
	{
		return year;
	}
	int get_mouth()
	{
		return mouth;
	}
	int get_day()
	{
		return day;
	}
};
class Employee
{
private:
	string name;
	int age;
	int b_year;
	int b_mouth;
	int b_day;
public:
	Employee() = default;
	Employee(string name,int age,int b_year,int b_mouth,int b_day):name(name),age(age),b_year(b_year),b_mouth(b_mouth),b_day(b_day){}
	void is_birthday(Date& t)
	{
		if (b_year ==t.get_year()&& b_mouth ==t.get_mouth() && b_day ==t.get_day())
		{
			cout << b_year << "." << b_mouth << "." << b_day << "是你的生日哦，生日快乐";
		}
		else cout << "不是你的生日哦";
	}
};

int main(void)
{
	Employee man = { "朱冠宇",19,2002,8,27 };
	Date date = { 2002,8,27 };
	man.is_birthday(date);
}