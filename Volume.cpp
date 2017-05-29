/******************************A2-1**********************************************
Author        :Olufisayo Joseph Ayodele     Course & Section :Computer Science 1
Creation Date :9/2/2015     Assignment Number:A2-1
Description   :Calculate and display volume

Input:    user enters the dimentions

Process:  using the formula calculate the volume  of the cube

Output:   the volume of the pool

********************************C**********************************************/

#include <iostream>

using namespace std; //introduces namespace std

int main()
{
	//Declaration/Initialization statements

	double Length;              //stores length
	double Width;              //stores width
	double Depth;              //stores depth  
	double Volume;              //stores the calculated volume


	//Prompt user to enter the length 
	cout << "please enter length: ";
	cin >> Length;
	//Prompt user to enter the width
	cout << "Please enter width: ";
	cin >> Width;
	//Prompt user to enter the depth
	cout << "please enter depth: ";
	cin >> Depth;

	//Formula to calculate volume
	Volume = Length * Width * Depth;

	//Displays the dimensions and volume of the pool
	cout << "\n\n dimension: \n" << " Length   " << Length << " feet" << "\n Width    " << Width << " feet" << "\n Depth    " << Depth << " feet" << "\n\n Volume is: " << Volume << " cubic feet." << endl;

	return 0;
}
