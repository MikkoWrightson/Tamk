#include "header.h"
#include <ncurses.h>

using namespace std;

void initNCurses() {

	initscr();//allocates memory, initialize screen, clear screen
	cbreak();//Make sure ^C kills program
	noecho();//No more keys echoed to screen when pressed
	keypad(stdscr, TRUE);//read arrow keys etc
}//initNCurses


void board() {
	for(int i = 0; i <= 6 ; i++) {
		mvaddch(i, 0, '|');
		mvaddch(i, 4, '|');
		mvaddch(i, 8, '|');
		mvaddch(i, 4, '|');
		mvaddch(i, 8, '|');
		mvaddch(i, 12,'|');

		if(i%2 == 0){
			for(int j = 0; j <= 12; j++) {
				mvaddch(i, j, '-');
			}//for loop j
		}//for loop i
		move(1,2);
	}//for loop vertical lines
	refresh();
}//board


void boardInit(int *boardData){
	for(int i = 0; i <= 8; i++){
		boardData[i] = i+2;
	}//for loop i
}//boardInit





int winCheck(int *boardData) {		

	//Row check
	if(boardData[0] == boardData[1] && boardData[1] == boardData[2]){
		return TRUE;
	}
	else if(boardData[3] == boardData[4] && boardData[4] == boardData[5]){
		return TRUE;
	}
	else if(boardData[6] == boardData[7] && boardData[7] == boardData[8]){
		return TRUE;
	}
	//column check
	else if(boardData[0] == boardData[3] && boardData[3] == boardData[6]){
		return TRUE;
	}
	else if(boardData[1] == boardData[4] && boardData[4] == boardData[7]){
		return TRUE;
	}
	else if(boardData[2] == boardData[5] && boardData[5] == boardData[8]){
		return TRUE;
	}
	//Diagonal check
	else if(boardData[0] == boardData[4] && boardData[4] == boardData[8]){
		return TRUE;
	}
	else if(boardData[2] == boardData[4] && boardData[4] == boardData[6]){
		return TRUE;
	}
	else{
		return FALSE;
	}
}//int winCheck

int updateBoard(int *boardData, int x, int y, int XorO) {

	//Check first row
	if(y == 1){
		if(x == 2){
			if(boardData[0] > 1){
				boardData[0] = XorO;
				return OKAY;
			}//if(boardData[0] > 1)
		}//if(x == 2)
		else if(x == 6){
			if(boardData[1] > 1){
				boardData[1] = XorO;
				return OKAY;
			}//if(boardData[1] > 1)
		}//else if(x == 6}
		else if(x == 10){
			if(boardData[2] > 1){
				boardData[2] = XorO;
				return OKAY;
			}//if(boardData[2] > 1)
		}//else if (x == 10)
	}//if(y == 1)

	//Check second row
	else if(y == 3){
		if(x == 2){
			if(boardData[3] > 1){
				boardData[3] = XorO;
				return OKAY;
			}//if(boardData[3] > 1)
		}//if(x == 2)
		else if(x == 6){
			if(boardData[4] > 1){
				boardData[4] = XorO;
				return OKAY;
			}//if(boardData[4] > 1)
		}//else if(x == 6)
		else if(x == 10){
			if(boardData[5] > 1){
				boardData[5] = XorO;
				return OKAY;
			}//if(boardData[5] > 1)
		}//else if(x == 10)
	}//else if(y == 3)

	//Check third row
	else if(y == 5){
		if(x == 2){
			if(boardData[6] > 1){
				boardData[6] = XorO;
				return OKAY;
			}//if(boardData[6] > 1)
		}//if(x == 2)
		else if(x == 6){
			if(boardData[7] > 1){
				boardData[7] = XorO;
				return OKAY;
			}//if(boardData[7] > 1)
		}//else if (x == 6)
		else if(x == 10){
			if(boardData[8] > 1){
				boardData[8] = XorO;
				return OKAY;
			}//if(boardData[8] > 1)
		}//else if(x == 10)
	}//else if(y == 5)
	return FALSE;
}//int updateBoard

