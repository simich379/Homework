// homeworkTask12.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
using namespace std;

int main()
{
	int wis;
	bool day = true, night = false;

	cout << "Enter the quantity of depth" << endl;
	cin >> wis;

	while (wis !=0) 
	{
		wis--;
		day*=2;
	}
	cout << "After " << day - wis << " the frog is on the top the lake" << endl;


  
	return 0;
}

