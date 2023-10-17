#include "Professor.h"

Professor::Professor(std::string D, int h, int s, std::string name, Date db) : Faculty(s,h,name,db) {
	department = D;
}

double Professor::Bonus() {
	return this->getHours() * (1.5 * 13);
}