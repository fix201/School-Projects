//Olufisayo Joseph Ayodele
//Bonus_Lab
//A program that implements a cannon-target game where the objective is to shoot 10 targets in as short a time period as possible

#include <iostream>
#include <string>
#include <stdlib.h>
#include <time.h>
#include "graph1.h"

using namespace std;			//introduces namespace std

int main()
{
	displayGraphics();
	int cannon_x = 300;
	int ball_x = 1000;
	int ball_y = 1000;
	int target_x[10];
	int target_y[10];
	int target_obj[10];
	int cannon = displayBMP("canon.bmp", cannon_x, 439);
	int ball = drawCircle(5, ball_x, ball_y);
	bool ball_flag = false;

	srand(time(0));
	for (int i = 0; i<10; i++) {
		target_x[i] = rand() % 600;
		target_y[i] = rand() % 200;
		target_obj[i] = displayBMP("target.bmp", target_x[i], target_y[i]);
	}

	while (true) {
		if (left()) {
			cannon_x -= 5;
			if (cannon_x<0)
				cannon_x = 0;
		}
		if (right()) {
			cannon_x += 5;
			if (cannon_x >= 639)
				cannon_x = 639;
		}
		if (up() && ball_flag == false) {
			ball_x = cannon_x + 20;
			ball_y = 430;
			ball_flag = true;
		}
		if (down()) {
			break;
		}
		if (ball_flag) {
			ball_y -= 10;
			if (ball_y<-20) {
				ball_flag = false;
			}
			for (int i = 0; i<10; i++) {
				if (target_obj[i]>0 && ball_x>target_x[i] && ball_x<target_x[i] + 40 && ball_y>target_y[i] && ball_y<target_y[i] + 40) {
					removeObject(target_obj[i]);
					target_obj[i] = -1;
					ball_flag = false;
					ball_y = -20;
					break;
				}
			}
		}
		moveObject(cannon, cannon_x, 439);
		moveObject(ball, ball_x, ball_y);
	}


	return 0;
}