// INFO450MakeChange.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
using namespace std;


int main()
{
	// double and int variables to be included:
	// bool included at the end of program to ask user if they want to continue the loop or not.
	// doubles declared for accuracy in change.
	double cost, paid, paid2, change = 1;
	double dollar = 1.00 , quarter = 0.25, dime = 0.10, nickel = 0.05;
	bool resume = true;
	char answer;

	cout << "Please enter the cost of the item:\n " << endl;
	cin >> cost;
	cout << "You entered: " << cost << endl;
	cout << "Please enter the amount you are paying:\n " << endl;
	cin >> paid;
	cout << "You entered: " << paid << endl;

	while (paid > cost)
	{
		// while loop giving you the amount of change you're receiving if the sufficient funds are provided. 
		cout << "Thank you. Your change is:\n " << change << endl;
		cout << "\n# Dollars: " << dollar << endl;
		cout << "\n# Quarters: " << quarter << endl;
		cout << "\n# Dimes: " << dime << endl;
		cout << "\n# Nickels: " << nickel << endl;
		dollar = change / 100;
		quarter = change / 0.25;
		dime = change / 0.10;
		nickel = change / 0.05;

	}

	while (paid < cost)
	{
		// while loop asking for more amounts if insufficient funds are provided for the cost of the item.
		cout << "That's not enough money! You need " << cost-paid << " more." << endl;
		cout << "Please enter in the additional amount:\n " << endl;
		cin >> paid2;
		paid = paid + paid2;
		
	
		cout << "Would you like to enter another item? Press '1' to continue or '0' to exit. " << endl;
		cin >> answer;
		if (answer = '1')
		{
			continue;	
		}
		else if (answer = '0')
		{
			resume = false;
		}
		cin.ignore();
	}
	system("Pause");
    return 0;
}

