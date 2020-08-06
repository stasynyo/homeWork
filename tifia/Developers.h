#include "Staff.h"


class Developers:public Staff {
public:
	virtual void printSpecialty();
	virtual void enterSalary();
	virtual void printSalary();

	float salary = 0;
};
