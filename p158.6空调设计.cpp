#include<iostream>
#include<string>
#include<stdlib.h>
using namespace std;

class aircondition
{
private:
	string logo;
	string color;
	string power;
	int on_off;
	int temperature;

public:
	aircondition() = default;
	aircondition(string logo, string color, string power, int on_off, int temperature)
	{
		this->logo = logo;
		this->color = color;
		this->power = power;
		this->on_off = on_off;
		this->temperature = temperature;
	}
	void changecondition();
	void ont();
	void lowt();
	void show();
};
void aircondition::changecondition()
{
	cout << "now condition is " << on_off<<endl;
	cout << "input what you want 1(on) or 0(off)";
	cin >> on_off;
	cout << endl<<"binggo";

}
void aircondition::ont()
{
	int temp;
	cout <<endl<< "input how much tempereture you want up:";
	cin >>temp;
	temperature += temp;
	cout << endl << "binggo";
}
void aircondition::lowt()
{
	int temp;
	cout <<endl<< "input how much tempereture you want low:";
	cin >> temp;
	temperature -= temp;
	cout << endl << "binggo";
}
void aircondition::show()
{
	system("cls");
	cout << "****************************************" << endl;
	cout << "logo is " << logo<<endl;
	cout << "color is " << color << endl;
	cout << "power is " << power << endl;
	cout << "tempereture is " << temperature << endl;
	cout << "on or off is " << on_off<<endl;
	
}

int main()
{
	aircondition first("¸ñÁ¦", "°×É«", "2Æ¥", 1, 22);
	first.changecondition();
	first.lowt();
	first.show();
}