// homeoworkTask4.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
using namespace std;

int main()
{
	cout << "Menu :" << endl;
	cout << "Input number 1 or 2"<<endl;
	int number;
	
	int  sum = 0;
	int currentSum ;
	cin >> number;

	if (number == 1 || number== 2)
	{
		if (number == 1)
		{
			cout << "Check your account balance" << endl;
			cout << "Input a sum" << endl;
			cin >> sum;

			currentSum = sum + 5;
			cout << currentSum << endl;
		}

		else
		{
			cout << "Loading a voucher with 10 leva" << endl;
			cout << "Input a number with three digits";
			int digit;
			cin >> digit;


			if (digit == 555)
			{
				cin >> currentSum;

				currentSum += 10;

				cout << currentSum << endl;

			}
			else
			{
				cout << "Error.Input a number that consist of number 5 in the digit" << endl;
			}
		}

		cout << "Input number 1 or 2";

	
		return 0;



	
}