#pragma once
#include "Person.h"

class Student: public Person
{
private:
	int ID;
	double GPA;

public:
	Student(int id, double gpa);
	void enroll();
	void setName(std::string s);
	std::string getNames() {
		return this->getName();
	}

};

