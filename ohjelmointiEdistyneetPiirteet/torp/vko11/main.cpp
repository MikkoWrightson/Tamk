#include <string>
#include <iostream>
#include "paivays.h"
#include "henkilo.h"
#include "murtoluku.h"

void functionForStuff();

int main(){
/*
    henkilo henkilot[10];
    henkilot[1].setNimi("pete");
    henkilot[1].setIka(2);
    henkilot[1].tulostaHenkilonTiedot();
   
   
    paivays tanaan,
            huomenna;

    tanaan.setPaivays();
    tanaan.lisaaPaiva();
    std::cout << "seuraava paiva on ";
    tanaan.tulostaPaivays();


    bool ifstuff = true;
    if (ifstuff == true){
        //henkilo* ifHenkilo = new henkilo("Petri", 69);
    }
    
    //for(int i = 0; i < 3; i++){
    //    henkilo hlo[i];
    //}
    henkilo hlo[2];
    for(int i = 0; i < 3; i++){
        hlo[i].setIka(i);
        hlo[i].setNimi("nimi");
        hlo[i].tulostaHenkilonTiedot();
    }

    functionForStuff();
*/

    //sievennyssettii
    murtoluku mur;
    mur.kysyTiedot();
    mur.sievenna();
    mur.tulosta();


    return 0;
}

void functionForStuff(){
    henkilo func;
    func.tulostaHenkilonTiedot();
}