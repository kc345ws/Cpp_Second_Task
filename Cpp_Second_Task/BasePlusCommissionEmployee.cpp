#include<iostream>
#include"Employee.h"
using namespace std;

BasePlusCommissionEmployee::BasePlusCommissionEmployee()
{
	cout << "请输入该带底薪佣金雇员的销售量" << endl;
	cin >> goodsnumber;
	cout << "请输入商品价格:" << endl;
	cin >> price;
	income = laseincome + goodsnumber * price;
	cout << "该带底薪佣金雇员的总工资为:" << endl;
	cout << income << endl;
}

BasePlusCommissionEmployee::BasePlusCommissionEmployee(int num)
{
	goodsnumber = num;
}

void BasePlusCommissionEmployee::CalculateIncome()
{
	cout << "请输入商品价格:" << endl;
	cin >> price;
	income = laseincome + goodsnumber * price;
	cout << "该带底薪佣金雇员的总工资为:" << endl;
	cout << income << endl;
}

void BasePlusCommissionEmployee::Show()
{
	cout << "雇员姓名:" << endl;
	cout << BEname << endl;
	cout << "雇员ID:" << endl;
	cout << BEid << endl;
	cout << "销售量" << endl;
	cout << goodsnumber << endl;
	cout << "底薪:" << endl;
	cout << laseincome << endl;
	cout << "总工资:" << endl;
	cout << income << endl;
}