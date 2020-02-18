#include "func.h"
#include <iostream>

void lueRivi(int rivi[]){
    std::cout << "Anna lottonumerot: ";
    std::cin >> rivi[0] >> rivi[1] >> rivi[2] >> rivi[3] >> rivi[4] >> rivi[5] >> rivi[6];
    std::cin.ignore();
}


int lisaNro(){
    int plusNro;
    std::cout << "Anna plusnumero: ";
    std::cin >> plusNro;
    std::cin.ignore();
    return plusNro;
}

int valikko(){
    int input;
    std::cout << "1) Lue ja tulosta lottorivi\n2) Lopeta ohjelman ajo\nAnna valintasi(1/2): ";
    std::cin >> input;
    std::cin.ignore();
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
    std::cin.get();
    
    std::cout << std::endl;

}
