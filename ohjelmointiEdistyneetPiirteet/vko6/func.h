#pragma once
#define maxNrot 7

//input.cpp
void lueRivi(int rivi[]);
int lisaNro();
int valikko();
void riviTulostus(int rivi[], int plusNro);
void waitForEnter();


//arvonta.cpp
int analyysi(int inputRivi[], int arvottuRivi[], int oikein);
void rivinArvonta(int arvottuRivi[]);