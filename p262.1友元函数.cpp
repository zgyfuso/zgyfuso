#include<iostream>
#include<string>
using namespace std;
class Date
{
	friend void output(Date&);//����Ԫ���Է�������λ��
private:						//�����е��κ�λ��
	int year;
	int mouth;
	int day;
public:
	Date() = default;
	Date(int mouth, int day) :mouth(mouth), day(day) {}
	Date(int year,int mouth,int day):year(year),mouth(mouth),day(day){}
	
	void set()
	{
		cout << "���������������������";
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