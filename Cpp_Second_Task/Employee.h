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


class SalariedEmployee: public Employee//���¹���
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

	void CalculateIncome();//���㹤��

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

	void CalculateIncome();//���㹤��

	void Show();

private:
	float income;
	/*int goodsnumber;*///��Ʒ����
	//char *goods = new char[goodsnumber];//ÿ����Ʒ����
	/*float *goodsprice = new float[goodsnumber];*///ÿ����Ʒ��Ǯ
	//float price;
	//int *goodsales = new int[goodsnumber];//ÿ����Ʒ������
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

	void CalculateIncome();//���㹤��

	void Show();

private:
	float income;

	int goodsnumber = CommissionEmployee::goodsnumber;//��Ʒ����

	/*char *goods = new char[goodsnumber];*///ÿ����Ʒ����

	//float *goodsprice = new float[goodsnumber];//ÿ����Ʒ��Ǯ

	//int *goodsales = new int[goodsnumber];//ÿ����Ʒ������

	float price = CommissionEmployee::price;

	int laseincome ;//��н

	string BEname = Employee::EmployeeName;

	int BEid = Employee::EmployeeID;

};
#endif