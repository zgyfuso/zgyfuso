#pragma once

#include <iostream>
#include "teacher.h"
using namespace std;

class Teacher;

class Student
{
public:
	Student(const char name0[], int StuID0){
		strcpy(name, name0);
		StuID = StuID0;
	}
	char* GetName()
    {
        return name;
    }
	void Print()
	{
		cout<<StuID<<":"<<name<<endl;
	}

private:
	char name[100];
	int  StuID;
};


class GraduatedStudent: public Student
{
public:
	GraduatedStudent(const char name0[], int StuID): Student(name0,StuID)
	{}
	GraduatedStudent(const char name0[], int StuID, Teacher *mentor0): Student(name0,StuID)
	{
		mentor = mentor0;
	}
	void AddMentor(Teacher *mentor0)
	{
		mentor = mentor0;
	}
	void Print();

private:
	Teacher *mentor; 
};
