#include"Employee.h"
#include<iostream>
#include<vector>
using namespace std;



HourlyEmployee::HourlyEmployee()
{
	cout << "�����ʱн��Ա�Ĺ���ʱ��" << endl;
	cin >> Worktime;
	if (Worktime < 0)
	{
		cout << "�����ʱ��С��0����������" << endl;
		cin >> Worktime;
	}
	cout << "�����ʱн��ԱÿСʱ�Ĺ���" << endl;
	cin >> HourlyIncome;
	if (HourlyIncome < 0)
	{
		cout << "����Ĺ���С��0����������" << endl;
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
//	cout << "��ʱн��Ա�ܹ���Ϊ:" << endl;
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
	cout << "��Ա����:" << endl;
	cout << HEname << endl;
	cout << "��ԱID:" << endl;
	cout << HEid << endl;
	cout << "����ʱ��:" << endl;
	cout << Worktime << endl;
	cout << "����:" << endl;
	cout << income << endl;
}
