#include<iostream>
#include"Employee.h"
using namespace std;

BasePlusCommissionEmployee::BasePlusCommissionEmployee()
{
	/*cout << "请输入该带底薪佣金雇员的销售量" << endl;
	cin >> goodsnumber;*/
	cout << "请输入该员工的底薪:" << endl;
	cin >> laseincome;
	income = laseincome + goodsnumber * price;
	cout << "该带底薪佣金雇员的总工资为:" << endl;
	cout << income << endl;

}


void BasePlusCommissionEmployee::Show()
{
	cout << "雇员类型:带底薪的佣金雇员" << endl;
	cout << "雇员姓名:" << endl;
	cout << EmployeeName << endl;
	cout << "雇员ID:" << endl;
	cout << EmployeeID << endl;
	Birthday.ShowBirthday();
	cout << "销售量" << endl;
	cout << goodsnumber << endl;
	cout << "底薪:" << endl;
	cout << laseincome << endl;
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