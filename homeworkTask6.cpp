// homeworkTask6.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
using namespace std;
int main()
{
	int i , n;
	cin >>n;
	i = 1;
	int facturiel = 1;

	while (i <= n)
	{
		facturiel *= i;
		i++;
	}
	cout << facturiel << endl;
	return 0;
}

