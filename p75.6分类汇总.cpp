#include<iostream>
#include<string>
using namespace std;
void charge(string);
int main()
{
	string array;
	cout << "ÊäÈëÒ»´®×Ö·û£º";
	cin >> array;
	charge(array);
}
void charge(string array)
{
	int flag,number=0,other=0,digit=0;
	for (flag = 0; array[flag] != '\0'; flag++) {
		if (isalpha(array[flag])) number++;
		if (isdigit(array[flag])) digit++;
		if((isalpha(array[flag])==0)&&(isdigit(array[flag]))==0) other++;
	}
	cout << "word have " << number<<endl;
	cout << "digit have " << digit<<endl;
	cout << "other have " << other<<endl;
}