#include<string>
#include<iostream>
#include<map>
using namespace std;
int main(void)
{
	map<string, int>mp;
	mp.insert(map<string, int>::value_type("a", 0));
	mp.insert(make_pair("b", 1));
	for (auto i = mp.begin(); i != mp.end(); i++)
	{
		cout << i->first << "->" << (*i).second << "\n";
	}
	cout<<"\n" << "*****************************************" << "\n";
	for (auto i = mp.rbegin(); i != mp.rend(); i++)
	{
		cout << i->first << "->" << (*i).second << "\n";
	}
	cout << "\n" << "*****************************************" << "\n";
	//equal_range
	cout << mp.equal_range("b").first->first
		<< "->"
		<< (*mp.equal_range("b").first).second
	    << "\n";
	cout << "\n" << "*****************************************" << "\n";
	cout << "size: " << mp.size() << "\n";
	cout << "max_size: " << mp.max_size() << "\n";
	cout << "\n" << "*****************************************" << "\n";
	cout << "find: " << mp.find("a")->second;
}