#include"tools.h"
#include"Employee.h"
#include<iostream>
#include<vector>
#include<conio.h>
using namespace std;
vector<SalariedEmployee>SE;
vector<HourlyEmployee> HE;
vector<CommissionEmployee>CE;
vector<BasePlusCommissionEmployee>BE;

void AddEmployee()
{
	int select;
	char name;
	int id;
	cout << "���������Ա��������" << endl;
	cout << "1.�����н��Ա" << endl;
	cout << "2.���ʱн��Ա" << endl;
	cout << "3.���Ӷ���Ա" << endl;
	cout << "4.��Ӵ���нӶ���Ա" << endl;
	cin >> select;
	switch (select)
	{
	case 1:
		::SE.emplace_back(SalariedEmployee());
		break;
	case 2:
		::HE.emplace_back(HourlyEmployee());
		break;
	case 3:
		::CE.emplace_back(CommissionEmployee());
		break;
	case 4:
		::BE.emplace_back(BasePlusCommissionEmployee());
		break;
	default:
		cout << "ѡ���������ѡ��" << endl;
		Menu();
		break;
	}
	cout << "��������������˵�" << endl;
	getch();
	Menu();
}

void ShowEmployee()
{
	vector<SalariedEmployee>::iterator iter = SE.begin();
	int i = 1;
	for (iter; iter != SE.end(); iter++)
	{
		cout << "��" << i << "λ��н��Ա��Ϣ:" << endl;
		iter->SalariedEmployee::Show();
		i++;
	}
	cout << endl;
	i = 1;
	vector<HourlyEmployee>::iterator iter1 = HE.begin();
	for (iter1; iter1 != HE.end(); iter1++)
	{
		cout << "��" << i << "λʱн��Ա��Ϣ:" << endl;
		iter1->HourlyEmployee::Show();
		i++;
	}
	cout << endl;
	i = 1;
	vector<CommissionEmployee>::iterator iter2 = CE.begin();
	for (iter2; iter2 != CE.end(); iter2++)
	{
		cout << "��" << i << "λӶ���Ա��Ϣ:" << endl;
		iter2->Show();
		i++;
	}
	cout << endl;
	i = 1;
	vector<BasePlusCommissionEmployee>::iterator iter3 = BE.begin();
	for (iter3; iter3 != BE.end(); iter3++)
	{
		cout << "��" << i << "λӶ���Ա��Ϣ:" << endl;
		iter3->Show();
		i++;
	}
	cout << "��������������˵�" << endl;
	getch();
	Menu();
}

void Menu()
{
	system("CLS");
	int select;
	cout << "���������蹦��:" << endl;
	cout << "1.���Ա��" << endl;
	cout << "2.��ʾ����Ա������Ϣ" << endl;
	cin >> select;
	switch (select)
	{
	case 1:
		AddEmployee();
		break;
	case 2:
		ShowEmployee();
		break;
	default :
		cout << "ѡ���������ѡ��" << endl;
		Menu();
		break;
	}
}