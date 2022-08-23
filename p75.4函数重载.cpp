#include<iostream>
#include<string>
using namespace std;
void sort(int[]);
void sort(float[]);
void sort(char[]);
void sort(string);
int main()
{
	int array_1[10] = { 1,8,6,3,5,9,4,2,4,7 };
	float array_2[10] = { 1.2,2.3,4.5,7.5,8.9,3.8,9.0,8.5,3.6,5.7 };
	char array_3[10] = { 'a','v','y','r','u','i','q','p','t','s' };
	string array_4 = {"asefsdfgdf"};
	sort(array_1);
	sort(array_2);
	sort(array_3);
	sort(array_4);
}
void sort(int array[10])
{
	int temp;
	int max = array[0];
	for (int i = 0; i < 9; i++) {

		for (int j = 0; j < 10 - 1 - i; j++) {
			if (array[j] > array[j + 1]) {
				temp = array[j];
				array[j] = array[j + 1];
				array[j + 1] = temp;
			}
		}
	}
	cout << "array_1" << "最后结果是：";
	for (int i = 0; i < 10; i++) {
		cout << array[i] << ' ';
	}
	cout << endl;
}
void sort(float array[10])
{
	float temp;
	for (int i = 0; i < 9; i++) {

		for (int j = 0; j < 10 - 1 - i; j++) {
			if (array[j] > array[j + 1]) {
				temp = array[j];
				array[j] = array[j + 1];
				array[j + 1] = temp;
			}
		}
	}
	cout << "array_2" << "最后结果是：";
	for (int i = 0; i < 10; i++) {
		cout << array[i] << "  ";
	}
	cout << endl;
}
void sort(char array[10])
{
	char temp;
	for (int i = 0; i < 9; i++) {

		for (int j = 0; j < 10 - 1 - i; j++) {
			if (array[j] > array[j + 1]) {
				temp = array[j];
				array[j] = array[j + 1];
				array[j + 1] = temp;
			}
		}
	}
	cout << "array_3" << "最后结果是：";
	for (int i = 0; i < 10; i++) {
		cout << array[i] << "  ";
	}
	cout << endl;
}
void sort(string array)
{
	int flag;
	for(flag=0;array[flag]!='\0';flag++) {}
	char temp;
	for (int i = 0; i<flag; i++) {

		for (int j = 0; j < flag - 1 - i; j++) {
			if (array[j] > array[j + 1]) {
				temp = array[j];
				array[j] = array[j + 1];
				array[j + 1]=temp;
			}
		}
	}
	cout << "array_4" << "最后结果是：";
	for (int i = 0; i < flag; i++) {
		cout << array[i] << "  ";
	}
	cout << endl;
}