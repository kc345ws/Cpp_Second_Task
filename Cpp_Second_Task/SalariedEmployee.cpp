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

void SalariedEmployee::Show()
{
	cout << "��Ա����:" << endl;
	cout << SEname << endl;
	cout << "��ԱID:" << endl;
	cout << SEid << endl;
	cout << "�ܹ���:" << endl;
	cout << SalariedEmployee::income << endl;
}





