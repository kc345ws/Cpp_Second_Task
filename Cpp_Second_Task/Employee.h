#pragma once
#ifndef EMPLOYEE_H
#define EMPLOYEE_H
#include<string>
#include"Date.h"
using namespace std;

class Employee
{
public:

	Employee();

	virtual void Show();


protected:

	string EmployeeName;

	int EmployeeID;

	float income;


};


class SalariedEmployee: public Employee
{
public:

	SalariedEmployee();

	void Show();


private:

	Date Birthday;


};


class HourlyEmployee : public Employee
{
public:
	
	HourlyEmployee();

	void Show();

private:

	int Worktime;

	float HourlyIncome;

	Date Birthday;

};


class CommissionEmployee : public Employee
{
public:

	CommissionEmployee();

	void Show();

private:

	

protected:

	float price;

	int goodsnumber;

	Date Birthday;

};


class BasePlusCommissionEmployee : public CommissionEmployee
{
public:

	BasePlusCommissionEmployee();

	void Show();

private:

	int laseincome ;//µ×Ð½


};
#endif