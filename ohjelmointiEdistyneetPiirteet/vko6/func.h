#pragma once
#define maxRivi 7
#define maxNumerot 40

//input.cpp

void lueRivi(int rivi[]);
int lisaNro();
int valikko();
void riviTulostus(int rivi[], int plusNro);
void waitForEnter();



//analyysi.cpp
int analyysi(int inputRivi[], int arvottuRivi[]);

//arvonta.cpp
void rivinArvonta(int arvottuRivi[]);