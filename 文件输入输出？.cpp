#include<string.h>
#include<iostream>
#include <stdio.h>
#include<fstream>
using namespace std;
class Student
{
private: 
	string name;
	int math;
	int chinese;
	int english;
public:
	Student() = default;
	Student(string name, int math, int chinese, int english)
	{
		this->name = name;
		this->chinese = chinese;
		this->english = english;
		this->math = math;
	}
	void out()
	{
		cout << "name is " << name << "  chinese is " << chinese << "  english is " << english << "  math is " << math;
	}
};


int main(void)
{
	Student student = { "Öì¹ÚÓî",90,89,78 };
	Student student_= {"ºîÃ÷æ­",90,78,98};
	Student student__ = { "clb",90,78,97 };
	fstream init("C://Users//Lenovo//Desktop//test.txt",ios::binary);
	init.write((char*)&student, sizeof(student));//?????????
	init.close();
	fstream out("C://Users//Lenovo//Desktop//test.txt",ios::binary);
	out.read((char*)&student, sizeof(student));
	
}