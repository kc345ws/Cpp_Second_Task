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
	cout << "�ô���нӶ���Ա����Ϊ" << endl;
	cout << BEname << endl;
	cout << "�ô���нӶ���ԱIDΪ:" << endl;
	cout << BEid << endl;
	cout << "�ô���нӶ���Ա�ܹ���Ϊ:" << endl;
	cout << income << endl;
}