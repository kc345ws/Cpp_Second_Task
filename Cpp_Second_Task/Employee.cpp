#include"Employee.h"
#include<iostream>
using namespace std;

Employee::Employee()
{
	cout << "�����Ա��������" << endl;
	cin >> EmployeeName;
	cout << "�����Ա����ID" << endl;;
	cin >> EmployeeID;
}

void Employee::Show()
{
	cout << "�ù�Ա����Ϊ:" << endl;
	cout << Employee::EmployeeName << endl;
	cout << "��Ա����IDΪ��" << endl;
	cout << Employee::EmployeeID << endl;
}

