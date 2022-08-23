#include<string>
#include<iostream>
using namespace std;

class country
{
protected:
	string name;
	string center;
	string people;
public:
	country() = default;
	country(string name,string center,string people):name(name),center(center),people(people){}
	void show();
};

class province :public country
{
protected:
	string center_city;
	string center_city_people;
public:
	province() = default;
	province(string name, string center, string people,string center_city,string center_city_prople)
		:country(name,center,people),center_city(center_city),center_city_people(center_city_people){}
	void show();
};
void country::show()
{
	cout << "the name of the country is " << name<<endl;
	cout << "the center of the country is " << center<<endl;
	cout << "the country has people " << people<<endl;
}
void province::show()
{
	cout << "the name of the country is " << name << endl;
	cout << "the center of the country is " << center << endl;
	cout << "the country has people " << people << endl;
	cout << "the province city is " << center_city << endl;
	cout << "the province city has " << center_city_people << endl;
}
int main(void)
{
	country china("china", "beijing", "20000");
	
	province chuxiong("china", "beijing", "20000", "chuxiong", "1000");
	china.show();
	cout << endl << endl << endl;
	chuxiong.show();
}