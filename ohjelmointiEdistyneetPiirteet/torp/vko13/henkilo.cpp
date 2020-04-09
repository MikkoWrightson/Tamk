#include "henkilo.h"
#include <iostream>
#include <string>
using namespace std;

    henkilo::henkilo(const henkilo& aHenkilo) : nimi(aHenkilo.nimi), ika(aHenkilo.ika), Osoite(aHenkilo.Osoite){
        cout << "henkilo copystructor\n";
    }

    henkilo::~henkilo(){
        cout << "henkilo destructor\n";
    }
    henkilo::henkilo(bool kysy){
        cout << "henkilo kysyva constructor\n";
        kysele();

    }

    henkilo::henkilo(const string& nimiIn, int ikaIn) : nimi(nimiIn), ika(ikaIn){
        cout << "henkilo constructor w/ 3 arguments\n";
    }
    henkilo::henkilo(const string& aNimi, int aIka, const osoite& aOsoite) : nimi(aNimi), ika(aIka), Osoite(aOsoite){
        cout << "henkilo constructor w/ 4 arguments\n";
    }

    henkilo::henkilo(){
        nimi = "error";
        ika = 0;
        cout << "henkilo constructor\n";
    }
    void henkilo::setNimi (const string& uusiNimi){
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
    void henkilo::setOsoite(const osoite& aOsoite){
        Osoite = aOsoite;
    }
    osoite henkilo::getOsoite() const{
        return Osoite;
    }
    void henkilo::tulostaHenkilonTiedot() const{
        cout << "Nimi: " << nimi  << "\nIka: " << ika << endl;
        Osoite.tulostaTiedot();
 
    }
    void henkilo::kysele(){
        string aNimi;
        int aIka;
        cout << "Anna nimi: ";
        cin >> aNimi;
        cout << "Anna ika: ";
        cin >> aIka;
        Osoite.kysele();
        setNimi(aNimi);
        setIka(aIka);
    }