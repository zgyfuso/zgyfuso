#include<string.h>
#include<iostream>
using namespace std;

template<typename T>//此处typename只需要写一个，即可代替所有
T findmax(T a, T b)
{
	return (a > b ? a : b);
}


int main(void)
{
	int last_int;
	char last_char;
	int a = 1, b = 2;
	char c = 'a', d = 'b';
	
	last_int = findmax<int>(a,b);
	last_char = findmax<char>(c, d);
	cout << "last_int is " << last_int<<endl;
	cout << "last_char is " << last_char << endl;


}