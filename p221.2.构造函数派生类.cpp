#include<iostream>
#include<string>
using namespace std;
class person
{
protected:
	string name;
	string sex;
	string age;
public:
	person() = default;
	person(string,string,string):name(name),sex(sex),age(age){}
};
class student:public person
{
protected:
	string number;
	string zhuanye;
public:
	student(string,string, string, string, string):person(name,sex,age),number(number),zhuanye(zhuanye){}

};
class teacher :public person
{
protected:
	string work;
public:
	teacher(string name, string sex, string age, string work)
	{
		this->name = name;
		this->sex = sex;
		this->age = age;
		this->work = work;
	}
	void show();
};
void teacher::show()
{
	cout << "teacher name is " << name << endl;
	cout << "teacher sex is " << sex << endl;
	cout << "teacher age is " << age << endl;
	cout << "teacher work_number is " << work << endl;
}
int main(void)
{
	teacher message("ÁõæÃ", "Å®", "17", "20204612089");
	message.show();
}