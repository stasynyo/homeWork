#include "Staff.h"


class Testers:public Staff {
	public:
		virtual void printSpecialty();
		virtual void enterSalary();
		virtual void printSalary();

	float salary;
};