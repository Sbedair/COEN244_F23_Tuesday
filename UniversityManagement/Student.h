#pragma once
#include "Person.h"

class Student: public Person
{
private:
	int ID;
	double GPA;

public:
	Student(int id, double gpa, std::string na, Date d);
	void enroll();
	void setName(std::string s);
	std::string getNames() {
		return this->getName();
	}

};

