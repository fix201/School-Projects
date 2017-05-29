// Olufisayo Joseph Ayodele
// Project
// A C++ program that implements a basic 2-player card game

#include <iostream>
#include <cmath>
#include "graph1.h"
#include <ctime>
#include <cstdlib>

using namespace std;

//Function Prototypes
void getWager(int&);
void deal(int&, int&, int&, int&);
int computeScore(int, int);
void displayResults(int, int, int, int, int, int);

int main()
{
	// Variable Declaration/Initialization
	int wager = 0;											// Wager
	int pc1_no = 0, pc2_no = 0, deal1_no = 0, deal2_no = 0;	// Player's and dealer's cards
	int player_score = 0, dealer_score = 0;					// Scores
	char repeat = 0;										// Repeat

															// Display Graphics
	displayGraphics();

	srand(time(0));

	do {
		// Call getWager to get wager
		getWager(wager);

		// Call deal function to get the cards
		deal(pc1_no, pc2_no, deal1_no, deal2_no);

		// Compute the score for players
		player_score = computeScore(pc1_no, pc2_no);

		// Compute the score for dealers
		dealer_score = computeScore(deal1_no, deal2_no);

		// Display the results
		displayResults(pc1_no, pc2_no, deal1_no, deal2_no, player_score, dealer_score);

		cout << "Play again?(Y or N): "; cin >> repeat;

		// Clear the graphics
		clearGraphics();

		// Clear the console 
		system("cls");
	} while (repeat == 'y' || repeat == 'Y');
	return 0;
}

void getWager(int& wager)
{
	do
	{
		cout << "Enter your desired wage ($5 minimun): "; cin >> wager;
	} while (wager < 5);
}

void deal(int& pc1_no, int& pc2_no, int& deal1_no, int& deal2_no)
{
	// Set the seed	
	int seed = 0;
	int rand_number = 0;
	// Generate pc1_no number, from 1..13 inclusive, there are 13 possibilities
	pc1_no = rand() % 13 + 1;
	// Generate pc2_no number, from 1..13 inclusive, there are 13 possibilities
	pc2_no = rand() % 13 + 1;
	// Generate deal1_no number, from 1..13 inclusive, there are 13 possibilities
	deal1_no = rand() % 13 + 1;
	// Generate deal2_no number, from 1..13 inclusive, there are 13 possibilities
	deal2_no = rand() % 13 + 1;
}

int computeScore(int card1_no, int card2_no)
{
	if (card1_no > 9)
		card1_no = 10;
	if (card1_no == 1)
		card1_no = 11;
	if (card2_no > 9)
		card2_no = 10;
	if (card2_no == 1)
		card2_no = 11;
	return card1_no + card2_no;
}

void displayResults(int pc1_no, int pc2_no, int deal1_no, int deal2_no, int player_score, int dealer_score)
{
	// display cards
	gout << setPos(75, 90) << "Your Cards" << endg;
	displayBMP("back.bmp", 75, 100);

	if (pc1_no == 2)
		displayBMP("h2.bmp", 155, 100);
	else if (pc1_no == 3)
		displayBMP("h3.bmp", 155, 100);
	else if (pc1_no == 4)
		displayBMP("h4.bmp", 155, 100);
	else if (pc1_no == 5)
		displayBMP("h5.bmp", 155, 100);
	else if (pc1_no == 6)
		displayBMP("h6.bmp", 155, 100);
	else if (pc1_no == 7)
		displayBMP("h7.bmp", 155, 100);
	else if (pc1_no == 8)
		displayBMP("h8.bmp", 155, 100);
	else if (pc1_no == 9)
		displayBMP("h9.bmp", 155, 100);
	else if (pc1_no == 10)
		displayBMP("h10.bmp", 155, 100);
	else if (pc1_no == 11)
		displayBMP("h11.bmp", 155, 100);
	else if (pc1_no == 12)
		displayBMP("h12.bmp", 155, 100);
	else if (pc1_no == 13)
		displayBMP("h13.bmp", 155, 100);
	else if (pc1_no == 1)
		displayBMP("h14.bmp", 155, 100);

	if (pc2_no == 2)
		displayBMP("d2.bmp", 235, 100);
	else if (pc2_no == 3)
		displayBMP("d3.bmp", 235, 100);
	else if (pc2_no == 4)
		displayBMP("d4.bmp", 235, 100);
	else if (pc2_no == 5)
		displayBMP("d5.bmp", 235, 100);
	else if (pc2_no == 6)
		displayBMP("d6.bmp", 235, 100);
	else if (pc2_no == 7)
		displayBMP("d7.bmp", 235, 100);
	else if (pc2_no == 8)
		displayBMP("d8.bmp", 235, 100);
	else if (pc2_no == 9)
		displayBMP("d9.bmp", 235, 100);
	else if (pc2_no == 10)
		displayBMP("d10.bmp", 235, 100);
	else if (pc2_no == 11)
		displayBMP("d11.bmp", 235, 100);
	else if (pc2_no == 12)
		displayBMP("d12.bmp", 235, 100);
	else if (pc2_no == 13)
		displayBMP("d13.bmp", 235, 100);
	else if (pc2_no == 1)
		displayBMP("d14.bmp", 235, 100);

	gout << setPos(400, 90) << "Dealer Cards" << endg;
	displayBMP("back.bmp", 400, 100);

	if (deal1_no == 2)
		displayBMP("c2.bmp", 480, 100);
	else if (deal1_no == 3)
		displayBMP("c3.bmp", 480, 100);
	else if (deal1_no == 4)
		displayBMP("c4.bmp", 480, 100);
	else if (deal1_no == 5)
		displayBMP("c5.bmp", 480, 100);
	else if (deal1_no == 6)
		displayBMP("c6.bmp", 480, 100);
	else if (deal1_no == 7)
		displayBMP("c7.bmp", 480, 100);
	else if (deal1_no == 8)
		displayBMP("c8.bmp", 480, 100);
	else if (deal1_no == 9)
		displayBMP("c9.bmp", 480, 100);
	else if (deal1_no == 10)
		displayBMP("c10.bmp", 480, 100);
	else if (deal1_no == 11)
		displayBMP("c11.bmp", 480, 100);
	else if (deal1_no == 12)
		displayBMP("c12.bmp", 480, 100);
	else if (deal1_no == 13)
		displayBMP("c13.bmp", 480, 100);
	else if (deal1_no == 1)
		displayBMP("c14.bmp", 480, 100);

	if (deal2_no == 2)
		displayBMP("s2.bmp", 560, 100);
	else if (deal2_no == 3)
		displayBMP("s3.bmp", 560, 100);
	else if (deal2_no == 4)
		displayBMP("s4.bmp", 560, 100);
	else if (deal2_no == 5)
		displayBMP("s5.bmp", 560, 100);
	else if (deal2_no == 6)
		displayBMP("s6.bmp", 560, 100);
	else if (deal2_no == 7)
		displayBMP("s7.bmp", 560, 100);
	else if (deal2_no == 8)
		displayBMP("s8.bmp", 560, 100);
	else if (deal2_no == 9)
		displayBMP("s9.bmp", 560, 100);
	else if (deal2_no == 10)
		displayBMP("s10.bmp", 560, 100);
	else if (deal2_no == 11)
		displayBMP("s11.bmp", 560, 100);
	else if (deal2_no == 12)
		displayBMP("s12.bmp", 560, 100);
	else if (deal2_no == 13)
		displayBMP("s13.bmp", 560, 100);
	else if (deal2_no == 1)
		displayBMP("s14.bmp", 560, 100);

	//Display total scores when
	gout << setPos(75, 210) << "Your Total: " << player_score << endg;
	gout << setPos(400, 210) << "Dealer Total: " << dealer_score << endg;

	//Compare the values if
	if (player_score > dealer_score)
		gout << setPos(315, 300) << "You Win!" << endg;
	if (player_score < dealer_score)
		gout << setPos(315, 300) << "You Lose!" << endg;
	if (player_score == dealer_score)
		gout << setPos(315, 300) << "Tie!" << endg;
}


