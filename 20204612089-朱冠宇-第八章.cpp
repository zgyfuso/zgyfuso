#include<iostream>
using namespace std;
template<typename T>
class intList
{
protected:
	struct Node {
		struct Node* next;//指向下一个节点
		T data;
	};
	Node* pFirst;//头节点
public:
	intList();
	~intList();//析构
	bool insert(int i, T elem);
	bool remove(int i, T& elem);//传地址进入需要delete
	int find(T elem)const;
	int length() const;
	void printList();
};
template<typename T>
intList<T>::intList() {
	pFirst = new Node;
	pFirst->next = NULL;
	cout << "链表头创立成功\n";
}
template<typename T>
intList<T>::~intList() {
	Node* p, * q;
	p = pFirst;
	while (p->next != NULL)
	{
		q = p->next;
		delete p;
		p = q;
	}
	delete p;
	pFirst = NULL;
}
template<typename T>
int intList<T>::length() const {
	Node* p; int j;
	p = pFirst->next; j = 0;
	while (p != NULL)
	{
		p = p->next; j++;
	}
	return j;
}
template<typename T>
int intList<T>::find(T elem) const {
	Node* p;
	int j; T data;
	p = pFirst->next; j = 1;
	while (p != NULL)
	{
		data = p->data;
		if (data == elem) break;
		p = p->next; j++;
	}
	if (p != NULL) return j;
	else return 0;
}
template<typename T>
bool intList<T>::insert(int loc, T elem) {
	Node* p, * s; int  j;
	p = pFirst; j = 0;
	while ((p != NULL) && (j < loc - 1))
	{
		p = p->next; j++;
	}
	if (p)
	{
		if ((j == loc - 1) && p->next == NULL)
		{
			s = new Node;
			p->data = elem;
			s->next = NULL;
			p->next = s;
			return true;
		}
		else if ((j == loc - 1) && (p->next != NULL))
		{
			s = new Node;
			p->data = elem;
			s->next = p->next->next;
			p->next = s;
			return true;
		}
		else return 0;
	}
}
template<typename T>
bool intList<T>::remove(int i, T& elem) {
	Node* p, * q; int j;
	p = pFirst; j = 0;
	while ((p->next != NULL) && (j < i - 1))
	{
		p = p->next; j++;
	}
	if ((p->next != NULL) && (j < i))
	{
		q = p->next;
		p->next = p->next->next;
		elem = q->data;
		delete(q);
		return true;
	}
	else return false;
}
template<typename T>
void intList<T>::printList() {
	Node* p;
	p = pFirst;
	while (p->next != NULL)
	{
		cout << p->data;
		p = p->next;
	};
	cout << endl;
}

int main() {
	intList<int> L;
	for (int i = 0; i < 10; i++)
	{
		L.insert(i + 1, i);
	}
	L.printList();
	int el1;
	if (L.remove(4, el1))
	{
		cout << "Delete the fourth element success!" << "--delete is " << el1 << endl;
	}
	else {
		cout << "Delete fail!" << endl;
	}
	L.printList();
	int loc = L.find(5);
	if (loc != 0) {
		cout << "Find! The position of Element 5 is " << loc << endl;
	}
	else {
		cout << "Not find!" << endl;
	}
	intList<string> M;
	for (int i = 0; i < 10; i++)
	{
		string s = "this is ";
		s += (char)(65 + i);
		M.insert(i + 1, s+" ");
	}
	M.printList();
	string el2 ;
	if (M.remove(4, el2))
	{
		cout << "Delete the fourth element success!" << "--delete is " << el2 << endl;
	}
	else {
		cout << "Delete fail!" << endl;
	}
	M.printList();
	loc = M.find("this is D ");
	if (loc != 0) {
		cout << "Find! The position of Element \"B\" is " << loc << endl;
	}
	else {
		cout << "Not find!" << endl;
	}
	return 0;
}
