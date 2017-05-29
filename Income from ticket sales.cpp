//Olufisayo Joseph Ayodele
//A2-2
//Wednesdays
//Displays the amount of income generated from ticket sales

/*******************************A2-2**********************************************

Input: Number of Class A tickets, Number of Class B Tickets,
Number of Class C Ticktes

Process: Class A Sales = # Class A * Cost Class A
Class B Sales = # Class B * Cost Class B
Class C Sales = # Class C * Cost Class C
Total Ticket Sales = Class A Sales + Class B Sales + Class C Sales

Output: Class A Sales, Class B Sales, Class C Sales, Total Ticket Sales

**************************************************************************/

#include <iostream>
using namespace std; //introduces namespace std

int main()
{
	//Variable Declaration statements 
	int ticket_number_A;           //stores # of tickets sold for Class A seats
	int ticket_number_B;           //stores # of tickets sold for Class B seats
	int ticket_number_C;           //stores # of tickets sold for Class C seats
	double cost_of_A = 15.0;        //stores cost of a Class A ticket
	double cost_of_B = 12.0;        //stores cost of a Class B ticket
	double cost_of_C = 9.00;        //stores cost of a Class C ticket
	double total_cost_of_A;        //stores total cost of a Class A ticket
	double total_cost_of_B;        //stores total cost of a Class B ticket
	double total_cost_of_C;        //stores total cost of a Class C ticket
	double total_income = 0.0;     // stores the total income of selling of all tickets

	//Prompt user to enter the # of tickets sold for each Class of seating
	cout << "Please enter the total # of tickets sold for Class A seating: "; // Type A
	cin >> ticket_number_A;
	cout << "\nPlease enter the total # of tickets sold for Class B seating ";			// Type B
	cin >> ticket_number_B;
	cout << "\nPlease enter the total # of tickets sold for Class B seating";			// Type C
	cin >> ticket_number_C;

	total_cost_of_A = ticket_number_A* cost_of_A;  //cacluate & stores total cost of a Class A ticket
	total_cost_of_B = ticket_number_B* cost_of_B;  // cacluate & stores total cost of a Class B ticket
	total_cost_of_C = ticket_number_C* cost_of_C;   //cacluate & stores total cost of a Class C ticket

	//Calculate total income from tickets sales 
	total_income = total_cost_of_A + total_cost_of_B + total_cost_of_C;


	//Displays the total income from ticket sales
	//cout << fixed << cout.precision(2);
	cout << endl << endl;
	cout << "Class A ticket sales..........$" << total_cost_of_A << endl;//Display class A ticket sales
	cout << "Class B ticket sales..........$" << total_cost_of_B; // Display class B ticket sales
	cout << "\nClass C ticket sales..........$" << total_cost_of_C; // Display class C ticket sales
	cout << "\nTotal ticket sales..........$" << total_income; //Display total income of ticket sales

	cout << endl << endl;

	return 0;
}

