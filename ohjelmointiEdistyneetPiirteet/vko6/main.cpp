#include "func.h"
#include <iostream>


int main (){
    int rivi[maxNrot],
        plusNro,
        whatDo = 420;


    do{
    whatDo = valikko();
    lueRivi(rivi);
    plusNro = lisaNro();
    riviTulostus(rivi, plusNro);



    }while(whatDo !=2);
    std::cout << "Ohjelman ajo loppuu.\n";
    return 0;
}