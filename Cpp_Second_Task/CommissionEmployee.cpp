#include<iostream>
#include"Employee.h"
using namespace std;

CommissionEmployee::CommissionEmployee()
{
	cout << "�������Ӷ���Ա��������" << endl;
	cin >> goodsnumber;
	if (goodsnumber < 0)
	{
		cout << "�����������С��0����������" << endl;
		cin >> goodsnumber;
	}
	cout << "��������Ʒ�۸�" << endl;
	cin >> price;
	if (price < 0)
	{
		cout << "����ļ۸�С��0����������" << endl;
		cin >> price;
	}
	income = goodsnumber * price;
	//cout << "��Ӷ���Ա��н�ʵ�Ϊ:" << endl;
	//cout << income << endl;
}



void CommissionEmployee::Show()
{
	cout << "��Ա����:" << endl;
	cout << EmployeeName << endl;
	cout << "��ԱID:" << endl;
	cout << EmployeeID << endl;
	Birthday.ShowBirthday();
	cout << "������" << endl;
	cout << goodsnumber << endl;
	cout << "�ܹ���:" << endl;
	cout << income << endl;
	if (Birthday.ChechBirthday())
	{
		cout << "���տ��֣�����100Ԫ������������10%" << endl;
		income = 100 + 1.1*income;
		cout << "�µĹ���:" << endl;
		cout << income << endl;
	}
}