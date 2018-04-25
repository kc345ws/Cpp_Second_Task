#pragma once
#ifndef EMPLOYEE_H
#define EMPLOYEE_H
#include<string>
using namespace std;

class Employee
{
public:

	Employee();

	Employee(char name , int id);

	void PrintfEmployee();

	/*void CalculateIncome();*/

protected:

	string EmployeeName;

	int EmployeeID;
};


class SalariedEmployee: public Employee//周新工人
{
public:

	SalariedEmployee();

	SalariedEmployee(float im);

	/*void CalculateIncome();*/
	void PrintfIncome();

	void Show();


private:

	float income;
	string SEname = Employee::EmployeeName;
	int SEid = Employee::EmployeeID;

};


class HourlyEmployee : public Employee
{
public:
	
	HourlyEmployee();

	HourlyEmployee(int time,float hi);

	void CalculateIncome();//计算工资

	void PrintfIncome();

	void Show();
private:
	int Worktime;

	float income;

	float HourlyIncome;

	string HEname = Employee::EmployeeName;

	int HEid = Employee::EmployeeID;
};


class CommissionEmployee : public Employee
{
public:

	CommissionEmployee();

	CommissionEmployee(int num);

	void CalculateIncome();//计算工资

	void Show();

private:
	float income;
	/*int goodsnumber;*///商品种类
	//char *goods = new char[goodsnumber];//每种商品名字
	/*float *goodsprice = new float[goodsnumber];*///每种商品价钱
	//float price;
	//int *goodsales = new int[goodsnumber];//每种商品销售量
	string CEname = Employee::EmployeeName;
	int CEid = Employee::EmployeeID;
	//int salesnumber = 0;
protected:
	float price;
	int goodsnumber;



};


class BasePlusCommissionEmployee : public CommissionEmployee
{
public:

	BasePlusCommissionEmployee(int num);

	BasePlusCommissionEmployee();

	void CalculateIncome();//计算工资

	void Show();

private:
	float income;

	int goodsnumber = CommissionEmployee::goodsnumber;//商品数量

	/*char *goods = new char[goodsnumber];*///每种商品名字

	//float *goodsprice = new float[goodsnumber];//每种商品价钱

	//int *goodsales = new int[goodsnumber];//每种商品销售量

	float price = CommissionEmployee::price;

	int laseincome ;//底薪

	string BEname = Employee::EmployeeName;

	int BEid = Employee::EmployeeID;

};
#endif