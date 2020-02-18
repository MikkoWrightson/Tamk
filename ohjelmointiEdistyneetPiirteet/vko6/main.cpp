#include "func.h"
#include <iostream>



int main (){
    int inputRivi[maxRivi],
        arvottuRivi[maxRivi],
        plusNro,
        whatDo = 420;

    do{
    whatDo = valikko();
    //lueRivi(inputRivi);
    //plusNro = lisaNro();
    //riviTulostus(inputRivi, plusNro);
    rivinArvonta(arvottuRivi);



    }while(whatDo !=2);
    std::cout << "\nOhjelman ajo loppuu.\n";
    return 0;
}