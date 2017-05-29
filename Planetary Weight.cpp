//Olufisayo Joseph Ayodele
//A6-2
//A program that displays your Earth weight, your weight on the desired planet, and the name of the planet you chose on our solar system

#include <iostream>
#include <cmath>
#include <iomanip>
#include <string>

using namespace std;
void gravity(int);

int main(void)
{
	//Variable Declaration 
	int choice;

	// Cout the menu to users
	cout << "Please enter the number that follows your planet of choice." << endl;
	cout << "MERCURY: 1" << endl;
	cout << "VENUS: 2" << endl;
	cout << "MARS: 3" << endl;
	cout << "JUPITER: 4" << endl;
	cout << "SATURN: 5" << endl;
	cout << "URANUS: 6" << endl;
	cout << "NEPTUNE: 7" << endl;
	cout << "PLUTO: 8" << endl << endl << endl;

	// Prompts and gets from the user a choice of planet
	cout << "Planet Number = ";
	cin >> choice;
	gravity(choice);
	cout << endl << endl;


	return 0;
}

void gravity(int choice)
{
	const double CONVERT_TO_MERCURY = 0.38;
	const double CONVERT_TO_VENUS = 0.78;
	const double CONVERT_TO_MARS = 0.39;
	const double CONVERT_TO_JUPITER = 2.65;
	const double CONVERT_TO_SATURN = 1.17;
	const double CONVERT_TO_URANUS = 1.05;
	const double CONVERT_TO_NEPTUNE = 1.23;
	const double CONVERT_TO_PLUTO = 0.05;
	double earth_weight;
	double planet_weight;


	// Prompts and gets from the user the weight of a person on Earth 
	cout << "Please enter your weight on planet Earth: ";
	cin >> earth_weight;
	cout << endl << endl;
	cout << fixed << showpoint << setprecision(1);

	cout << "Your weight on earth is: " << earth_weight << endl;
	cout << "Your choice of planet was: ";
	switch (choice)   //switch the variable which save the choice of planet
	{
		case 1:
			planet_weight = earth_weight * CONVERT_TO_MERCURY;
			cout << "Mercury";
			break;
		case 2:
			planet_weight = earth_weight * CONVERT_TO_VENUS;
			cout << "Venus";
			break;
		case 3:
			planet_weight = earth_weight * CONVERT_TO_MARS;
			cout << "Mars";
			break;
		case 4:
			planet_weight = earth_weight * CONVERT_TO_JUPITER;
			cout << "Jupiter";
			break;
		case 5:
			planet_weight = earth_weight * CONVERT_TO_SATURN;
			cout << "Saturn";
			break;
		case 6:
			planet_weight = earth_weight * CONVERT_TO_URANUS;
			cout << "Uranus";
			break;
		case 7:
			planet_weight = earth_weight * CONVERT_TO_NEPTUNE;
			cout << "Neptune";
			break;
		case 8:
			planet_weight = earth_weight * CONVERT_TO_PLUTO;
			cout << "Pluto";
			break;
		default:
			cout << "Error!";
	}

	// Prints the weight of the person on Earth, the choice of planet and the converted weight
	cout << fixed << showpoint << setprecision(1);		// format control
	cout << endl;
	cout << "Your weight on the chosen planet is: " << planet_weight << endl;
}
