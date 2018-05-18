#pragma once

#include<iostream>
#include<string>
using namespace std;
class Student
{
public:
	Student(string name, int age);
	~Student();
	string name;
	int age;

	bool operator<(const Student &otherStudent)
	{
		return this->age < otherStudent.age;
	}

	friend ostream& operator<<(ostream &os, const Student &student)
	{
		os << "Student:" << student.name << " " << student.age << endl;
		return os;
	}
};

