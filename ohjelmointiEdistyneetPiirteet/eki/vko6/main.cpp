#include "func.h"
#include <iostream>
#include <time.h>
#include <stdlib.h>


int main (){
    int inputRivi[maxRivi],
        arvottuRivi[maxRivi],
        plusNro,
        whatDo = 420;
    
    srand(time(NULL));

    do{
    whatDo = valikko();
    lueRivi(inputRivi);
    plusNro = lisaNro();
    riviTulostus(inputRivi, plusNro);
    riviTulostus(arvottuRivi, plusNro);
    rivinArvonta(arvottuRivi);
    std::cout << "Analyysi: " << analyysi(inputRivi, arvottuRivi) << std::endl;


    }while(whatDo !=2);
    std::cout << "\nOhjelman ajo loppuu.\n";
    return 0;
}