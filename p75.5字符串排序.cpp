#include<string>
#include<iostream>
using namespace std;
int main()
{
	string array;
	int flag;
	cout << "����һ���ַ���";
	cin >> array;
	//****************************************************
	for (flag = 0; array[flag] != '\0'; flag++) {}
	char temp;
	for (int i = 0; i < flag; i++) {

		for (int j = 0; j < flag - 1 - i; j++) {
			if (array[j] > array[j + 1]) {
				temp = array[j];
				array[j] = array[j + 1];
				array[j + 1] = temp;
			}
		}
	}
	cout << "�������ǣ�";
	for (int i = 0; i < flag; i++) {
		cout << array[i] << "  ";
	}
	cout << endl;
}