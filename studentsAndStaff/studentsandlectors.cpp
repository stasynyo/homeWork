
/*
1. Создать иерархию классов учащихся и сотрудников БФУ.
2. Базовый класс - человек, обладающий пропуском БФУ. Фамилия, имя, Дата рождения (в любом формате).
3. Класс студент - курс, форма обучения (реализовать с помощью перечисления - очная, вечерняя, заочная), институт, 
   направление. (институт можно тоже в виде перечисления)
4. Класс сотрудник - должность, зарплата. Создать константную статическую переменную startSalary, 
   которая доступна извне и устанавливается новым сотрудникам по умолчанию.
5. Реализовать конструкторы для всех классов (с параметрами). Также реализовать подсчёт экземпляров класса.
6. В функции мейн создать двух студентов, двух сотрудников. Положить их все в массив, пройтись по ним 
   и вывести имена.
*/

#include <iostream>
#include "PersonWithAPass.h"
#include "Students.h"
#include "Staff.h"

int main()
{
    Students* ivan = new Students("Ivan", "Ivanov", "12.12.12", 1, FormOfEducation::DISTANCE_LEARNING, Institute::INSTITUTE_OF_ECONOMIMICS_AND_MANADGEMENT , "Manager" );
    Students* vova = new Students("Vladimir", "Vladimirov", "13.13.13", 3, FormOfEducation::EVENING_CLASSES, Institute::INSTITUTE_FOR_THE_HUMANITIES, "Historean");

    Staff* ura = new Staff("Urij", "Gagarin", "14 july 1999", "docent");
    Staff* oleg = new Staff("Oleg", "Miami", "88.88.88", "professor");

    PersonWithAPass* people[4] = { ivan, vova, ura, oleg};

    for (size_t i = 0; i < 4; i++)
    {
         people[i]->printName();
    }

    delete ivan, oleg, vova, ura;
}

