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

//void SalariedEmployee::PrintfIncome()
//{
//	cout << "该周薪雇员总工资为:" << endl;
//	cout << SalariedEmployee::income << endl;
//}

void SalariedEmployee::Show()
{
	cout << "姓名:" << endl;
	cout << SEname << endl;
	cout << "ID:" << endl;
	cout << SEid << endl;
	cout << "总工资:" << endl;
	cout << SalariedEmployee::income << endl;
}

//void HourlyEmployee::CalculateIncome()
//{
//	if (Worktime < 40)
//	income = Worktime * HourlyIncome;
//
//	else
//	income = 40 * HourlyIncome + (Worktime-40)*HourlyIncome*1.5;
//}



