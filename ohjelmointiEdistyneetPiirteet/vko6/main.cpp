#include "func.h"
#include <iostream>


int main (){
    int inputRivi[maxNrot],
        arvottuRivi[maxNrot],
        plusNro,
        whatDo = 420;


    do{
    whatDo = valikko();
    lueRivi(inputRivi);
    plusNro = lisaNro();
    riviTulostus(inputRivi, plusNro);
    rivinArvonta(arvottuRivi);



    }while(whatDo !=2);
    std::cout << "Ohjelman ajo loppuu.\n";
    return 0;
}