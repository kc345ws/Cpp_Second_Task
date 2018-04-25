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
	cout << "该带底薪佣金雇员姓名为" << endl;
	cout << BEname << endl;
	cout << "该带底薪佣金雇员ID为:" << endl;
	cout << BEid << endl;
	cout << "该带底薪佣金雇员总工资为:" << endl;
	cout << income << endl;
}