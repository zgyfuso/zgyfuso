#pragma once

#include <iostream>
#include <cstring>
#include "student.h"

using namespace std;

class Student;
class GraduatedStudent;

class Teacher
{
public:
	Teacher(const char name0[]):num_GradStu(0){
		strcpy(name, name0);
	}

	char* GetName()
    {
        return name;
    }

	void AddGraduatedStudent(GraduatedStudent *gradstu)
	{
		GradStu[num_GradStu++] = gradstu;
	}

	void Print();

private:
	char name[100];
	GraduatedStudent *GradStu[50]; 
	int num_GradStu;
};