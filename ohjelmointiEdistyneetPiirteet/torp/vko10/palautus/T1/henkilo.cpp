#include "henkilo.h"
#include <iostream>
#include <string>
using namespace std;

    void henkilo::setNimi (string uusiNimi){
        nimi = uusiNimi;
    }
    string henkilo::getNimi(){
        return nimi;
    }
    void henkilo::setIka(int uusiIka){
        if (uusiIka >= 0){
        ika = uusiIka;
        }
    }
    int henkilo::getIka(){
        return ika;
    }
