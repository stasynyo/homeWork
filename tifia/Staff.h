#ifndef STAFF_H
#define STAFF_H 

class Staff {
	public: 
		virtual void printSpecialty();
		virtual void enterSalary();
		virtual void printSalary();

		float salary;	
};

#endif