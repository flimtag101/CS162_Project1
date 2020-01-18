/*******************************************************************************
 ** Program Name:   project1.cpp
 ** Author:         Alexander Elliott
 ** Date:           01/12/2020
 ** Assignment:     Project 01
 ** Description:    This program prompts the user for a shopping list.
 ** Sources:    	https://docs.google.com/document/d/1aINx5KoX7kdLPCdtjsmHVA6
 **                 42ZgYubYUwL5-V2rHP0E/edit 
 **					https://docs.google.com/document/d/1qfyfxNGWSNaRkqKgHBOOCZe
 **                 cgBOi2GLP4jhHunLAu8o/edit
 **					https://docs.google.com/document/d/16ZgYE5WbtNLo0QKPnwu3CWm
 **                 4SIs3YPHLe7b1YZzeZHw/edit
 ** 				Note: Always cite all sources you may have used, such
 **                 as other students you may have had help from, web sites you
 **                 may have referenced, and so forth. If none, write None.
 *******************************************************************************/

#include <iostream> //Required if your program does any I/O
#include <cstring> //String occurences
#include "toolbox.h" //Includes custom 'toolbox.h' library

using namespace std; //Required for ANSI C++ 1998 standard.

int main()
{
	// declares variables used in program
	char item[25];
	char iterate = 'y';
	float cost = 0;
	double total = 0;
    bool check = true;

	// configures proper formatting
	cout.setf(ios::fixed,ios::floatfield);
	cout.setf(ios::showpoint);
	cout.precision(2);

	// issues a while loop until user is done entering items
	while (iterate != 'n')
	{	
		// prompts user for item x (toolbox.h function) 
		readString("Enter item: ", item, 25);

		// asks for price of item
		cout << "You entered: " << item << endl;
		cout << "Cost: ";
		cin >> cost;

		// updates total to cost of ALL items
		total = total + cost;
	
		// displays total
		cout << "You entered: " << item << endl;
		cout << " $" << cost << endl;
		cout << "Total: $" << total << endl;

		// loops until user enters y or n
		while (check == true)
		{
			// asks whether to quit
			cout << "Do you want to add another item? (y/n): " << endl;
			cin >> iterate;
	
			// checks input (for errors)
			if (iterate == 'y')
			{
				// continues outer nested loop
				check = false;
			}
			if (iterate == 'n')
			{
				// exits both loops
				check = false;
			}
			else
			{
				// displays error message and continues loop
				cout << "ERROR: please enter y or n" << endl;
			}						
		}
	}

	// prints total cost of list
	cout << "Total cost today: $" << total << endl;
	cout << "Thank you for shopping!" << endl;

	// ends program
	return 0;
}
