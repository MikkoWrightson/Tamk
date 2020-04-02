#include "henkilo.h"
#include <iostream>
#include <string>
using namespace std;

    henkilo::~henkilo(){

    }

    henkilo::henkilo(string nimiIn, int ikaIn) : nimi(nimiIn), ika(ikaIn){

    }
    henkilo::henkilo(string aNimi, int aIka, osoite aOsoite) : nimi(aNimi), ika(aIka), Osoite(aOsoite){

    }

    henkilo::henkilo(){
        nimi = "error";
        ika = 0;
    }
    void henkilo::setNimi (string uusiNimi){
        nimi = uusiNimi;
    }
    string henkilo::getNimi() const{
        return nimi;
    }
    void henkilo::setIka(int uusiIka){
        if (uusiIka >= 0){
        ika = uusiIka;
        }
    }
    int henkilo::getIka() const{
        return ika;
    }
    void henkilo::setOsoite(osoite aOsoite){
        Osoite = aOsoite;
    }
    osoite henkilo::getOsoite() const{
        return Osoite;
    }
    void henkilo::tulostaHenkilonTiedot() const{
        cout << "Nimi: " << nimi  << "\nIka: " << ika << endl;
        Osoite.tulostaTiedot();
 
    }