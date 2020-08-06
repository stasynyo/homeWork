#include <iostream>
#include "Developers.h"

void Developers::printSpecialty()
{
	std::cout << "Your specialty is developer \n";
}

void Developers::enterSalary()
{
	std::cout << "Enter a developer salary: ";
	std::cin >> salary;
}

void Developers::printSalary() {
	std::cout << "Developer salary is " << salary << " $\n";
}