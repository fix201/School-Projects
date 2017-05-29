#include <iostream>
#include <cstdlib>
#include "graph1.h"

using namespace std;

void getCoords(int&, int&);
void getWidthAndHeight(int&, int&);
void getRadius(int&);

int main()
{
	//Variable Declaration
	int x = 0;
	int y = 0;
	int width = 0;
	int height = 0;
	int radius = 0;
	char repeat = 'y';

	//Display graphics
	displayGraphics();

	//Repeat program as many times as desired
	do
	{
		//Get coords for rectangle
		cout << "Enter coordinates for rectangle" << endl;
		getCoords(x, y);

		//Get width/height of rectangle
		cout << "\nEnter width/height for rectangle" << endl;
		getWidthAndHeight(width, height);

		//Draw the rectangle
		drawRect(x, y, width, height);

		//Get coords for circle
		cout << "\n\nEnter coords for circle" << endl;
		getCoords(x, y);

		//Get radius
		cout << "\nEnter radius for circle " << endl;
		getRadius(radius);

		//Draw the circle
		drawCircle(radius, x, y);

		//Prompt use to repeat
		cout << "Repeat? (y/n) ";
		cin >> repeat;

		//Clear the graphics
		clearGraphics();

	} while ((repeat == 'y') || (repeat == 'Y'));

	return 0;
}

//Get the coords
void getCoords(int& x, int& y)
{
	do
	{
		cout << "Enter x followed by y coordinate: ";
		cin >> x >> y;

		if ((x < 0) || (x >= 640))
			cout << "Invalid x coord - Please re-enter" << endl;

		if ((y < 0) || (y >= 480))
			cout << "Invalid - y coord - Please re-enter" << endl;

	} while ((x < 0) || (x >= 640) || (y < 0) || (y >= 480));
}

//Get width/height
void getWidthAndHeight(int& width, int& height)
{
	do
	{
		cout << "Enter width followed by height: ";
		cin >> width >> height;

		if ((width < 0) || (width >= 640))
			cout << "Invalid width" << endl;

		if ((height < 0) || (height >= 480))
			cout << "Invalid - height - Please re-enter" << endl;

	} while ((width < 0) || (width >= 640) || (height < 0) || (height >= 480));
}

//Get the radius
void getRadius(int& radius)
{
	//Get the radius of the circle
	do
	{
		cout << "Enter radius: ";
		cin >> radius;
	} while ((radius < 0) || (radius > 320));
}