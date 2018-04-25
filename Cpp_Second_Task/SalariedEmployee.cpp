#include"Employee.h"
#include<iostream>
using namespace std;

SalariedEmployee::SalariedEmployee()
{
	cout << "输入该周薪雇员的工资" << endl;
	cin >> SalariedEmployee::income;
}

SalariedEmployee::SalariedEmployee(float im)
{
	SalariedEmployee::income = im;
}

void SalariedEmployee::Show()
{
	cout << "雇员姓名:" << endl;
	cout << SEname << endl;
	cout << "雇员ID:" << endl;
	cout << SEid << endl;
	cout << "总工资:" << endl;
	cout << SalariedEmployee::income << endl;
}





