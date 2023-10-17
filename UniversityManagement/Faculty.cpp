#include "Faculty.h"

static int ID_Share = 500000;

Faculty::Faculty(int s, int h, std::string n, Date dob): Person(n,dob.getDay(), dob.getMonth(), dob.getYear()) {
	Salary = s;
	hours = h;
	ID = ++ID_Share;
}
