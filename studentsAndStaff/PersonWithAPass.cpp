#include "PersonWithAPass.h"
#include <iostream>

unsigned int PersonWithAPass::counterOfSamples = 0;

void PersonWithAPass::printName()
{
	std::cout << name << " " << surname << "\n";
}

PersonWithAPass::PersonWithAPass(std::string name, std::string surname, std::string dateOfBday)
	: name(name),
	surname (surname),
	dateOfBday(dateOfBday)
{
	counterOfSamples++;
}

PersonWithAPass::~PersonWithAPass()
{
}

