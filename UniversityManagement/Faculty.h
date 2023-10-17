#pragma once
#include "Person.h"

class Faculty: public Person
{
private:
	int Salary;
	int hours;
	int ID;

public:
	Faculty(int s, int h, std::string n, Date dob);
	int getHours() {
		return hours;
	}
	virtual double Bonus() = 0;
};

