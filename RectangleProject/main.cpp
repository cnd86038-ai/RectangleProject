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

/*
Funcation: calcPerimeter
Purpose: Calculate and return perimiter of rectangle.
Preconditions: Lenth and Width validation (>0)
Postconditions: Returns Perimeter
*/
double calcPerimeter(double length, double width)
{
	return 2 * (length + width);
}

/* 
Function: calcArea
Purpose: Calculate and return area of rectangle.
Preconditions: Length and WIdth validation (>0)
Postconditions: Returns Area
*/
double calcArea(double length, double width)
{
	return length * width;
}

/*
Function: displayProperties
Purpose:Displays the Properties of Rectangle
Preconditions: Valid perimeter and area values
Postconditions: Results are displayed
*/

void displayProperties(double length, double width, double perimeter, double area)
{
	cout << "Rectangle Properties:" << endl;
	cout << "Perimeter: " << perimeter << endl;
	cout << "Area: " << area << endl;
}

int main()
{
	double length, width;
	double perimeter, area;
	char choice;

	do
		{
		//Get valid input for length and width
		getLengthWidth(length, width);

		//Calculate perimeter and area
		perimeter = calcPerimeter(length, width);
		area = calcArea(length, width);

		//Display the results
		displayProperties(perimeter, area);

		// Ask user if they want to calculate properties for another rectangle
		cout << "Do you want to calculate properties for another rectangle? (y/n): ";
		cin >> choice;
	} while (choice == 'y' || choice == 'Y');

	cout << "Thank you for using the Rectangle Properties Calculator. Goodbye!" << endl;

	return 0;
}