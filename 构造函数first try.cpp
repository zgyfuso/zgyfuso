#include<iostream>
#include<string>
using namespace std;

class box
{
public:
	box(int, int, int);
	int volume(int ,int,int);
	int suface();
private:
	int length;
	int width;
	int high;

};
box::box(int length, int width, int high):length(length),width(width),high(high){}

int box::volume(int width,int length,int high)
{
	return(width * length * high);
}
int box::suface()
{
	return((length * high * 2) + (width * high * 2) + (width * length * 2));
}

int main(void)
{
	box b1(1, 2, 3);
	cout << "b1 volume is " << b1.volume(3,5,9)<<endl;
	cout << "b1 surface is " << b1.suface() << endl;

}