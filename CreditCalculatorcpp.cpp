

#include "pch.h"
#include <iostream>
#include<cmath>
using namespace std;
int main()
{
	double valueForLoan = 0;
	int numberOfMonths = 0;
	float interestRate = 0;

	cout << "Input values:" << endl;
	cin >> valueForLoan >> numberOfMonths >> interestRate;

	double totalAmount;
	
	totalAmount = valueForLoan * (pow((1 + interestRate / 100), numberOfMonths));

	double monthlyPayment;
	double interestRateForAYear;
	interestRateForAYear = interestRate / (100 * 12);
	double q = 1 + (interestRate / 100);
	
	monthlyPayment = (valueForLoan * (pow(q, numberOfMonths))* (q - 1)) / pow(q, numberOfMonths) - 1;
	cout << interestRateForAYear << " " << q << " " << monthlyPayment << " " << totalAmount << endl;
	return 0;

}

