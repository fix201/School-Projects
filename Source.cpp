// Olufisayo Joseph Ayodele
// B10-1
// A program that calculates the average of 5 students on the co-ed golf team after playing three rounds of golf.

#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

const int PLAYERS = 5;
const int STATS = 3;

// Function Prototypes
void getNames(string players[PLAYERS]);
void getStats(int stats[][STATS], string players[]);
void computePlayersStats(int stats[][STATS], double averageStudent[]);
void computeTotals(int stats[][STATS], double averageGame[]);
double determineBestStudentAve(double averageStudent[]);
void displayInfo(string players[], int stats[][STATS],
	double averageGames[], double averageStudent[], double lowest);


int main(void)
{
	// Declaration and Intilization statments
	int stats[PLAYERS][STATS] = { 0 };
	string players[PLAYERS];
	double lowest;
	double averageStudent[PLAYERS] = { 0 };
	double averageGame[5] = { 0 };

	// function calls
	// Call  getNames function
	getNames(players);

	// Call  getStats function
	getStats(stats, players);

	// Call    computePlayersStats function
	computePlayersStats(stats, averageStudent);

	// Call   computeTotals function
	computeTotals(stats, averageGame);

	// call determineBestStudentAve function and return the lowest score
	determineBestStudentAve(averageStudent);

	// which is the best recorded average from the rounds of golf
	lowest = determineBestStudentAve(averageStudent);

	// call displayInfo function
	displayInfo(players, stats, averageGame, averageStudent, lowest);

	return 0;
}

// Function that gets players' names
void getNames(string players[PLAYERS])
{
	for (int i = 0; i < PLAYERS; i++)
	{
		cout << "Enter players' names: "; getline(cin, players[i]);
	}
}

// Function that gets stats
void getStats(int stats[][STATS], string players[])
{
	for (int row = 0; row < PLAYERS; row++)
	{
		cout << "\n\nPlease enter the stats for "
			<< players[row] << ".";
		for (int column = 0; column < STATS; column++)
		{
			do
			{
				cout << "\nRound " << column + 1 << " :  ";
				cin >> stats[row][column];
				if (stats[row][column] < 0)
				{
					cout << "\nERROR:  Negative numbers are not acceptable.";
					cout << "\nPlease re-enter" << endl << endl;
				}
			} while (stats[row][column] < 0);
		}
	}
}

// Function that calculates Ave./Student
void computePlayersStats(int stats[][STATS], double averageStudent[])
{
	for (int i = 0; i < PLAYERS; i++)
	{
		for (int j = 0; j < STATS; j++)
		{
			averageStudent[i] += stats[i][j];
		}
		averageStudent[i] = averageStudent[i] / STATS;
	}
}

//function that computes Ave./Round
void computeTotals(int stats[][STATS], double averageGame[])
{
	for (int j = 0; j < STATS; j++)
	{
		for (int i = 0; i < PLAYERS; i++)
		{
			averageGame[j] += stats[i][j];
		}
		averageGame[j] = averageGame[j] / PLAYERS;
	}
}

//Function to determine student with best average
double determineBestStudentAve(double averageStudent[])
{
	int i;
	double lowest = averageStudent[0];

	for (i = 1; i < PLAYERS; i++)
	{
		if (averageStudent[i] < lowest)
		{
			lowest = averageStudent[i];
		}
	}
	return lowest;
}

// Function that displays data
void displayInfo(string players[], int stats[][STATS],
	double averageGames[], double averageStudent[], double lowest)
{
	cout << endl << endl;
	cout << "Player              Round 1     Round 2   Round 3   AVERAGE/Student    ";

	cout << fixed << showpoint << setprecision(1) << endl;
	for (int row = 0; row < PLAYERS; row++)
	{
		cout << left;
		cout << setw(15) << players[row];
		cout << left;

		for (int column = 0; column < STATS; column++)
		{
			cout << setw(10) << stats[row][column];
		}
		cout << setw(10) << averageStudent[row] << endl;

	}

	cout << "Ave./Round       ";

	for (int row = 0; row < STATS; row++)
		cout << setw(9) << averageGames[row];

	cout << endl << endl << lowest << " was the best recorded average from the rounds of golf.";

	cout << endl << endl;
}
