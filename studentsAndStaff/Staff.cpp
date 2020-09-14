#include "Staff.h"
#include <string>
#include <iostream>

unsigned int Staff::counterOfStaff = 0;
const unsigned short Staff::startSalary = 1000;

void Staff::getPosition() 
{
	std::cout << "Enter the position: ";
	std::cin >> position;
}

void Staff::getSalary()
{
	std::cout << "Enter the salary: ";
	std::cin >> salary;
}

Staff::Staff()
{
	salary = startSalary;
	getPosition();
	counterOfStaff++;
}

Staff::~Staff()
{
}

