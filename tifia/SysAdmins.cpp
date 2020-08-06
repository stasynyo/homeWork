#include <iostream>
#include "SysAdmins.h"


void SysAdmins::printSpecialty()
{
	std::cout << "Your specialty is system administrator \n";
}

void SysAdmins::enterSalary()
{
	std::cout << "Enter a system administrator salary: ";
	std::cin >> salary;
}

void SysAdmins::printSalary() {
	std::cout << "System administrator salary is " << salary << " $\n";
}