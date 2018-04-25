#include"Employee.h"
#include<iostream>
#include<vector>
using namespace std;



HourlyEmployee::HourlyEmployee()
{
	cout << "输入该时薪雇员的工作时间" << endl;
	cin >> Worktime;
	if (Worktime < 0)
	{
		cout << "输入的时间小于0请重新输入" << endl;
		cin >> Worktime;
	}
	cout << "输入该时薪雇员每小时的工资" << endl;
	cin >> HourlyIncome;
	if (HourlyIncome < 0)
	{
		cout << "输入的工资小于0请重新输入" << endl;
		cin >> HourlyIncome;
	}
	if (Worktime < 40)
		income = Worktime * HourlyIncome;
	else
		income = 40 * HourlyIncome + (Worktime - 40)*HourlyIncome*1.5;
}

HourlyEmployee::HourlyEmployee(int time,float hi)
{
	HourlyEmployee::Worktime = time;
	HourlyEmployee::HourlyIncome = hi;
}

//void HourlyEmployee::PrintfIncome()
//{
//	cout << "该时薪雇员总工资为:" << endl;
//	cout << HourlyEmployee::income << endl;
//
//}
//
//
//void HourlyEmployee::CalculateIncome()
//{
//	if (Worktime < 40)
//		income = Worktime * HourlyIncome;
//
//	else
//		income = 40 * HourlyIncome + (Worktime - 40)*HourlyIncome*1.5;
//}

void HourlyEmployee::Show()
{
	cout << "雇员姓名:" << endl;
	cout << HEname << endl;
	cout << "雇员ID:" << endl;
	cout << HEid << endl;
	cout << "工作时长:" << endl;
	cout << Worktime << endl;
	cout << "工资:" << endl;
	cout << income << endl;
}
