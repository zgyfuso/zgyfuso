#include<iostream>
#include<string.h>
int quit=1;//全局变量
using namespace std;
class Date
{

public:
	Date() = default;
	Date(int year, int mouth, int days)
	{
		this->year = year;
		this->mouth = mouth;
		this->days = days;
	}
	friend ostream& operator<<(ostream& out, Date& t);
	friend istream& operator>>(istream& in, Date& t);
	friend Date operator+(Date init, int add);
	friend Date operator-(Date init, int sub);
	//void show();
private:
	int year;
	int mouth;
	int days;
};
ostream& operator<<(ostream& out, Date& t)
{
	out <<endl<< t.year << " year " << t.mouth << " mouth " << t.days << " days" << endl;
	return out;
}
istream& operator>>(istream& in, Date& t)
{
	cout << endl << "input years: "; in >> t.year;

	cout << endl << "input mouths "; in >> t.mouth;
	while (t.mouth < 0 || t.mouth>12)
	{
		cout << endl << "input mouths "; in >> t.mouth;
	}
	cout << endl << "intput days "; in >> t.days;
	while (t.days < 0 || t.days>32)
	{
		cout << endl << "intput days "; in >> t.days;
	}
	return in;
}
Date operator+(Date init, int add)
{
	Date temp;
	int run_year[13] = { 0,31,29,31,30,31,30,31,31,30,31,30,31 };
	int pin_year[13] = { 0,31,28,31,30,31,30,31,31,30,31,30,31 };
	if ((init.year % 4 == 0 && init.year % 100 != 0) || init.year % 400 == 0)
	{
		
		while (add > 0)
		{
			add--;
			init.days++;
			if (init.days > run_year[init.mouth])
			{
				init.mouth++;
				if (init.mouth > 12)
				{
					init.year++;
					init.mouth = 0;//判断所跨年份是否为平年
					if ((init.year % 4 == 0 && init.year % 100 != 0) || init.year % 400 == 0)
					{
						if (init.days > pin_year[init.mouth])
						{
							init.mouth++;
							if (init.mouth > 12)
							{
								init.year++;
								init.mouth = 0;//判断所跨年份是否为闰年

							}
							init.days = 0;
						}
						else
						{
							if (init.days > run_year[init.mouth])
							{
								init.mouth++;
								if (init.mouth > 12)
								{
									init.year++;
									init.mouth = 0;//判断所跨年份是否为闰年

								}
								init.days = 0;
							}
						}
					}
					init.days = 0;
				}
			}
		}
	}
		else
	{
		while (add > 0)
		{
			add--;
			init.days++;
			if (init.days > pin_year[init.mouth])
			{
				init.mouth++;
				if (init.mouth > 12)
				{
					init.year++;
					init.mouth = 0;//判断所跨年份是否为闰年
					if ((init.year % 4 == 0 && init.year % 100 != 0) || init.year % 400 == 0)
					{
						if (init.days > run_year[init.mouth])
						{
							init.mouth++;
							if (init.mouth > 12)
							{
								init.year++;
								init.mouth = 0;

							}
							init.days = 0;
						}
					}
					if (init.days > pin_year[init.mouth])
					{
						init.mouth++;
						if (init.mouth > 12)
						{
							init.year++;
							init.mouth = 0;//判断所跨年份是否为闰年

						}
						init.days = 0;
					}
					init.days = 0;
				}
			}
		}
	
	}
	
	
	temp.days = init.days;
	temp.mouth = init.mouth;
	temp.year = init.year;
	return temp;
}
Date operator-(Date init, int sub)
{
	Date temp;
	int run_year[13] = { 0,31,29,31,30,31,30,31,31,30,31,30,31 };
	int pin_year[13] = { 0,31,28,31,30,31,30,31,31,30,31,30,31 };
	while (sub > 0)
	{
		if ((init.year % 4 == 0 && init.year % 100 != 0) || init.year % 400 == 0)
		{
			sub--;
			init.days--;
			if (init.days == 0)
			{
				init.mouth--;
				init.days = run_year[init.mouth];
				if (init.mouth == 0)
				{
					init.year--;
					init.mouth = 12;
					init.days = run_year[12];
				}
			}
		}
		else
		{
			sub--;
			init.days--;
			if (init.days == 0)
			{
				init.mouth--;
				init.days = pin_year[init.mouth];
				if (init.mouth == 0)
				{
					init.year--;
					init.mouth = 12;
					init.days = pin_year[12];
				}
			}
		}
		
	}

	temp.days = init.days;
	temp.mouth = init.mouth;
	temp.year = init.year;
	return temp;
}
void get(int &flag)
{
	cout << "input days to run :"; cin >> flag;
	while (flag < 0)
	{
		cout << "input days to run :"; cin >> flag;
	}
	

}
int showmanu()
{
	int flag;
	cout << "************************************************************";
	cout << "                           manu                                ";
	cout << "1....减去指定日期";
	cout << "2....加上指定日期";
	cout << "************************************************************";
	cout << "input what you want to do:";
	cin >> flag;
	return flag;
}
int main(void)
{
	//int flag;
	//get(flag);
	//写不动了，界面自己写，选择自己写，加油
	Date init, last;
	cin >> init;
	last = init + 12;
	cout << last;
}