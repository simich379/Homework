

#include "pch.h"
#include <iostream>
using namespace std;

int main()
{
	int n, m;
	int quantityOfNums = 0;
	int sum = 0;

	cin >> n >> m;

	bool prime = true;
	for (int i = n; i <= m; i++)
	{
	
		for (int j = 1; j <= i; j++)
		{
			if (i % j == 0)
				sum = sum + j;
		}
		for (int k = i + 1; k < sum; k++)
		{
			if (sum % k == 0)
				prime = false;
		}
		if (prime)
		{
			quantityOfNums++;
			cout << i << " with sum of factors: " << sum << endl;
		}
	}
	
	cout << "The quantity of numbers with prime sums of factors in the interval [" << n << ',' << m << "] is: " << quantityOfNums;
	return 0;
}


