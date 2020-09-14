#include "Students.h"
#include <iostream>
#include <string>

unsigned int Students::counterOfStudents = 0;

void Students::getCourse()
{
	std::cout << "Enter the course: ";
	std::cin >> course;
}

void Students::getFormOfEducation() 
{
	std::cout << "Enter the form of education: \n 1. Full-time \n 2. Distance Learning \n 3. Evening classes \n";
	int answer;
	std::cin >> answer;
	formOfEducation = FormOfEducation(answer);
}

void Students::getInstitute() 
{
	std::cout << "Enter the institute: \n 1. Institute for the Humanities \n 2. Institute of Economics and Management \n 3. Institute of Education \n 4. Institute of Recreation, Tourism and Sports \n 5. Institute of Law \n 6. Institute of Environmental Management, Urban Development and Spatial Planning \n 7. Institute of Living Systems \n 8. Institute of Medicine \n 9. Institute of Physics, Mathematics and Information Technology \n 10. Institute of Engineering and Technology" << "\n";
	int answer;
	std::cin >> answer;
	institute = Institute(answer);
}

void Students::getSpecialty()
{
	std::cout << "Enter the specialty: ";
	std::cin >> specialty;
}

Students::Students() 
{
	getCourse();
	getFormOfEducation();
	getInstitute();
	getSpecialty();
	counterOfStudents++;
}

Students::~Students() {}