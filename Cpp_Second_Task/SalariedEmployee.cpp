#include"Employee.h"
#include<iostream>
#include"Date.h"
using namespace std;

SalariedEmployee::SalariedEmployee()
{
	cout << "输入该周薪雇员的工资" << endl;
	cin >> SalariedEmployee::income;
}

void SalariedEmployee::Show()
{
	cout << "雇员姓名:" << endl;
	cout << EmployeeName << endl;
	cout << "雇员ID:" << endl;
	cout << EmployeeID << endl;
	Birthday.ShowBirthday();
	cout << "总工资:" << endl;
	cout << income << endl;
	if (Birthday.ChechBirthday())
	{
		cout << "生日快乐！今天是这位员工生日，奖励100元基本工资提升10%" << endl;
		income = 100 + 1.1*income;
		cout << "新的工资:" << endl;
		cout << income << endl;
	}

}





