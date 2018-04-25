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
	cout << "请输入添加员工的类型" << endl;
	cout << "1.添加周薪雇员" << endl;
	cout << "2.添加时薪雇员" << endl;
	cout << "3.添加佣金雇员" << endl;
	cout << "4.添加带底薪佣金雇员" << endl;
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
		cout << "选择错误，重新选择" << endl;
		Menu();
		break;
	}
	cout << "按任意键返回主菜单" << endl;
	getch();
	Menu();
}

void ShowEmployee()
{
	vector<SalariedEmployee>::iterator iter = SE.begin();
	int i = 1;
	for (iter; iter != SE.end(); iter++)
	{
		cout << "第" << i << "位周薪雇员信息:" << endl;
		iter->SalariedEmployee::Show();
		i++;
	}
	cout << endl;
	i = 1;
	vector<HourlyEmployee>::iterator iter1 = HE.begin();
	for (iter1; iter1 != HE.end(); iter1++)
	{
		cout << "第" << i << "位时薪雇员信息:" << endl;
		iter1->HourlyEmployee::Show();
		i++;
	}
	cout << endl;
	i = 1;
	vector<CommissionEmployee>::iterator iter2 = CE.begin();
	for (iter2; iter2 != CE.end(); iter2++)
	{
		cout << "第" << i << "位佣金雇员信息:" << endl;
		iter2->Show();
		i++;
	}
	cout << endl;
	i = 1;
	vector<BasePlusCommissionEmployee>::iterator iter3 = BE.begin();
	for (iter3; iter3 != BE.end(); iter3++)
	{
		cout << "第" << i << "位佣金雇员信息:" << endl;
		iter3->Show();
		i++;
	}
	cout << "按任意键返回主菜单" << endl;
	getch();
	Menu();
}

void Menu()
{
	system("CLS");
	int select;
	cout << "请输入所需功能:" << endl;
	cout << "1.添加员工" << endl;
	cout << "2.显示所有员工的信息" << endl;
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
		cout << "选择错误，重新选择" << endl;
		Menu();
		break;
	}
}