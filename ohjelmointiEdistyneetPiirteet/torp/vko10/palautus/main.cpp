#include <string>
#include <iostream>
#include "henkilo.h"

int main(){

    henkilo matti,
            tomi;

    matti.setNimi("Matti");
    matti.setIka(69);
    tomi.setNimi("Tomi");
    tomi.setIka(420);

    std::cout << matti.getNimi() << " " << matti.getIka() << "\n";
    std::cout << tomi.getNimi() << " " << tomi.getIka() << "\n";


    return 0;
}