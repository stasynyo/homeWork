#include "PersonWithAPass.h"
#include <iostream>

unsigned int PersonWithAPass::counterOfSamples = 0;

void PersonWithAPass::getName() 
{
	std::cout << "Enter the name: \n";
	std::cin >> name >> surname;
}

void PersonWithAPass::setName()
{
	std::cout << name << " " << surname << "\n";
}

void PersonWithAPass::getDateOfBday()
{
	std::cout << "Date of birth: \n";
	std::cin >> dateOfBday;
}

PersonWithAPass::PersonWithAPass()
{
	getName();
	getSurname();
	getDateOfBday();
	counterOfSamples++;
}

PersonWithAPass::~PersonWithAPass()
{
}

