#include"Employee.h"
#include<iostream>
using namespace std;

SalariedEmployee::SalariedEmployee()
{
	cout << "�������н��Ա�Ĺ���" << endl;
	cin >> SalariedEmployee::income;
}

SalariedEmployee::SalariedEmployee(float im)
{
	SalariedEmployee::income = im;
}

//void SalariedEmployee::PrintfIncome()
//{
//	cout << "����н��Ա�ܹ���Ϊ:" << endl;
//	cout << SalariedEmployee::income << endl;
//}

void SalariedEmployee::Show()
{
	cout << "����н��Ա����Ϊ" << endl;
	cout << SEname << endl;
	cout << "����н��ԱIDΪ:" << endl;
	cout << SEid << endl;
	cout << "����н��Ա�ܹ���Ϊ:" << endl;
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



