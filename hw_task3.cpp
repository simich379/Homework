﻿// hw_task3.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	int num1;
	cout << "Input number: ";
	cin >> num1;

	const int number = num1;
	int num2 = num1;
	int numberOfDigits = 1;
	int sumOfDigitsPow = 0;
	while (num2 > 10)
	{
		++numberOfDigits;
		num2 /= 10;
	}
	for (int i = 0; i < numberOfDigits; ++i)
	{
		sumOfDigitsPow += pow((num1 % 10), numberOfDigits);
		num1 /= 10;
	}

	if (sumOfDigitsPow == number)
		cout << number << " is a narcisistic number";
	else cout << number << " is not a narcisistic number";
  }
 return 0;
}
