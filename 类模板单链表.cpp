#include<iostream>
#include<string>
using namespace std;
template <typename T>
class intlist
{
protected:
	typedef struct node
	{
		T array;
		struct node* next;
	}node;
public:
	intlist();
	~intlist();

};
template <typename T>
intlist<T>::intlist()
{
	a = new node;
	
}

int main(void)
{

}