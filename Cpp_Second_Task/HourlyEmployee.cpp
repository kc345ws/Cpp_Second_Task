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



void HourlyEmployee::Show()
{
	cout << "��Ա����:ʱн��Ա" << endl;
	cout << "��Ա����:" << endl;
	cout << EmployeeName << endl;
	cout << "��ԱID:" << endl;
	cout << EmployeeID << endl;
	Birthday.ShowBirthday();
	cout << "����ʱ��:" << endl;
	cout << Worktime << endl;
	cout << "����:" << endl;
	cout << income << endl;
	if (Birthday.ChechBirthday())
	{
		cout << "���տ��֣�����100Ԫ������������10%" << endl;
		income = 100 + 1.1*income;
		cout << "�µĹ���:" << endl;
		cout << income << endl;
	}
}
