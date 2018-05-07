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

void fun(Employee *point) //ǿ������ת��
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
	cout << "���������Ա��������" << endl;
	cout << "1.�����н��Ա" << endl;
	cout << "2.���ʱн��Ա" << endl;
	cout << "3.���Ӷ���Ա" << endl;
	cout << "4.��Ӵ���нӶ���Ա" << endl;
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
		cout << "ѡ���������ѡ��" << endl;
		Menu();
		break;
	}
	cout << "��������������˵�" << endl;
	getch();
	Menu();
	
}

void Show()
{

	//auto iter = Emp.begin();
	system("CLS");
	for (int i = 0 ; i < size(Emp) ; i++)
	{
		fun(Emp[i]);//ǿ������ת��
		Emp[i] ->Show();
		cout << endl;
	}
	cout << "��������������˵�" << endl;
	getch();
	Menu();
}

void FindID()
{
	system("CLS");
	int id;
	cout << "�����ѯ��ID" << endl;
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
	cout << "��������������˵�" << endl;
	getch();
	Menu();
}

void FindName()
{
	system("CLS");
	string name;
	cout << "�����ѯ������" << endl;
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
	cout << "��������������˵�" << endl;
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
	cout << "��������������˵�" << endl;
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
	cout << "��������������˵�" << endl;
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
	cout << "��������������˵�" << endl;
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
	cout << "��������������˵�" << endl;
	getch();
	Menu();
}


//void AddEmployee()
//{
//	int select;
//	char name;
//	int id;
//	cout << "���������Ա��������" << endl;
//	cout << "1.�����н��Ա" << endl;
//	cout << "2.���ʱн��Ա" << endl;
//	cout << "3.���Ӷ���Ա" << endl;
//	cout << "4.��Ӵ���нӶ���Ա" << endl;
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
//		cout << "ѡ���������ѡ��" << endl;
//		Menu();
//		break;
//	}
//	cout << "��������������˵�" << endl;
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
//		cout << "��" << i << "λ��н��Ա��Ϣ:" << endl;
//		iter->SalariedEmployee::Show();
//		i++;
//		cout << endl;
//	}
//	cout << endl;
//	i = 1;
//	vector<HourlyEmployee>::iterator iter1 = HE.begin();
//	for (iter1; iter1 != HE.end(); iter1++)
//	{
//		cout << "��" << i << "λʱн��Ա��Ϣ:" << endl;
//		iter1->HourlyEmployee::Show();
//		i++;
//		cout << endl;
//	}
//	cout << endl;
//	i = 1;
//	vector<CommissionEmployee>::iterator iter2 = CE.begin();
//	for (iter2; iter2 != CE.end(); iter2++)
//	{
//		cout << "��" << i << "λӶ���Ա��Ϣ:" << endl;
//		iter2->Show();
//		i++;
//		cout << endl;
//	}
//	cout << endl;
//	i = 1;
//	vector<BasePlusCommissionEmployee>::iterator iter3 = BE.begin();
//	for (iter3; iter3 != BE.end(); iter3++)
//	{
//		cout << "��" << i << "λ����нӶ���Ա��Ϣ:" << endl;
//		iter3->Show();
//		i++;
//		cout << endl;
//	}
//	cout << "��������������˵�" << endl;
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
	cout << "����Ա����Ϣ��ɾ��" << endl;
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
	cout << "3.��ʾ������н��Ա��Ϣ" << endl;
	cout << "4.��ʾ����ʱн��Ա��Ϣ" << endl;
	cout << "5.��ʾ����Ӷ���Ա��Ϣ" << endl;
	cout << "6.��ʾ���д���нӶ���Ա��Ϣ" << endl;
	cout << "7.ɾ������Ա����Ϣ" << endl;
	cout << "8.����ID��ѯ��Ա" << endl;
	cout << "9.����������ѯ��Ա" << endl;
	cout << "10.�˳�" << endl;
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
		cout << "ѡ���������ѡ��" << endl;
		Menu();
		break;
	}
}

