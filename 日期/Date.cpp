

//Date.cpp
#include "Date.h"
#include <iostream>
#include <iomanip>
#include <math.h>//��������ֵ����
using namespace std;

Date::Date() = default;//�޲������캯��
Date::Date(int y, int m, int d)//�����������캯��
{
	year = y;
	month = m;
	days = d;
}
//��һ��dateָ���Ƿ���ֵ����
//�ڶ���dateָ���Ǹ��࣬����������ⶨ�壩

Date Date::operator+(int d)//����ĳ���ڼ��������õ�������
{
	Date a;
	int isleapyear[13] = { 0,31,29,31,30,31,30,31,31,30,31,30,31 };
	int	nonleapyear[13] = { 0,31,28,31,30,31,30,31,31,30,31,30,31 };
	if ((year % 100 != 0 && year % 4 == 0) || (year % 400 == 0))//�����ж�
	{
		int temp;//Ϊ�˱����������������59(30+28)��60(30+29)��61(30+31)��
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
					if (temp <= isleapyear[month])//��ֹforѭ��������
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
					if ((temp > nonleapyear[month]) && (month == 12))//���������ٶԳ��ѵ�һ��������꣬ƽ����ж�
					{
						year++;
						temp = temp - isleapyear[month];
						month = 1;
						if ((year % 100 != 0 && year % 4 == 0) || (year % 400 == 0))//���в���
						{
							//Date b;
							//b.month=month;
							if (temp > isleapyear[month])//��forѭ���л��⵽if�Ŀ�ʼִ��������
							{
								for (int j = 0; j < 12; j++)
								{
									temp = temp - isleapyear[month];
									month++;
									if (temp <= isleapyear[month])
										break;//������С��ε�for
								}
							}
						}
						else
						{
							//Date b;
							//b.month=month;*
							if (temp > nonleapyear[month])//��forѭ���л��⵽if�Ŀ�ʼִ��������
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
						break;//���ִ���˿���ļ��㣬��ô�Ϳ��Բ���ִ��ʣ�µģ��������һ���ˣ�{�뷨}

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
Date Date::operator-(int d)//����ĳ���ڼ�ȥ�����õ�������
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
					if ((temp < 0) && (month == 0))//�ж��Ƿ�������������ˣ��r(�s���t)�q��
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
				if (month == 0)//�ж��Ƿ�������������ˣ��r(�s���t)�q��
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
{ //����ĳ���Ƿ������꣬���ز�ͬ����
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
int Date::operator-(Date& b)//������������������
{
	//Date a;
	int isleapyear[13] = { 0,31,29,31,30,31,30,31,31,30,31,30,31 };
	int	nonleapyear[13] = { 0,31,28,31,30,31,30,31,31,30,31,30,31 };
	//int sum=0;
	if (b.year < this->year)//���ڼٶ�Date &b �Ǵ��ڵ�ǰthis->���
		cout << "Ӧ��������С�����---�������!!!" << endl;
	if (b.year == this->year)
	{
		int sum = 0;
		int sum_ = 0;
		if (((this->year % 100 != 0) && (this->year % 4 == 0)) || (this->year % 400 == 0))//��һ����˶�����
		{
			for (int i = 1; i < this->month; i++)
			{
				sum += isleapyear[i];
			}
			sum = sum + this->days; // ��ǰ�����

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
		if ((this->year % 100 != 0 && this->year % 4 == 0) || (this->year % 400 == 0))//���껹ʣ������
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
		if ((b.year % 100 != 0 && b.year % 4 == 0) || (b.year % 400 == 0))//��һ����˶�����
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
		for (int i = year + 1; i <= b.year - 1; i++)//�����һ��Ļ����ϣ�ͨ��isleapyear()����ʵ�����������
		{
			sum += isyear(i);
		}
		S += sum;
		return S;
	}
}
Date::~Date() = default;//�޲���������
istream& operator>>(istream& input, Date& d)
{
	cout << "Please input date:" << endl;
	input >> d.year >> d.month >> d.days;//�м���Ҫ�пո񣬱������Զ����������ֱַ����
	return input;
}
ostream& operator<<(ostream& output, Date& d)
{
	//output  ��os   ����
	output << d.year << setw(4) << d.month << setw(5) << d.days << endl;
	return output;
}
