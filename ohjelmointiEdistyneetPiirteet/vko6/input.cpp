#include "func.h"
#include <iostream>
#include <curses.h>
#include <fstream>
#include <memory>
#include <limits>

using namespace std;


void lueRivi(int rivi[]){
    std::cout << "Anna lottonumerot: ";
    std::cin >> rivi[0] >> rivi[1] >> rivi[2] >> rivi[3] >> rivi[4] >> rivi[5] >> rivi[6];
}


int lisaNro(){
    int plusNro;
    std::cout << "Anna plusnumero: ";
    std::cin >> plusNro;
    return plusNro;
}

int valikko(){
    int input;
    std::cout << "1) Lue ja tulosta lottorivi\n2) Lopeta ohjelman ajo\nAnna valintasi(1/2): ";
    std::cin >> input;
    return input;
}

void riviTulostus(int rivi[], int plusNro){
    char temp;
    std::cout << "Käyttäjän rivi on:\n\tNumerot:";
    for (int i = 0; i < maxNrot; i++){
        std::cout << " " << rivi[i];
    }
    std::cout << " ja plusnumero: " << plusNro;
    std::cout << "\n\tPaina ENTER jatkaaksesi ...";
    

  std::cout << "Press Enter to Continue" << std::endl;
  std::cin.sync();
  std::cin.ignore(std::numeric_limits<std::streamsize>::max(),'\n');

    
    /*
    std::cout << "Press Enter to Continue" << std::endl;
    std::cin.sync();
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(),'\n');
    */
    //std::getline(std::cin, temp);
    //cin.clear(iostream::failbit);
    //waitForEnter();
    //std::cin.clear;
    /*
    do 
    {
        std::cout << '\n' << "Press a key to continue...";
    } while (cin.get() != '\n');
    */
    
    //getchar();
    //system("pause");
    //temp = std::cin.get();// miten saan sut toimii hhä hä jatka tästä
    //std::cin.ignore();
    
    std::cout << std::endl;

}


void waitForEnter(){
  initscr();
  cbreak();
  printw("press any key to exit...");
  getch();
  endwin();

}