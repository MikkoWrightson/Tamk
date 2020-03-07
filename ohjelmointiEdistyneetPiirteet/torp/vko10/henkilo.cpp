#include "henkilo.h"
#include <iostream>
#include <string>
using namespace std;

    //metodit eli j'senfunktiot
    void Henkilo::tervehdi(){
        cout << "Hei, nimeni on " << nimi << endl;
    }

    void Henkilo::setNimi (string uusiNimi){
        nimi = uusiNimi;
    }
    string Henkilo::getNimi(){
        return nimi;
    }
    void Henkilo::setIka(int uusiIka){
        if (uusiIka >= 0){
        ika = uusiIka;
        }
    }
    int Henkilo::getIka(){
        return ika;
    }
