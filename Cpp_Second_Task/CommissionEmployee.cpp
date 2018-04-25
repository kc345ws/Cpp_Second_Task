#include<iostream>
#include"Employee.h"
using namespace std;

CommissionEmployee::CommissionEmployee()
{
	cout << "请输入该佣金雇员的销售量" << endl;
	cin >> goodsnumber;
	cout << "请输入商品价格" << endl;
	cin >> price;
	income = goodsnumber * price;
	cout << "该佣金雇员的薪资的为:" << endl;
	cout << income << endl;
}

CommissionEmployee::CommissionEmployee(int num)
{
	goodsnumber = num;
}

void CommissionEmployee::CalculateIncome()
{
	cout << "请输入商品价格" << endl;
	cin >> price;
	income = goodsnumber * price;
	cout << "该佣金雇员的薪资的为:" << endl;
	cout << income << endl;
}

void CommissionEmployee::Show()
{
	cout << "姓名:" << endl;
	cout << CEname << endl;
	cout << "ID:" << endl;
	cout << CEid << endl;
	cout << "总工资:" << endl;
	cout << income << endl;
}