#pragma once
#include "Faculty.h"

class Admin: public Faculty
{
private:
	std::string campus;

public:
	Admin(std::string c, int h, int s, std::string name, Date db);
	virtual double Bonus();

};

