#pragma once

#define TRUE 1
#define FALSE 0

#define P1 1
#define P2 2

#define OKAY 5 //rewrite this shit

void printX(int y, int x);
void printO(int y, int x);

void initNCurses();
void board();
void boardInit(int *boardData);
int game();
int winCheck(int *boardData);
int updateBoard(int *boardData, int x, int y, int xOrO);
