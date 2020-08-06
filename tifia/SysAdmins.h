
#include "Staff.h"


class SysAdmins:public Staff {
	public:
		virtual void printSpecialty();
		virtual void enterSalary();
		virtual void printSalary();

		float salary;
};