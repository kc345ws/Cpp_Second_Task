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
	cout << "��Ӷ���Ա����Ϊ" << endl;
	cout << CEname << endl;
	cout << "����н��ԱIDΪ:" << endl;
	cout << CEid << endl;
	cout << "��Ӷ���Ա�ܹ���Ϊ:" << endl;
	cout << income << endl;
}