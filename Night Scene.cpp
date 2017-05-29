//Olufisayo Joseph Ayodele
//B5-2
//A program that displays a night scene

/**********************************************************************************************
Input:    the user enters the number of stars to display

Process:  Draw each line, rectangle using the provided coordinates in the doc file
Then generate random coordinates for each star and the moon and check its visibility

Output:   Lines representing a building, rectangles representing windows,
points representing stars and an image of the moon

***********************************************************************************************/
#include <iostream>
#include <cmath>
#include "graph1.h"
#include <ctime>     //Header file for time functions
#include <cstdlib>   //Header file for random functions
using namespace std;

int main()
{
	//display graphics
	displayGraphics();

	srand(time(0));

	//variable declaration
	int R;				//index of the rectangle
	int star;			//number of stars
	int x;				//Variable for x coordinate
	int y;				//Variable for y coordinate

						//prompt the user to enter the number of stars to be displayed
	cout << "Enter the number of stars you want: ";
	cin >> star;

	int i = 0;



	do {
		x = rand() % 639;
		y = rand() % 339;

		while (x >= 639)
			x = x % (x + 200);

		while (y >= 479)
			y = y % (y + 200);
		//
		if ((x > 599) && (x < 639))
		{
			if (y < 339)
				drawPoint(x, y);
			else
			{
				for (; y >= 339; )
					y = y - 339;

				drawPoint(x, y);
			}
		}

		//first check so that stars are not inside the building
		if ((x > 599) && (x < 639))
		{
			if (y < 339)
				drawPoint(x, y);
			else
			{
				for (; y >= 339; )
					y = y - 339;

				drawPoint(x, y);
			}
		}
		//second check so that stars are not inside the building
		if ((x > 519) && (x < 599))
		{
			if (y < 239)
				drawPoint(x, y);
			else
			{
				for (; y >= 239; )
					y = y - 239;

				drawPoint(x, y);
			}
		}

		//third check so that stars are not inside the building
		if ((x > 239) && (x < 519))
		{
			if (y < 139)
				drawPoint(x, y);
			else
			{
				for (; y >= 139; )
					y = y - 139;

				drawPoint(x, y);
			}
		}

		// fourth check so that stars are not inside the building
		if ((x > 299) && (x < 399))
		{
			if (y < 279)
				drawPoint(x, y);
			else
			{
				for (; y >= 279; )
					y = y - 279;

				drawPoint(x, y);
			}
		}

		//fifth check so that stars are not inside the building
		if ((x > 159) && (x < 299))
		{
			if (y < 59)
				drawPoint(x, y);
			else
			{
				for (; y >= 59; )
					y = y - 59;

				drawPoint(x, y);
			}
		}

		//sixth check so that stars are not inside the building
		if ((x > 59) && (x < 159))
		{
			if (y < 239)
				drawPoint(x, y);
			else
			{
				for (; y >= 239; )
					y = y - 239;

				drawPoint(x, y);
			}
		}

		//last check so that stars are not inside the building
		if ((x > 0) && (x < 59))
		{
			if (y < 339)
				drawPoint(x, y);
			else
			{
				for (; y >= 339; )
					y = y - 339;

				drawPoint(x, y);
			}
		}

		i++;
	} while (i < star);

	//display an image of the moon
	for (; y >= 59;)
		y -= 59;
	x = x + 10; y = y + 5;
	displayBMP("moon.bmp", x, y);

	//draw the lines needed
	drawLine(0, 339, 59, 339, 1);
	drawLine(59, 339, 59, 239, 1);
	drawLine(59, 239, 159, 239, 1);
	drawLine(159, 239, 159, 59, 1);
	drawLine(159, 59, 159, 59, 1);
	drawLine(159, 59, 299, 59, 1);
	drawLine(299, 59, 299, 279, 1);
	drawLine(299, 279, 399, 279, 1);
	drawLine(399, 279, 399, 139, 1);
	drawLine(399, 139, 519, 139, 1);
	drawLine(519, 139, 519, 239, 1);
	drawLine(519, 239, 599, 239, 1);
	drawLine(599, 239, 599, 339, 1);
	drawLine(599, 339, 639, 339, 1);

	//draw rectangles and set colors
	R = drawRect(179, 99, 10, 10);
	setColor(R, 150, 150, 0);
	R = drawRect(179, 129, 10, 10);
	setColor(R, 150, 150, 0);
	R = drawRect(259, 179, 10, 10);
	setColor(R, 175, 175, 0);
	R = drawRect(99, 259, 10, 10);
	setColor(R, 200, 200, 0);
	R = drawRect(239, 319, 10, 10);
	setColor(R, 255, 255, 0);
	R = drawRect(419, 179, 10, 10);
	setColor(R, 50, 50, 0);

	return 0;
}
