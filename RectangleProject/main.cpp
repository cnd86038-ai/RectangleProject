#include <iostream>
using namespace std;

/* 
Function: getLengthWidth
Purpose: Prompt user for lenth and width of a rectangle and validate the input.
Preconditions: None
Postconditions:
- Lenth > 0
- Width > 0
- Valid values are returned through reference parameters
*/

void getLengthWidth(double& length, double& width)
{
	// Get and Validate Length

	do
	{
		cout << "Enter the length of the rectangle: ";
		cin >> length;
		if (length <= 0)
			cout << "Invalid input: Length must be greater than 0. Please try again." << endl;
	} while (length <= 0);

	// Get and Validate Width

	do
	{
		cout << "Enter the width of the rectangle: ";
		cin >> width;
		if (width <= 0)
			cout << "Invalid input: Width must be greater than 0. Please try again." << endl;
	} while (width <= 0);
}