#pragma once
#include <string>
#include "Date.h"

class Person
{
private:
	std::string name;
	Date DoB;

public:
	Person(std::string n = "na", int d = 1, int m = 1, int y = 2001) {
		name = n;
		Date dob(d,m,y);
		DoB = dob;
	}

	int getAge() {
		return 2023 - DoB.getYear();
	}

	std::string getName() {
		return name;
	}
	void setNames(std::string n) {
		name = n;
	}

};

