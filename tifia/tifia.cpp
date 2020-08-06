#include <iostream>
#include "Staff.h"
#include "Developers.h"
#include "SysAdmins.h"
#include "Testers.h"

/*
Создать базовый класс работника и классы-наследники: программисты, сисадмины, тестеры
объект должен уметь: печатать свою специальность, позволять задавать себе зарплату, выводить свою зарплату 
в main() создать объекты, задать им зарплату, потом положить объекты в массив, 
пройти по ним циклом и выводить зарплату каждого
*/

int main()
{
   
    Developers* ivan = new Developers;
    ivan->enterSalary();

    Testers* oleg = new Testers;
    oleg->enterSalary();

    SysAdmins* vova = new SysAdmins;
    vova->enterSalary();


    Staff *salaryAll[3] = { ivan, oleg, vova };

    for (size_t i = 0; i < 3; i++)
    {
        salaryAll[i]->printSalary();
    }

    delete ivan,oleg,vova;
}
