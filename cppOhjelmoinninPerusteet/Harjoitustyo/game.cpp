#include "header.h"
#include <ncurses.h>

using namespace std;

int game() {

	int boardData[9];
	int playerNum = 1;
	int inputChar;
	int x = 2, y = 1;
	int didWin = 0;
	int canMove = 0;
	int moveNum = 0;

	boardInit(boardData);

	mvprintw(8, 0, "Place X with space bar");
	move(y, x);
	refresh();

	while (inputChar != 'q') {

		if(moveNum == 9) {
			mvprintw(10, 0, "Tie. Get good.");
			inputChar = getch();
			erase();
			return 3;
		}//moveNum
		inputChar = getch();

		if(inputChar != ' '){

			switch (inputChar){

				case KEY_UP:{
						if(y == 3 || y == 5){
							move(y-=2, x);
						}//if
						break;
					    }//KEY_UP

				case KEY_DOWN:{
						if(y == 1 || y == 3){
							move(y+=2, x);
						}//if
						break;
					      }//KEY_DOWN
				case KEY_LEFT:{
						if(x == 10 || x == 6){
							move(y, x-=4);
						}//if
						break;
					      }//KEY_LEFT
				case KEY_RIGHT:{
						if(x == 2 || x == 6){
							move(y, x+=4);
						}//if
						break;
					       }//KEY_RIGHT
			}
		}//Whilr inputChar != 'q'

		else if(playerNum == P1 && inputChar == ' '){

			getyx(stdscr, y, x);
			canMove = updateBoard(boardData, x, y,1);

			if(canMove == OKAY) {

				mvaddch(y, x, 'X');

				// Returns 1 if last move won
				didWin = winCheck(boardData);

				if(didWin){

					mvprintw(10,0, "X gets the epic victory royale");
                    mvprintw(11,0,"To claim prize, send credit card number, month/year and the 3 special numbers on the back to mikko.wrightson@tuni.fi");
					inputChar = getch();
					erase();
					return TRUE;
				}//if didWin
				moveNum += 1;

				playerNum = 2;
				mvprintw(8, 0, "Place O with space bar");
				move(y, x);
			}//if canMove == OKAY
		}//else if playerNum P1
		else if(playerNum == P2 && inputChar == ' ') {

			getyx(stdscr, y, x);
			canMove = updateBoard(boardData, x, y,0);

			if(canMove == OKAY) {

				mvaddch(y, x, 'O');

				//Returns 1 if last move won
				didWin = winCheck(boardData);

				if(didWin){

					mvprintw(10,0, "O wins epic victory royale");
                    mvprintw(11,0,"To claim prize, send credit card number, month/year and the 3 special numbers on the back to mikko.wrightson@tuni.fi");
					inputChar = getch();
					erase();
					return TRUE;
				}//if(didWin)
				moveNum += 1;

				playerNum = 1;
				mvprintw(8, 0, "Place X with space bar");
				move(y, x);
			}//if(canMove == OKAY)
		}//else if playerNum == P2
		refresh();
	}//while (inputChar != 'q')
	return FALSE;
	endwin();

}//game()
