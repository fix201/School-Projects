//Oluufisayo Joseph Ayodele
//B8-1
//A program that Displays a menu to either draw a Box, draw a Solid Circle, or Draw a circle in a Box. 

#include <iostream>
#include <cmath>
#include "graph1.h"

using namespace std;

//Add Function Prototypes Here
int displayMenu(int);
int drawBox(int, int, int, int);
void drawSolidCircle(int, int, int);
void drawCircleInBox(int, int, int);


int main()
{

	//Variable Declaration/Initialization
	char repeat = 0;
	int choice = 0;
	int x1 = 0, y1 = 0;
	int width = 0, height = 0;
	int radius = 0;

	displayGraphics();
	//Run program as many times as desire
	do {
		//1. Display the menu, call displayMenu()
		choice = displayMenu(choice);

		//2. Process the choice
		switch (choice)
		{
		case 1:
			// call drawBox function to draw an open box
			drawBox(x1, y1, width, height);
			break;

		case 2:
			// Call drawSolidCircle to draw a Solid circle
			drawSolidCircle(radius, x1, y1);
			break;

		case 3:
			// Call drawCircleInBox to draw a circle in a box
			drawCircleInBox(radius, x1, y1);
			break;
		}

		//Ask users if they want to repeat program
		cout << "Do you want to repeat the program?"; cin >> repeat;

		//Clear the graphics
		clearGraphics();

		//Clear the console 
		system("cls");
	} while (repeat == 'y' || repeat == 'Y');

	return 0;
}

//Add functions here
int displayMenu(int choice)
{
	cout << "1. Draw Open Box" << endl
		<< "2. Draw Solid Circle" << endl
		<< "3. Draw Circle In a Box" << endl
		<< "4. Enter Choice: ";
	cin >> choice; cout << endl << endl;

	return choice;
}

int drawBox(int x1, int y1, int width, int height)
{
	cout << "Draw Open Box" << endl << endl;
	cout << "Enter Upper Left Point: "; cin >> x1 >> y1; cout << endl;
	cout << "Enter width/height: "; cin >> width >> height; cout << endl;

	int obj1 = drawLine(x1, y1, x1 + width, y1, 1);
	int obj2 = drawLine(x1 + width, y1, x1 + width, y1 + height, 1);
	int obj3 = drawLine(x1 + width, y1 + height, x1, y1 + height, 1);
	int obj4 = drawLine(x1, y1, x1, y1 + height, 1);

	return obj1;
}

void drawSolidCircle(int radius, int x1, int y1)
{
	cout << "Process Solid Circle" << endl << endl;
	cout << "Enter Radius of Solid Circle: "; cin >> radius; cout << endl;
	cout << "Enter Center of Solid Circle: "; cin >> x1 >> y1; cout << endl;
	for (int i = 1; i < radius; i++)
		drawCircle(i, x1, y1);


}

void drawCircleInBox(int radius, int x1, int y1)
{
	cout << "Process Circle in Box" << endl << endl;
	cout << "Enter Center Point: "; cin >> x1 >> y1; cout << endl;
	cout << "Enter Radius: "; cin >> radius; cout << endl;

	drawCircle(radius, x1, y1);

	drawLine(x1 - radius, y1 - radius, x1 + radius, y1 - radius, 1);
	drawLine(x1 + radius, y1 - radius, x1 + radius, y1 + radius, 1);
	drawLine(x1 + radius, y1 + radius, x1 - radius, y1 + radius, 1);
	drawLine(x1 - radius, y1 + radius, x1 - radius, y1 - radius, 1);
}

