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

CommissionEmployee::CommissionEmployee(int num)
{
	goodsnumber = num;
}

//void CommissionEmployee::CalculateIncome()
//{
//	cout << "请输入商品价格" << endl;
//	cin >> price;
//	income = goodsnumber * price;
//	cout << "该佣金雇员的薪资的为:" << endl;
//	cout << income << endl;
//}

void CommissionEmployee::Show()
{
	cout << "雇员姓名:" << endl;
	cout << CEname << endl;
	cout << "雇员ID:" << endl;
	cout << CEid << endl;
	cout << "销售量" << endl;
	cout << goodsnumber << endl;
	cout << "总工资:" << endl;
	cout << income << endl;
}