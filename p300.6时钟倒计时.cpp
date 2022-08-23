#include<string.h>
#include<Windows.h>
#include<iostream>
using namespace std;
class Time
{
private:
	
public:
	int hour;
	int minute;
	int second;
	Time() = default;
	Time(int hour,int minnute,int second):hour(hour),minute(minute),second(second){}
	friend ostream& operator<<(ostream& out, Time& t);
	friend istream& operator>>(istream& init, Time& t);
	friend Time operator--(Time&t,int);
};
Time operator--(Time&t,int)
{
	Time back;

	t.minute--;
	if (t.minute == 0)
	{
		t.second--;
		t.minute = 59;
		if (t.second == 0)
		{
			t.second = 59;
			t.hour--;
			
		}
	}
	back.hour = t.hour;
	back.minute = t.minute;
	back.second = t.second;
	return back;
}
ostream& operator<<(ostream& out, Time& t)
{
	out <<endl<<endl<< "倒计时：" << t.hour << " " << t.second << " " << t.minute;
	return out;
}
istream& operator>>(istream& init, Time& t)
{
	cout << "初始化计时器：";
	init >> t.hour >> t.minute >> t.second;
	return init;
}
int main(void)
{
	Time test;
	Time last;
	cin >> test;
	while(1)
	{
		test--;
		if (test.hour == 0&&test.minute==0&&test.second==0)
		{
			break;
		}
	}
	cout << test;
}