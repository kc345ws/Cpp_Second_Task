#include<iostream>
#include"Employee.h"
using namespace std;

CommissionEmployee::CommissionEmployee()
{
	cout << "�������Ӷ���Ա��������" << endl;
	cin >> goodsnumber;
	cout << "��������Ʒ�۸�" << endl;
	cin >> price;
	income = goodsnumber * price;
	cout << "��Ӷ���Ա��н�ʵ�Ϊ:" << endl;
	cout << income << endl;
}

CommissionEmployee::CommissionEmployee(int num)
{
	goodsnumber = num;
}

void CommissionEmployee::CalculateIncome()
{
	cout << "��������Ʒ�۸�" << endl;
	cin >> price;
	income = goodsnumber * price;
	cout << "��Ӷ���Ա��н�ʵ�Ϊ:" << endl;
	cout << income << endl;
}

void CommissionEmployee::Show()
{
	cout << "��Ա����:" << endl;
	cout << CEname << endl;
	cout << "��ԱID:" << endl;
	cout << CEid << endl;
	cout << "������" << endl;
	cout << goodsnumber << endl;
	cout << "�ܹ���:" << endl;
	cout << income << endl;
}