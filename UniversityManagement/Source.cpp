#include <iostream>
#include "Student.h"
#include "Admin.h"
#include "Professor.h"

using namespace std;

int main() {

	Date* date = new Date(4,20,1969);

	Faculty* prof = new Professor("ECE", 45, 100, "Robert", *date);
	Faculty* adm = new Admin("DOS", 45, 100, "Robert", *date);

	cout << prof->getName() << " Gets : " << prof->Bonus() << " this year"<<endl;
	cout << adm->getName() << " Gets : " << adm->Bonus() << " this year";
}
