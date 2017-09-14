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
	double cost, item, paid, paid2, remainder, more;
	int dollar = 1 , quarter = 0.25, dime = 0.10, nickel = 0.05;
	double x;
	int y;
	bool resume = true;
	char answer;

	cout << "Please enter the cost of the item:\n " << endl;
	cin >> cost;
	cout << "You entered: " << cost << endl;
	cout << "Please enter the amount you are paying:\n " << endl;
	cin >> paid;
	cout << "You entered: " << paid << endl;

	while (paid < item)
	{
		// while loop asking for more amounts if insufficient funds are provided for the cost of the item.
		cout << "That's not enough money! You need " << more << " more." << endl;
		cout << "Please enter in the additional amount:\n " << endl;
		cin >> paid2;
		more = cost - paid;
		paid = paid + paid2;
		
	
		if (paid > item)
		{
			cout << "Thank you. Your change is:\n " << remainder << endl;
			cout << "# Dollars: " << dollar << endl;
			cout << "# Quarters: " << quarter << endl;
			cout << "# Dimes: " << dime << endl;
			cout << "# Nickels: " << nickel << endl;

			// cout << "Your change is: " << remainder << endl;
			// cin >> x;
			// y=???	for dollars
			// y= x*100; cout: y/25		for quarters
			// y= y%25;  cout: y/10		for dimes
			// y= y%10;  cout: y/5		for nickels

		}	
		cout << "Would you like to enter another item? Press '1' to continue or '0' to exit. " << endl;
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

