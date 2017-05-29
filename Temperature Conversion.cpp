//Olufisayo Joseph Ayodele
//A11-2
//A program that convert Celsius to Fahrenheit or Fahrenheit to Celsius depending on the user’s choice.



#include <iostream>
#include <cmath>
#include <iomanip>
#include "graph1.h"

using namespace std;

//Function Prototypes
int getConvertChoice();
double getTemperature();
double convertToFahren(double);
double convertToCelsius(double);
void displayConversion(double, int, double);

// main function
int main()
{
	int user_choice;
	double temperature, converted_temp;
	char repeat;
	do
	{
		// Function Calls  
		user_choice = getConvertChoice();
		temperature = getTemperature();

		switch (user_choice)
		{
		case 1:
			converted_temp = convertToFahren(temperature);
			break;
		case 2:
			converted_temp = convertToCelsius(temperature);
			break;
		}

		displayConversion(temperature, user_choice, converted_temp);

		cout << "Would you like to convert another temperature? Y or N: ";
		cin >> repeat;
	} while (repeat == 'y' || repeat == 'Y');

	return 0;
}

// Prompts the user for the choice of conversion
// Input: none
// Output: user's menu choice of conversion
int getConvertChoice()
{
	int choice = 0;

	cout << "Please choose the desired conversion from the menu." << endl;
	cout << "1.  Convert from Celsius to Fahrenheit." << endl;
	cout << "2.  Convert from Fahrenheit to Celsius." << endl << endl;
	cout << "Enter choice: ";
	cin >> choice;

	return choice;
}


// Prompts user for temperature to be converted
// Input: none
// Output: the temperature
double getTemperature()
{
	double temperature = 0;

	cout << "Please enter the temperature to be converted: ";
	cin >> temperature;
	cout << endl << endl;

	return temperature;
}


// Calculates and returns the converted temp from Celsius to Fahrenheit
// Input: the temperature
// Output: the converted degrees
double convertToFahren(double temperature)
{
	return (9.0 / 5.0) * (temperature + 32.0);
}


// Calculates and returns the converted temp from Fahrenheit to Celsius
// Input: the temperature
// Output: the converted degrees
double convertToCelsius(double temperature)
{
	return (5.0 / 9.0) * (temperature - 32.0);
}

// Displays the temprature, choice, and converted temperature
// Input: temprature, choice, and converted_temp
// Output: none
void displayConversion(double temperature, int user_choice, double converted_temp)
{
	cout << endl << endl;
	cout << fixed << showpoint << setprecision(1);

	if (user_choice == 1)
	{
		cout << "The temperature entered in Celsius is: " << temperature << endl;
		cout << "The temperature converted to Fahrenheit is: " << converted_temp << endl;
	}
	else if (user_choice == 2)
	{
		cout << "The temperature entered in Fahrenheit is: " << temperature << endl;
		cout << "The temperature converted to Celsius is: " << converted_temp << endl;
	}
	else
		cout << "ERROR: Please run program again." << endl << endl;
}

