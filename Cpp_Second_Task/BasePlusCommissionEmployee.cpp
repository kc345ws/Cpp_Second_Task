#include<iostream>
#include"Employee.h"
using namespace std;

BasePlusCommissionEmployee::BasePlusCommissionEmployee()
{
	cout << "������ô���нӶ���Ա��������" << endl;
	cin >> goodsnumber;
	cout << "��������Ʒ�۸�:" << endl;
	cin >> price;
	income = laseincome + goodsnumber * price;
	cout << "�ô���нӶ���Ա���ܹ���Ϊ:" << endl;
	cout << income << endl;
}

BasePlusCommissionEmployee::BasePlusCommissionEmployee(int num)
{
	goodsnumber = num;
}

void BasePlusCommissionEmployee::CalculateIncome()
{
	cout << "��������Ʒ�۸�:" << endl;
	cin >> price;
	income = laseincome + goodsnumber * price;
	cout << "�ô���нӶ���Ա���ܹ���Ϊ:" << endl;
	cout << income << endl;
}

void BasePlusCommissionEmployee::Show()
{
	cout << "��Ա����:" << endl;
	cout << BEname << endl;
	cout << "��ԱID:" << endl;
	cout << BEid << endl;
	cout << "������" << endl;
	cout << goodsnumber << endl;
	cout << "��н:" << endl;
	cout << laseincome << endl;
	cout << "�ܹ���:" << endl;
	cout << income << endl;
}