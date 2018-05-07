#include"tools.h"
#include"Employee.h"
#include<iostream>
#include<vector>
#include<conio.h>
#include<time.h>
using namespace std;
//vector<SalariedEmployee>SE;
//vector<HourlyEmployee> HE;
//vector<CommissionEmployee>CE;
//vector<BasePlusCommissionEmployee>BE;
vector<Employee*>Emp;

void fun(Employee *point) //强制类型转换
{
	if (typeid(*point) == typeid(SalariedEmployee))
	{
		SalariedEmployee *p1 = dynamic_cast<SalariedEmployee*>(point);
	}
	if (typeid(*point) == typeid(HourlyEmployee))
	{
		HourlyEmployee *p2 = dynamic_cast<HourlyEmployee*>(point);
	}
	if (typeid(*point) == typeid(CommissionEmployee))
	{
		CommissionEmployee *p3 = dynamic_cast<CommissionEmployee*>(point);
	}
	if (typeid(*point) == typeid(BasePlusCommissionEmployee*))
	{
		BasePlusCommissionEmployee *p4 = dynamic_cast<BasePlusCommissionEmployee*>(point);
	}

}

void Add()
{
	system("CLS");
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
		::Emp.emplace_back(new SalariedEmployee());
		break;
	case 2:
		::Emp.emplace_back(new HourlyEmployee());
		break;
	case 3:
		::Emp.emplace_back(new CommissionEmployee());
		break;
	case 4:
		::Emp.emplace_back(new BasePlusCommissionEmployee());
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

void Show()
{

	//auto iter = Emp.begin();
	system("CLS");
	for (int i = 0 ; i < size(Emp) ; i++)
	{
		fun(Emp[i]);//强制类型转换
		Emp[i] ->Show();
		cout << endl;
	}
	cout << "按任意键返回主菜单" << endl;
	getch();
	Menu();
}

void FindID()
{
	system("CLS");
	int id;
	cout << "输入查询的ID" << endl;
	cin >> id;
	for (int i = 0; i < size(Emp); i++)
	{
		if(Emp[i]->EmployeeID == id)
		{
			Emp[i]->Show();
			cout << endl;
			break;
		}
	}
	cout << "按任意键返回主菜单" << endl;
	getch();
	Menu();
}

void FindName()
{
	system("CLS");
	string name;
	cout << "输入查询的姓名" << endl;
	cin >> name;
	for (int i = 0; i < size(Emp); i++)
	{
		if (Emp[i]->EmployeeName == name)
		{
			Emp[i]->Show();
			cout << endl;
			break;
		}
	}
	cout << "按任意键返回主菜单" << endl;
	getch();
	Menu();
}

void ShowSE()
{
	system("CLS");
	for (int i = 0; i < size(Emp); i++)
	{
		if (typeid(*Emp[i]) == typeid(SalariedEmployee))
		{
			Emp[i]->Show();
		}
	}
	cout << "按任意键返回主菜单" << endl;
	getch();
	Menu();
}

void ShowHE()
{
	system("CLS");
	for (int i = 0; i < size(Emp); i++)
	{
		if (typeid(*Emp[i]) == typeid(HourlyEmployee))
		{
			Emp[i]->Show();
		}
	}
	cout << "按任意键返回主菜单" << endl;
	getch();
	Menu();
}

void ShowCE()
{
	system("CLS");
	for (int i = 0; i < size(Emp); i++)
	{
		if (typeid(*Emp[i]) == typeid(CommissionEmployee))
		{
			Emp[i]->Show();
		}
	}
	cout << "按任意键返回主菜单" << endl;
	getch();
	Menu();
}

void ShowBE()
{
	system("CLS");
	for (int i = 0; i < size(Emp); i++)
	{
		if (typeid(*Emp[i]) == typeid(BasePlusCommissionEmployee))
		{
			Emp[i]->Show();
		}
	}
	cout << "按任意键返回主菜单" << endl;
	getch();
	Menu();
}


//void AddEmployee()
//{
//	int select;
//	char name;
//	int id;
//	cout << "请输入添加员工的类型" << endl;
//	cout << "1.添加周薪雇员" << endl;
//	cout << "2.添加时薪雇员" << endl;
//	cout << "3.添加佣金雇员" << endl;
//	cout << "4.添加带底薪佣金雇员" << endl;
//	cin >> select;
//	switch (select)
//	{
//	case 1:
//		::SE.emplace_back(SalariedEmployee());
//		break;
//	case 2:
//		::HE.emplace_back(HourlyEmployee());
//		break;
//	case 3:
//		::CE.emplace_back(CommissionEmployee());
//		break;
//	case 4:
//		::BE.emplace_back(BasePlusCommissionEmployee());
//		break;
//	default:
//		cout << "选择错误，重新选择" << endl;
//		Menu();
//		break;
//	}
//	cout << "按任意键返回主菜单" << endl;
//	getch();
//	Menu();
//}
//
//void ShowEmployee()
//{
//	vector<SalariedEmployee>::iterator iter = SE.begin();
//	int i = 1;
//	for (iter; iter != SE.end(); iter++)
//	{
//		cout << "第" << i << "位周薪雇员信息:" << endl;
//		iter->SalariedEmployee::Show();
//		i++;
//		cout << endl;
//	}
//	cout << endl;
//	i = 1;
//	vector<HourlyEmployee>::iterator iter1 = HE.begin();
//	for (iter1; iter1 != HE.end(); iter1++)
//	{
//		cout << "第" << i << "位时薪雇员信息:" << endl;
//		iter1->HourlyEmployee::Show();
//		i++;
//		cout << endl;
//	}
//	cout << endl;
//	i = 1;
//	vector<CommissionEmployee>::iterator iter2 = CE.begin();
//	for (iter2; iter2 != CE.end(); iter2++)
//	{
//		cout << "第" << i << "位佣金雇员信息:" << endl;
//		iter2->Show();
//		i++;
//		cout << endl;
//	}
//	cout << endl;
//	i = 1;
//	vector<BasePlusCommissionEmployee>::iterator iter3 = BE.begin();
//	for (iter3; iter3 != BE.end(); iter3++)
//	{
//		cout << "第" << i << "位带底薪佣金雇员信息:" << endl;
//		iter3->Show();
//		i++;
//		cout << endl;
//	}
//	cout << "按任意键返回主菜单" << endl;
//	getch();
//	Menu();
//}
void Delete()
{
	for (int i = 0; i < size(Emp); i++)
	{
		delete Emp[i];
	}
	Emp.resize(0);
	cout << "所有员工信息已删除" << endl;
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
	cout << "3.显示所有周薪雇员信息" << endl;
	cout << "4.显示所有时薪雇员信息" << endl;
	cout << "5.显示所有佣金雇员信息" << endl;
	cout << "6.显示所有带底薪佣金雇员信息" << endl;
	cout << "7.删除所有员工信息" << endl;
	cout << "8.根据ID查询雇员" << endl;
	cout << "9.根据姓名查询雇员" << endl;
	cout << "10.退出" << endl;
	cin >> select;
	switch (select)
	{
	case 1:
		//AddEmployee();
		Add();
		break;
	case 2:
		//ShowEmployee();
		Show();
		break;
	case 3:
		ShowSE();
		break;
	case 4:
		ShowHE();
		break;
	case 5:
		ShowCE();
		break;
	case 6:
		ShowBE();
		break;
	case 7:
		Delete();
		break;
	case 8:
		FindID();
		break;
	case 9:
		FindName();
		break;
	case 10:
		exit(0);
		break;
	default :
		cout << "选择错误，重新选择" << endl;
		Menu();
		break;
	}
}

