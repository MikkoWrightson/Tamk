#include "header.h"
#include <ncurses.h>
using namespace std;


int main(){
	initNCurses();
	do{
		board();

	}while (game());//Either q or ctrl+C kills program

endwin();//deallocates memory, ends ncurses
}
