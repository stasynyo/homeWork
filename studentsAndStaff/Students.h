#ifndef STUDENTS_H
#define STUDENTS_H

#include <string>
#include "PersonWithAPass.h"

class Students:public PersonWithAPass
{
public:
	void getCourse();
	void getFormOfEducation();
	void getInstitute();
	void getSpecialty();
	Students();
	~Students();

private:
	unsigned short course;
	enum class FormOfEducation {
		FULLTIME = 1,
		DISTANCE_LEARNING,
		EVENING_CLASSES
	};

	FormOfEducation formOfEducation;

	enum class Institute {
		INSTITUTE_FOR_THE_HUMANITIES = 1,
		INSTITUTE_OF_ECONOMIMICS_AND_MANADGEMENT,
		INSTITUTE_OF_EDUCATION,
		INSTITUTE_OF_RECRETION_TOURISM_AND_SPORTS,
		INSTITUTE_OF_LAW,
		INSTITUTE_OF_ENVIROMENTAL_MANADGEMENT_URBAN_DEVELOPMENT_AND_SPATIAL_PLANNING,
		INSTITUTE_OF_LIVING_SYSTEMS,
		INSTITUTE_OF_MEDICINE,
		INSTITUTE_OF_PHYSICS_MATHEMATICS_AND_INFORMATION_TECHNOLOGY,
		INSTITUTE_OF_ENGINEERING_AND_TECHNOLOGY
	};

	Institute institute;

	std::string specialty;
	static unsigned int counterOfStudents;
};
#endif