#include <iostream>
#include "Staff.h"

void Staff::printSpecialty()
{
	std::cout << "Your specialty is staff \n";
}

void Staff::enterSalary()
{
	std::cout << "Enter a staff salary: ";
	std::cin >> salary;
}

void Staff::printSalary() {
	std::cout << salary << " $\n";
}