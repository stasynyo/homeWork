#include "Staff.h"
#include <string>
#include <iostream>

unsigned int Staff::counterOfStaff = 0;
const unsigned short Staff::startSalary = 1000;

void Staff::setSalary()
{
	std::cout << "Enter the salary: ";
	std::cin >> salary;
}

Staff::Staff(std::string name, std::string surname, std::string dateOfBday, std::string position)
	:PersonWithAPass(name, surname, dateOfBday),
	position(position)
{
	salary = startSalary;
	counterOfStaff++;
}

Staff::~Staff()
{
}



