#include<iostream>
#include<string>
using namespace std;
int length=0;
class test
{
private:
	int i;
	string name;
public:
	test() = default;
	test(int i, string name) :i(i), name(name) { length++; }
	int flag();
	void show();
};
int test::flag()
{
	return i;
}

void test::show()
{
	cout << name << "+" << i << "\n";
}

int main(void)
{

	test test_array[] = { {3,"z"},{4,"g"},{5,"y"},{1,"n"},{2,"b"} };
	cout << "ÅÅĞòÇ°£º"<<"\n";
	for (test i : test_array)
	{
		i.show();
	}

	cout << "ÅÅĞòºó" << "\n";
	for (int i = 0; i < length; i++)
	{
		for (int j = 0; j < length - i - 1; j++)
		{
			if (test_array[j].flag() > test_array[j + 1].flag())
			{
				test temp = test_array[j];
				test_array[j] = test_array[j + 1];
				test_array[j + 1] = temp;
			}
		}
	}

	for (test i : test_array)
	{
		i.show();
		cout << "\n";
	}

}