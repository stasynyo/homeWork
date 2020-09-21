#ifndef PERSONWITHAPASS_H
#define PERSONWITHAPASS_H

#include <string>

class PersonWithAPass
{
public:
	PersonWithAPass(std::string name, std::string surname, std::string dateOfBday);
	~PersonWithAPass();

	void printName();
		
private:
	std::string name;
	std::string surname;
	std::string dateOfBday;
	static unsigned int counterOfSamples;
};
#endif