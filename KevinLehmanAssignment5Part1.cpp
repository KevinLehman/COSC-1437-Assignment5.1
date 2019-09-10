/*
Kevin Lehman  - 1463553
Tarrant County College - COSC 1437- Fall 2017
Assignment 1 - Week 5
*/

#include "stdafx.h"
#include <iostream>
#include <string.h>
using namespace std;

// Forward declaration
char promptForInput(char[]);

int main()
{
	char validCharArray[] = "123ABX";
	char input = '@';
	while (input != 'X')
	{
		cout << "Enter Selection: " << endl;
		cout << "1. Print Report" << endl;
		cout << "2. Email Report" << endl;
		cout << "3. Commit for Review" << endl;
		cout << "A. Change Division for Report" << endl;
		cout << "B. Change Reporting Quarter" << endl;
		cout << "X. Exit" << endl;

		input = promptForInput(validCharArray);


		cout << "Got " << input << " from user " << endl;

		// Would process menu selection here - NOT REQUIRED FOR ASSIGNMENT


	}
	return 0;
}

//*******************************************************************
// Manage the menu user selection. 
//*******************************************************************
char promptForInput(char validChars[])
{
	char menuSelection;
	cin >> menuSelection;

	if (isdigit(menuSelection))
	{
		return menuSelection;
	}
	else
	{
		if (menuSelection == 'A' || menuSelection == 'a')
		{
			return menuSelection = 'A';
		}
		else if (menuSelection == 'B' || menuSelection == 'b')
		{
			return menuSelection = 'B';
		}
		else if (menuSelection == 'X' || menuSelection == 'x')
		{
			return menuSelection = 'X';
		}
		else
		{
			cout << "Your entry is not vaild please try again:" << endl;
			main();
		}

	}
	// This is where you would do most of your work.
	// Be sure to allow both upper and lower case selections to be treated the same
}