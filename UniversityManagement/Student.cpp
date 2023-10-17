#include "Student.h"


Student::Student(int id, double gpa, std::string na, Date d): Person(na,d.getDay(),d.getMonth(), d.getYear()) {
	ID = id;
	GPA = gpa;
}

void Student::setName(std::string s) {
	this->setNames(s);
}