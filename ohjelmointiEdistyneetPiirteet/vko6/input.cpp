#include "func.h"
#include <iostream>


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
    temp = std::cin.get();// miten saan sut toimii hhä hä jatka tästä
    std::cout << std::endl;

}