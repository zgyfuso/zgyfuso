#include <iostream>
#include<Windows.h>
#include "student.h"
#include "teacher.h"

using namespace std;

void GraduatedStudent::Print()
{
    Student::Print();
    cout << "  , Mentor:" << mentor->GetName() << endl;
}

void Teacher::Print()
{
    cout << "Teacher, " << name << ", have " << num_GradStu << " student:";
    for (int i = 0; i < num_GradStu; i++)
        cout << (GradStu[i])->GetName() << ",";
    cout << endl;
}

int main()
{
	GraduatedStudent gs1("ZhangQi", 1001), gs2("LiuWu", 1002), gs3("ChenPi",1003);
	Teacher t1("WangLi");

	gs1.AddMentor(&t1);
	t1.AddGraduatedStudent(&gs1);

	gs2.AddMentor(&t1);
	t1.AddGraduatedStudent(&gs2);

	gs1.Print();
	t1.Print();
	system("pause");
	return 0;
}