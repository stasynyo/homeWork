#include "Students.h"
#include <iostream>
#include <string>

unsigned int Students::counterOfStudents = 0;


Students::Students(std::string name, std::string surname, std::string dateOfBday, unsigned short course, FormOfEducation formOfEducation, Institute institute, std::string specialty)
	:PersonWithAPass(name, surname, dateOfBday),
	course(course),
	formOfEducation(formOfEducation),
	institute(institute),
	specialty(specialty)
{
	counterOfStudents++;
}

Students::~Students() {}