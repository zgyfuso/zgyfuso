#include<string.h>
#include<iostream>
#include<fstream>
using namespace std;
typedef struct
{
	string name;
	string sex;
	int age;
}Data;

int main(void)
{
	Data message[2] = { "Öì¹ÚÓî","ÄĞ",19,"ºØÁ¢È½","Å®",19 };
	ofstream init("c:\\Users\\Lenovo\\Desktop\\test.txt", ios::binary);
	for (int i = 0; i < 2; i++)
	{
		init.write((char*)&message[i], sizeof(message[i]));
		init << endl;
	}
	init.close();


	ifstream out("c:\\Users\\Lenovo\\Desktop\\test.txt", ios::binary);
	for (int i = 0; i < 2; i++)
	{
		//out.read((char*)&message[i], sizeof(message[i]));
	}
	//out.close();

	for (int i = 0; i < 2; i++)
	{
		cout << message[i].name << " " << message[i].sex << " " << message[i].age << endl;
	}
}