//Olufiasyo Joseph Ayodele
//B4-1
//A program that  processes information about lines

#include <iostream>
#include <cmath>
#include "graph1.h"

using namespace std;

int main()
{
	//Variable Declaration/Initialization
	int x1, y1;		// declare x- and y-coordinates of endpoint 1 of the line
	int x2, y2;		// declare x- and y-coordinate of endpoint 2 of the line
	double l;			// declare the length of the line
	double x3, y3;	// declare x- and y-coordinate of the midpoint of the line
	int c1, c2;		// center of the circle
	int r;			// radius for the circle

	//Display graphics window
	displayGraphics();

	//Prompt the user for inputting the x/y coorindates for endpoint 1
	cout << "Enter the x/y coordinates for Point 1:  ";
	cin >> x1 >> y1;

	//Prompt the user for inputting the x/y coorindates for endpoint 2
	cout << "Enter the x/y coordinates for Point 2:  ";
	cin >> x2 >> y2;

	//Promt the user for inputting center for circle
	cout << "Enter center for circle:  ";
	cin >> c1 >> c2;

	//Promt the user for inputting radius for circle
	cout << "Enter radius for circle:  ";
	cin >> r;

	//prompt the user for inputting radius for circle

	//Draw the line
	drawLine(x1, y1, x2, y2, 1);

	//Compute the x coorindate of the midpoint
	x3 = (x1 + x2) / 2;
	//Compute the y coorindate of the midpoint
	y3 = (y1 + y2) / 2;

	//Compute the length of the line
	l = sqrt(pow(x1 - x2, 2.0) + pow(y1 - y2, 2.0));

	//Draw a circle at endpoint 1
	drawCircle(10, x1, y1);
	//Draw a circle at endpoint 2
	drawCircle(10, x2, y2);

	//Display a circle at midpoint
	drawCircle(10, x3, y3);

	//Draw a horizontal line separating the line drew above from the remaining section
	drawLine(0, 350, 639, 350, 1);

	//Draw a circle
	drawCircle(r, c1, c2);

	//Display the length of the line
	cout << "Line Length is: " << l << endl;
	//Disply the x/y coorindates of the midpoint
	cout << "Midpoint of line is: (" << (int)x3 << "," << (int)y3 << ")" << endl;
	// Display x/y coorindates for endpoint 1
	cout << "End Point 1 is: (" << x1 << "," << y1 << ")" << endl;
	// Display x/y coorindates for endpoint 2
	cout << "End Point 2 is: (" << x2 << "," << y2 << ")" << endl;

	return 0;
}
