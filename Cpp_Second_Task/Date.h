#pragma once
#ifndef DATE_H
#define DATE_H
using namespace std;

class Date
{
public:

	Date();

	void ShowBirthday();
	
	bool ChechBirthday();

protected:

	int year, month, day;

};

#endif