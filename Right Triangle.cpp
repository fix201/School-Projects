//Olufisayo Joseph Ayodele
//A8-1
/*A program that Draws a right triangle using 3 lines,
Returns the object number corresponding to the 1st line created,
Computes the hypotnuse of the right triangle and return it to the main function,
Displays the height, the base and the the hypotnuse of the right traingle on the graphics window*/

#include <iostream>
#include <cmath>
#include "graph1.h"

using namespace std;

//Add Function Prototypes Here

int drawRightTriangle(int, int, int, int);
double computeHypotnuse(int, int);
void displayResults(int, int, double);

int main()
{
	//Variable Declaration/Initialzation
	int x1 = 0;
	int y1 = 0;
	int height = 0;
	int base = 0;
	double hypotnuse = 0.0;

	//Display graphics window
	displayGraphics();

	//Prompt for vertex of right triangle
	cout << "Enter vertex of right triangle: ";
	cin >> x1 >> y1;	//enter x1 and y1

						//Prompt for the height/base of right triangle
	cout << "Enter height: ";
	cin >> height;

	cout << "Enter base: ";
	cin >> base;

	//Display the right triangle
	drawRightTriangle(x1, y1, height, base); //call drawRightTriangle 

											 //Compute hypotnuse
	hypotnuse = computeHypotnuse(height, base); //call computeHypotnuse

												//Display results
	displayResults(height, base, hypotnuse);	//call displayResults

	return 0;
}


int drawRightTriangle(int x1_v, int y1_v, int height_v, int base_v)
{
	int obj_no = 0;

	//Draw the first line between (x1_v,y1_v) and (x1_v,y1_v+height_v)
	obj_no = drawLine(x1_v, y1_v, x1_v, y1_v + height_v, 1);

	//Draw the 2nd line between (x1_v,y1_v+height_v)and (x1_v-base_v,y1_v+height_v)
	drawLine(x1_v, y1_v + height_v, x1_v - base_v, y1_v + height_v, 1);

	//Dare the 3rd line between (x1_v -base_v,y1_v +height_v) and (x1_v,y1_v)
	drawLine(x1_v - base_v, y1_v + height_v, x1_v, y1_v, 1);

	return (obj_no);   	// return obj_no
}

double computeHypotnuse(int leg1, int leg2)
{
	double h = 0;

	//Compute hypotnuse by using the square root of (leg12+ leg22)
	h = sqrt(pow(leg1, 2.0) + pow(leg2, 2.0));

	return(h);
}

void displayResults(int ht, int b, double h)
{
	//Display data
	gout << setPos(200, 400) << "Height of Right Triangle is: " << ht << endg;
	gout << setPos(200, 415) << "Base of Right Triangle is: " << b << endg;
	gout << setPos(200, 430) << "Hypotnuse of Right Triangle is: " << h << endg;
}

