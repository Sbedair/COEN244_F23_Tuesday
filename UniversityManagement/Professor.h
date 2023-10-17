#pragma once
#include "Faculty.h"

class Professor: public Faculty
{
private:
	std::string department;

public:
	Professor(std::string D, int h, int s, std::string name, Date db);
	virtual double Bonus();
};

