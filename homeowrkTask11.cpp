// homeowrkTask11.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
using namespace std;

int main()
{
	int twoDigitNumber;
	int i = 0;
	int sum = 0;
	
	
		do
		{
			cout << "Enter a number" << endl;
	
		cin >> twoDigitNumber;
		
			
			if (twoDigitNumber >=10 && twoDigitNumber<=99)
			{
				i++;
				sum = sum + twoDigitNumber;
				
			}
			else
			{
				cout << "Input a valid data" << endl;
			}
		}
		while (i <= 5 && sum < 234);
		cout << "The numbers are " << i << "  and the sum is " << sum << endl;
	
	
	return 0;
}

