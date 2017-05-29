#include <iostream>
#include <string>
#include "graph1.h"

using namespace std;

int main()
{
	//Variable Declaration/Initialization
	int x = 0, y = 0;
	char img[50];

	//Create graphics window
	displayGraphics();

	//Prompt for image
	cout << "Enter the name of the image: ";
	cin >> img;

	//Prompt for image coordinates
	cout << "Enter upper left coordinate for image: ";
	cin >> x >> y;

	//Display image
	displayBMP(img, x, y);

	return 0;
}