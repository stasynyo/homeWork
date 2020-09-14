#ifndef STAFF_H
#define STAFF_H

#include <string>
#include "PersonWithAPass.h"

class Staff:public PersonWithAPass
{
public:
	void getPosition();
	void getSalary();
	Staff();
	~Staff();

private:
	static const unsigned short startSalary;
	unsigned short salary;
	std::string position;
	static unsigned int counterOfStaff;
};


#endif
