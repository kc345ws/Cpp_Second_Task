#include"Employee.h"
#include<iostream>
using namespace std;

Employee::Employee()
{
	cout << "输入该员工的姓名" << endl;
	cin >> EmployeeName;
	cout << "输入该员工的ID" << endl;;
	cin >> EmployeeID;
}

Employee::Employee(char name , int id)
{
	EmployeeName = name;
	EmployeeID = id;
}

void Employee::PrintfEmployee()
{
	cout << "该雇员姓名为:" << endl;
	cout << Employee::EmployeeName << endl;
	cout << "该员工的ID为：" << endl;
	cout << Employee::EmployeeID << endl;
}

