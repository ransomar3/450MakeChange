// INFO450MakeChange.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
using namespace std;


int main()
{
	// int variables to be included:
	int cost, item;
	int paid, remainder;
	int dollar, quarter, dime, nickel;

	cout << "Please enter the cost of the item:\n " << endl;
	cin >> cost;
	cout << "You entered: " << cost << endl;
	cout << "Please enter the amount you are paying:\n " << endl;
	cin >> paid;
	cout << "You entered: " << paid << endl;

	while (paid <= item)
	{
		cout << "That's not enough money! You need " << remainder << " more." << endl;
		cout << "Please enter in the additional amount:\n " << endl;
	
		if (paid >= item)
		{
			cout << "Thank you. Your change is:\n " << " " << endl;
		}	
		cin.ignore();

	}

    return 0;
}

