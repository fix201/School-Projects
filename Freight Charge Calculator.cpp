//Olufisayo Joseph Ayodele
//A3-1
//Wednesdays
//A program to calculate the freight charge for a shipping company based on the weight of the package(s) being shipped

#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
	//variable declaration statements
	float weight;
	float cost;

	cout << "Please enter the total weight of the packages(S): ";
	cin >> weight;

	if (weight <= 4)
		cost = 3.50;
	//excecute this statement if true;

	else
		cost = (float)3.50 + (weight - 4) * 1.27;



	cout << "The freight charge for shipping " << weight << " pounds is " << setprecision(4) << cost << "." << endl;

	return 0;
}