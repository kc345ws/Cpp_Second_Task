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

Employee::Employee(char name , int id)
{
	EmployeeName = name;
	EmployeeID = id;
}

void Employee::PrintfEmployee()
{
	cout << "�ù�Ա����Ϊ:" << endl;
	cout << Employee::EmployeeName << endl;
	cout << "��Ա����IDΪ��" << endl;
	cout << Employee::EmployeeID << endl;
}

