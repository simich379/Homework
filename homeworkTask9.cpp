// homeworkTask9.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
using namespace std;

int main()
{
	int n,count ;
	count = 0;
	cout << "Enter a number between 10 and 30000" << endl;
	cin >> n;
	
		
		while(n!=0)
		{
			count++;
			 n = n /10;

			
		}
		cout << "The number of digits are " << count  << endl;

	return 0;
}


