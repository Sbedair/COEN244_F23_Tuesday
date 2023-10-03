#pragma once
#include <string>

class Date
{
private:
	int day;
	int month;
	int year;

public:
	Date(int d = 1, int m = 1, int y = 2000) {
		day = d;
		month = m;
		year = y;
	}

	std::string getDate() {
		return std::to_string(day) + "/" + std::to_string(month) + "/" + std::to_string(year);
	}
	int getDay() {
		return day;
	}
	int getMonth() {
		return month;
	}
	int getYear() {
		return year;
	}

};

