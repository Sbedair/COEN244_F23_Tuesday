#include "Student.h"


Student::Student(int id, double gpa) {
	ID = id;
	GPA = gpa;
}

void Student::setName(std::string s) {
	this->setNames(s);
}