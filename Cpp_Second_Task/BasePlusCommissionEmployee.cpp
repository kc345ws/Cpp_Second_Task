#include<iostream>
#include"Employee.h"
using namespace std;

BasePlusCommissionEmployee::BasePlusCommissionEmployee()
{
	/*cout << "������ô���нӶ���Ա��������" << endl;
	cin >> goodsnumber;*/
	cout << "�������Ա���ĵ�н:" << endl;
	cin >> laseincome;
	income = laseincome + goodsnumber * price;
	cout << "�ô���нӶ���Ա���ܹ���Ϊ:" << endl;
	cout << income << endl;

}


void BasePlusCommissionEmployee::Show()
{
	cout << "��Ա����:����н��Ӷ���Ա" << endl;
	cout << "��Ա����:" << endl;
	cout << EmployeeName << endl;
	cout << "��ԱID:" << endl;
	cout << EmployeeID << endl;
	Birthday.ShowBirthday();
	cout << "������" << endl;
	cout << goodsnumber << endl;
	cout << "��н:" << endl;
	cout << laseincome << endl;
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