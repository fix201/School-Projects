//Olufisayo Joseph Ayodele
//Lab7OutBonus
//A C++ program that simulates The Price is Right clock game

/***************************************************************************
Input: User enters the guess

Process: Processes the guess to see if it is correct

Output: If guess is correct you win, if wrong you lose
****************************************************************************/

#include <iostream>
#include "graph1.h"
#include <ctime>		//Header file for time functions: ctime
#include <cstdlib>		//Header file for random number generators: cstdlib

// Function Prototypes
void PlayGame();

int main()
{
	//Variable Declaration/Initialization
	char choice;
	int counter = 0;
	srand(time(0));

	//Displays Graphics
	displayGraphics();


	do {
		PlayGame(); counter++;

		if (counter >= 5) {
			cout << "You've played the game long enough! Bye" << endl;
			break;
		}
		do {
			cout << "Do you want to play again? y/n" << endl;
			cin >> choice;
		} while (choice != 'y' && choice != 'Y' && choice != 'n' && choice != 'N');
	} while (choice == 'y' || choice == 'Y');

	return 0;
}


void PlayGame()
{
	//Variable Declaration/Initialization
	int seed = 0;
	int rand_number = 0;
	int value;
	int price;
	int user_price;
	int  current_time = 0;
	int start_time = 0;
	int  elapsed_time = 0;
	bool first_guess = true;
	int counter = 0;
	bool flag = false;
	int obj;


	obj = drawRect(154, 344, 200, 100);
	setColor(obj, 0, 0, 0);
	do {
		value = rand() % 10;
		if (first_guess)
		{
			first_guess = false;
			start_time = time(0);
		}
		value = rand() % 10;
		if (value == 1)
			gout << setPos(155, 345) << displayBMP("Chair.bmp", 155, 90) << "Chair" << endg;
		else if (value == 2)
			gout << setPos(155, 345) << displayBMP("Couch.bmp", 155, 90) << "Couch" << endg;
		else if (value == 3)
			gout << setPos(155, 345) << displayBMP("Dodgers.bmp", 155, 90) << "Dodgers" << endg;
		else if (value == 4)
			gout << setPos(155, 345) << displayBMP("Freezer.bmp", 155, 90) << "Freezer" << endg;
		else if (value == 5)
			gout << setPos(155, 345) << displayBMP("jukebox.bmp", 155, 90) << "Jukebox" << endg;
		else if (value == 6)
			gout << setPos(155, 345) << displayBMP("lawnmowers.bmp", 155, 90) << "Lawnmowers" << endg;
		else if (value == 7)
			gout << setPos(155, 345) << displayBMP("piano.bmp", 155, 90) << "Piano" << endg;
		else if (value == 8)
			gout << setPos(155, 345) << displayBMP("pooltable.bmp", 155, 90) << "Pooltable" << endg;
		else if (value == 9)
			gout << setPos(155, 345) << displayBMP("powertools.bmp", 155, 90) << "Powertools" << endg;
		else if (value == 10)
			gout << setPos(155, 345) << displayBMP("recliner.bmp", 155, 90) << "Recliner" << endg;


		break;

	} while (flag == true);

	price = rand() % 500 + 500; //Random prices


	do {
		cout << "Enter value for prize" << endl; cin >> user_price; counter++;

		obj = drawRect(154, 359, 200, 100);
		setColor(obj, 0, 0, 0);
		if (user_price < price)
			gout << setPos(155, 360) << "HIGHER" << endg;
		else if (user_price>price)
			gout << setPos(155, 360) << "LOWER" << endg;
		else {
			gout << setPos(155, 360) << "you win" << endg;
			gout << setPos(155, 375) << (int)30 - elapsed_time << endg;
			break;
		}

		if (first_guess)
		{
			first_guess = false;
			start_time = time(0);

		}

		//Get the current time
		current_time = time(0);

		//Compute the difference
		elapsed_time = current_time - start_time;
		if (elapsed_time >30)
		{
			gout << setPos(155, 375) << "Time Over" << endg;
			return;
		}

		gout << setPos(155, 375) << (int)30 - elapsed_time << endg;
		if (counter >= 8)
		{
			cout << "You have no more chance!" << endl;
			return;
		}
	} while (true);
}