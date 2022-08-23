#include<string>
#include<iostream>
using namespace std;

class building
{
protected:
	string layer;
	string room;
	string area;
public:
	building(string layer,string room,string area):layer(layer),room(room),area(area){}
	void show()
	{
		cout << "ÎÒÊÇ°Ö°Ö"<<endl;
	}
};
class teachbuilding:public building
{
protected:
	string teach_room;
public:
	teachbuilding(string layer,string room,string area,string teach_room):building(layer,room,area),teach_room(teach_room){}
	void show()
	{
		cout << "the room has " << room << "teachers room has " << teach_room << endl;
	}


};

class dormbuilding :public building
{
protected:
	string dorm_number;
public:
	dormbuilding(string layer,string room,string area,string dorm_number):building(layer,room,area),dorm_number(dorm_number){}
	void show()
	{
		cout << "dorm_room has " << dorm_number << endl;
	}

};

int main()
{
	dormbuilding* ptr = new dormbuilding("5", "20", "diyi", "50");
	ptr->show();

}