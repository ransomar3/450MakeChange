// INFO450MakeChange.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
using namespace std;


int main()
{
	// double and int variables to be included:
	double cost, item, paid, paid2, remainder, more;
	int dollar = 1 , quarter = 0.25, dime = 0.10, nickel = 0.05;
	int y;
	double x;
	bool resume = true;

	cout << "Please enter the cost of the item:\n " << endl;
	cin >> cost;
	cout << "You entered: " << cost << endl;
	cout << "Please enter the amount you are paying:\n " << endl;
	cin >> paid;
	cout << "You entered: " << paid << endl;

	while (paid < item)
	{
		cout << "That's not enough money! You need " << more << " more." << endl;
		cout << "Please enter in the additional amount:\n " << endl;
		cin >> paid2;
		paid = paid + paid2;
		
	
		if (paid > item)
		{
			cout << "Thank you. Your change is:\n " << remainder << endl;
			cout << "# Dollars: " << dollar << endl;
			cout << "# Quarters: " << quarter << endl;
			cout << "# Dimes: " << dime << endl;
			cout << "# Nickels: " << nickel << endl;


		}	
		
		cout << "Would you like to enter another item? Press '1' to continue or '0' to stop. " << endl;

	}
	system("Pause");
    return 0;
}

