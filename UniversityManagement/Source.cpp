#include <iostream>
#include "Student.h"

using namespace std;

int main() {
	Student* st = new Student(12345,0.1);

	cout << st->getNames() << endl;

	st->setName("Jonathan");

	cout << st->getNames();

}
