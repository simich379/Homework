// homeworkTask7.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
using namespace std;
int main()
{
	cout << "Enter a  month " << endl;

	int day, month, year;
	cin >> month;
	if (month >= 1 || month <= 12)
	{

		switch (month)
		{
		case 1: cout << "January - 31 days" << endl; break;
		case 3:cout << "March - 31 days" << endl; break;
		case 5:cout << "May- 31 days" << endl; break;
		case 7:cout << "July - 31 days" << endl; break;
		case 8: cout << "August - 31 days" <<endl; break;
		case 10:cout << "October - 31 days" << endl; break;
		case 12: cout << "December - 31days" << endl; break;
			

		case 2:
			cout << "Febuary" << endl;
			cin >> year;
			if (year % 4 == 0 && year % 100 != 0 || year % 400 == 0)
			{
				cout << "The year is leap and have 29 days" << endl;
			}
			else
			{
				cout << "The days are 28 and it's not a leap year." << endl;
			}
			break;
		default: cout << "Input a valid data" << endl; break;
		}
	}
else
{
	cout << "Error.Try again" << endl;
}

		
	return 0;
}

