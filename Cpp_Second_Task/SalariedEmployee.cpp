#include"Employee.h"
#include<iostream>
#include"Date.h"
using namespace std;

SalariedEmployee::SalariedEmployee()
{
	cout << "�������н��Ա�Ĺ���" << endl;
	cin >> SalariedEmployee::income;
}

void SalariedEmployee::Show()
{
	cout << "��Ա����:" << endl;
	cout << EmployeeName << endl;
	cout << "��ԱID:" << endl;
	cout << EmployeeID << endl;
	Birthday.ShowBirthday();
	cout << "�ܹ���:" << endl;
	cout << income << endl;
	if (Birthday.ChechBirthday())
	{
		cout << "���տ��֣���������λԱ�����գ�����100Ԫ������������10%" << endl;
		income = 100 + 1.1*income;
		cout << "�µĹ���:" << endl;
		cout << income << endl;
	}

}





