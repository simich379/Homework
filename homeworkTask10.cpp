

#include "pch.h"
#include <iostream>
using namespace std;
int main()
{
	int numbers ;
	int i = 0 ; 
	int sum = 0;
	cout << "Enter numbers" <<endl;
	do
    {
		cin >> numbers;
		if (numbers > 1)
		{
			
			i++;
			sum = sum + i;
			
		}
		else
		{
			cout << "Error" << endl;
			
		}
		
	} while (numbers >1);
		
		cout << "The count of numbers is " << i << ", the sum is " << sum << "  and the average is " << sum / i << endl;

		
	return 0;

}

