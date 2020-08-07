#ifndef STAFF_H
#define STAFF_H 

class Staff {
	public: 
		virtual void printSpecialty();
		void enterSalary();
		void printSalary();
	private:
		float salary;	
};

#endif