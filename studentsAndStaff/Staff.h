#ifndef STAFF_H
#define STAFF_H

#include <string>
#include "PersonWithAPass.h"

class Staff:public PersonWithAPass
{
public:
	Staff(std::string name, std::string surname, std::string dateOfBday, std::string position);
	~Staff();

	void setSalary();

private:
	static const unsigned short startSalary;
	unsigned short salary;
	std::string position;
	static unsigned int counterOfStaff;
};


#endif
