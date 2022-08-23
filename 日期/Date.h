//Date.h
#include <iostream>
using namespace std;

class Date
{
	friend istream& operator>>(istream& input, Date& d);//运算符>>重载声明
	//                       两种类型  第一种  第二种
	friend ostream& operator<<(ostream& output, Date& d);//运算符<<重载声明
public:
	Date();
	Date(int y, int m, int d);//使输入的值赋给数据成员中
	Date operator+(int d);//返回某日期加上天数得到的日期
	Date operator-(int d);//返回某日期减去天数得到的日期
	int operator-(Date& b);//返回两日期相差的天数
	~Date();
private:
	int year, month, days;
};