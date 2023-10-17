#include "Admin.h"

Admin::Admin(std::string c, int h, int s, std::string name, Date db): Faculty(s, h, name, db) {
	campus = c;
}

double Admin::Bonus() {
	return this->getHours() * 2 * 13;
}