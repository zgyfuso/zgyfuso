

//Date.cpp
#include "Date.h"
#include <iostream>
#include <iomanip>
#include <math.h>//包含绝对值函数
using namespace std;

Date::Date() = default;//无参数构造函数
Date::Date(int y, int m, int d)//三个参数构造函数
{
	year = y;
	month = m;
	days = d;
}
//第一个date指的是返回值类型
//第二个date指的是该类，（该类的类外定义）

Date Date::operator+(int d)//返回某日期加上天数得到的日期
{
	Date a;
	int isleapyear[13] = { 0,31,29,31,30,31,30,31,31,30,31,30,31 };
	int	nonleapyear[13] = { 0,31,28,31,30,31,30,31,31,30,31,30,31 };
	if ((year % 100 != 0 && year % 4 == 0) || (year % 400 == 0))//闰年判断
	{
		int temp;//为了标记所加天数若超过59(30+28)或60(30+29)或61(30+31)天
		if (days + d > isleapyear[month])//**
		{
			temp = days + d - isleapyear[month];
			month++;
			if (temp > isleapyear[month])
			{
				for (int i = 0; i < 12; i++)
				{
					temp = temp - isleapyear[month];
					month++;
					if (month == 12)
					{
						year++;
						temp = temp - isleapyear[month];
						month = 1;
					}
					if (temp <= isleapyear[month])//终止for循环的条件
						break;
				}
			}
			a.days = temp;
		}
		else
			a.days = days + d;
	}
	//
	else
	{
		int temp;
		if (days + d > nonleapyear[month])
		{
			temp = days + d - nonleapyear[month];
			month++;
			if (temp > nonleapyear[month])
			{
				for (int i = 0; i < 12; i++)
				{
					temp = temp - nonleapyear[month];
					month++;
					if ((temp > nonleapyear[month]) && (month == 12))//在这里我再对超脱的一年进行闰年，平年的判断
					{
						year++;
						temp = temp - isleapyear[month];
						month = 1;
						if ((year % 100 != 0 && year % 4 == 0) || (year % 400 == 0))//进行补充
						{
							//Date b;
							//b.month=month;
							if (temp > isleapyear[month])//在for循环中会检测到if的开始执行条件吗？
							{
								for (int j = 0; j < 12; j++)
								{
									temp = temp - isleapyear[month];
									month++;
									if (temp <= isleapyear[month])
										break;//跳出本小层次的for
								}
							}
						}
						else
						{
							//Date b;
							//b.month=month;*
							if (temp > nonleapyear[month])//在for循环中会检测到if的开始执行条件吗？
							{
								for (int j = 0; j < 12; j++)
								{
									temp = temp - nonleapyear[month];
									month++;
									if (temp <= nonleapyear[month])
										break;
								}
								//b.days=temp;
								//b.year=year;
							}
						}
						break;//如果执行了跨年的计算，那么就可以不用执行剩下的（下面的那一句了）{想法}

					}
					if (temp <= nonleapyear[month])
						break;
				}
			}
			a.days = temp;
		}
		else
			a.days = days + d;
	}
	a.month = month;
	a.year = year;
	return a;
}
Date Date::operator-(int d)//返回某日期减去天数得到的日期
{
	Date a;
	int isleapyear[13] = { 0,31,29,31,30,31,30,31,31,30,31,30,31 };
	int	nonleapyear[13] = { 0,31,28,31,30,31,30,31,31,30,31,30,31 };
	if (((year % 4 == 0) && (year % 100) != 0) || (year % 400 == 0))
	{
		if ((days - d) < 0)
		{
			int temp;
			temp = isleapyear[month] + days - d;
			month--;
			if (temp < 0)
			{
				for (int i = 0; i < 12; i++)
				{
					temp = temp + isleapyear[month];
					month--;
					if ((temp < 0) && (month == 0))//判断是否减得天数超脱了（╮(╯▽╰)╭）
					{
						year--;
						month = 12;
						if (((year % 4 == 0) && (year % 100) != 0) || (year % 400 == 0))
						{
							temp = temp + isleapyear[month];
							month--;

						}
						else
						{
							temp = temp + nonleapyear[month];
							month--;
						}
					}
					if (temp > 0)
						break;
				}
			}
			a.days = temp;
		}
		else
			a.days = days - d;
	}
	else
	{
		int temp;
		temp = nonleapyear[month] + days - d;
		month--;
		if (temp < 0)
		{
			for (int i = 0; i < 12; i++)
			{
				temp = temp + nonleapyear[month];
				month--;
				if (month == 0)//判断是否减得天数超脱了（╮(╯▽╰)╭）
				{
					year--;
					month = 12;
					if (((year % 4 == 0) && (year % 100) != 0) || (year % 400 == 0))
					{
						temp = temp + isleapyear[month];
						month--;
					}
					else
					{
						temp = temp + nonleapyear[month];
						month--;
					}
				}
				//if((temp>0)&&(abs(temp)<isleapyear[month]))
				if (temp > 0)
					break;
			}
			a.days = temp;
		}
		else
			a.days = days - d;
	}
	a.month = month;
	a.year = year;
	return a;
}

int isyear(int year)
{ //计算某年是否是闰年，返回不同天数
	if (((year % 100 != 0) && (year % 4 == 0)) || (year % 400 == 0))
	{
		return 366;
	}
	else
		return 365;
}
int abs(int a, int b)
{
	if ((a - b) < 0)
	{
		return (b - a);
	}
	else
		return (a - b);
}
int Date::operator-(Date& b)//返回两日期相差的天数
{
	//Date a;
	int isleapyear[13] = { 0,31,29,31,30,31,30,31,31,30,31,30,31 };
	int	nonleapyear[13] = { 0,31,28,31,30,31,30,31,31,30,31,30,31 };
	//int sum=0;
	if (b.year < this->year)//现在假定Date &b 是大于当前this->年的
		cout << "应该先输入小的年份---输入错误!!!" << endl;
	if (b.year == this->year)
	{
		int sum = 0;
		int sum_ = 0;
		if (((this->year % 100 != 0) && (this->year % 4 == 0)) || (this->year % 400 == 0))//这一年过了多少天
		{
			for (int i = 1; i < this->month; i++)
			{
				sum += isleapyear[i];
			}
			sum = sum + this->days; // 当前的年份

				for (int i = 1; i < b.month; i++)
				{
					sum_ += isleapyear[i];
				}
			sum_ = sum_ + b.days;

			return abs(sum, sum_);
		}
		else
		{
			for (int i = 1; i < this->month; i++)
			{
				sum += nonleapyear[i];
			}
			sum = sum + this->days;

			for (int i = 1; i < b.month; i++)
			{
				sum_ += nonleapyear[i];
			}
			sum_ = sum_ + b.days;

			return abs(sum, sum_);
		}
	}
	if ((b.year - this->year) >= 1)
	{
		int S;
		int sum = 0;
		int sum2 = 0;
		int sum1 = 0;
		if ((this->year % 100 != 0 && this->year % 4 == 0) || (this->year % 400 == 0))//这年还剩多少天
		{
			for (int i = 1; i < this->month; i++)
			{
				sum1 += isleapyear[i];
			}
			sum1 = 366 - (sum1 + this->days);
			return sum1;
		}
		else
		{
			for (int i = 1; i < this->month; i++)
			{
				sum1 += nonleapyear[i];
			}
			sum1 = 365 - (sum1 + this->days);
			return sum1;
		}
		if ((b.year % 100 != 0 && b.year % 4 == 0) || (b.year % 400 == 0))//这一年过了多少天
		{
			for (int i = 1; i < b.month; i++)
			{
				sum2 += isleapyear[i];
			}
			sum2 = sum2 + b.days;
			return sum2;
		}
		else
		{
			for (int i = 1; i < b.month; i++)
			{
				sum2 += nonleapyear[i];
			}
			sum2 = sum2 + b.days;
			return sum2;
		}
		S = sum1 + sum2;
		for (int i = year + 1; i <= b.year - 1; i++)//在相差一年的基础上，通过isleapyear()函数实现天数的相加
		{
			sum += isyear(i);
		}
		S += sum;
		return S;
	}
}
Date::~Date() = default;//无参析构函数
istream& operator>>(istream& input, Date& d)
{
	cout << "Please input date:" << endl;
	input >> d.year >> d.month >> d.days;//中间需要有空格，编译器自动将三个数字分别分配
	return input;
}
ostream& operator<<(ostream& output, Date& d)
{
	//output  是os   类型
	output << d.year << setw(4) << d.month << setw(5) << d.days << endl;
	return output;
}
