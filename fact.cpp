// fact.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
using namespace std;

int main()
{
	

	int n;
	cin >> n;
	int fact = 1;

	int i = 2;
	while (i <= n)
	{
		fact *= i;
		i++;
	}
	cout << n << "! = " << fact << endl;

	return 0;
}


