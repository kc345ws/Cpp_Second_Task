#include"Employee.h"
#include<iostream>
#include<vector>
using namespace std;



HourlyEmployee::HourlyEmployee()
{
	cout << "�����ʱн��Ա�Ĺ���ʱ��" << endl;
	cin >> Worktime;
	cout << "�����ʱн��ԱÿСʱ�Ĺ���" << endl;
	cin >> HourlyIncome;
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

void HourlyEmployee::PrintfIncome()
{
	cout << "��ʱн��Ա�ܹ���Ϊ:" << endl;
	cout << HourlyEmployee::income << endl;

}


void HourlyEmployee::CalculateIncome()
{
	if (Worktime < 40)
		income = Worktime * HourlyIncome;

	else
		income = 40 * HourlyIncome + (Worktime - 40)*HourlyIncome*1.5;
}

void HourlyEmployee::Show()
{
	cout << "����:" << endl;
	cout << HEname << endl;
	cout << "ID:" << endl;
	cout << HEid << endl;
	cout << "����ʱ��:" << endl;
	cout << Worktime << endl;
	cout << "����:" << endl;
	cout << income << endl;
}
