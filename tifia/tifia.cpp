#include <iostream>
#include "Staff.h"
#include "Developers.h"
#include "SysAdmins.h"
#include "Testers.h"

/*
������� ������� ����� ��������� � ������-����������: ������������, ���������, �������
������ ������ �����: �������� ���� �������������, ��������� �������� ���� ��������, �������� ���� �������� 
� main() ������� �������, ������ �� ��������, ����� �������� ������� � ������, 
������ �� ��� ������ � �������� �������� �������
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
        //std::cout << salaryAll[i]->salary << " $\n";
    }

    delete ivan,oleg,vova,salaryAll;
}
