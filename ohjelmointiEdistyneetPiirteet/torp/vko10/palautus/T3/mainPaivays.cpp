#include "paivays.h"
#include <iostream>

int main(){
    paivays tanaan,
            huomenna;

    tanaan.setPaivays();
    tanaan.lisaaPaiva();
    std::cout << "seuraava paiva on ";
    tanaan.tulostaPaivays();

    
    return 0;
}