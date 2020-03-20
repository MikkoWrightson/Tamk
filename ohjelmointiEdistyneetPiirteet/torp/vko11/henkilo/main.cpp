#include <string>
#include <iostream>
#include "henkilo.h"

int main(){

    henkilo henkilot[10];
    henkilot[1].setNimi("pete");
    henkilot[1].setIka(2);
    henkilot[1].tulostaHenkilonTiedot();


    return 0;
}