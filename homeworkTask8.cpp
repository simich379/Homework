// homeworkTask8.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
using namespace std;

int main()
{
	cout << "Enter a number between 10 and 30 000" << endl;
	int number = 0;
	cin >> number ;
	int n, digit, number_new = 0;
	n = number;
	do
	{
		digit = number % 10;
		number_new= (number_new * 10) + digit;
		number = number / 10;
	} 
	while (number != 0);
	cout << " The new number is: " << number_new << endl;
	if (n == number_new)
	{
		cout << "The number is a Palindrom" << endl;
	}
				
			
			else
			{
				cout << "The number is not a Palindrom" <<endl;
				

			}
			
	return 0;

}

