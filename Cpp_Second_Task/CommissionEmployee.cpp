#include<iostream>
#include"Employee.h"
using namespace std;

CommissionEmployee::CommissionEmployee()
{
	cout << "请输入该佣金雇员的销售量" << endl;
	cin >> goodsnumber;
	if (goodsnumber < 0)
	{
		cout << "输入的销售量小于0请重新输入" << endl;
		cin >> goodsnumber;
	}
	cout << "请输入商品价格" << endl;
	cin >> price;
	if (price < 0)
	{
		cout << "输入的价格小于0请重新输入" << endl;
		cin >> price;
	}
	income = goodsnumber * price;
	//cout << "该佣金雇员的薪资的为:" << endl;
	//cout << income << endl;
}



void CommissionEmployee::Show()
{
	cout << "雇员姓名:" << endl;
	cout << EmployeeName << endl;
	cout << "雇员ID:" << endl;
	cout << EmployeeID << endl;
	Birthday.ShowBirthday();
	cout << "销售量" << endl;
	cout << goodsnumber << endl;
	cout << "总工资:" << endl;
	cout << income << endl;
	if (Birthday.ChechBirthday())
	{
		cout << "生日快乐！奖励100元基本工资提升10%" << endl;
		income = 100 + 1.1*income;
		cout << "新的工资:" << endl;
		cout << income << endl;
	}
}