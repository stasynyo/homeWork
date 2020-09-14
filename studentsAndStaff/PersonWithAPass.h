#ifndef PERSONWITHAPASS_H
#define PERSONWITHAPASS_H

#include <string>

class PersonWithAPass
{
public:
	void getName();
	void setName();
	void getSurname();
	void getDateOfBday();
	PersonWithAPass();
	~PersonWithAPass();

private:
	std::string name;
	std::string surname;
	std::string dateOfBday;
	static unsigned int counterOfSamples;
};
#endif