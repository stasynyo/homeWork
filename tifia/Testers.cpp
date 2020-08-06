#include <iostream>
#include "Testers.h"


void Testers::printSpecialty()
{
	std::cout << "Your specialty is tester \n";
}

void Testers::enterSalary()
{
	std::cout << "Enter a tester salary: ";
	std::cin >> salary;
}

void Testers::printSalary() {
	std::cout << "Tester salary is " << salary << " $\n";
}