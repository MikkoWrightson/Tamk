#include "paivays.h"
#include <iostream>

int main(){
    paivays tanaan,
            huomenna;

    tanaan.setVuosi(2020);
    huomenna.setVuosi(2020);
    tanaan.setKuukausi(3);
    huomenna.setKuukausi(3);
    tanaan.setPaiva(11);
    huomenna.setPaiva(12);
    std::cout << "Tanaan on ";
    tanaan.tulostaPaivays();
    std::cout << "Huomenna on ";
    huomenna.tulostaPaivays();
    return 0;
}