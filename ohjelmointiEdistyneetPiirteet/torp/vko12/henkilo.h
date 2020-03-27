#pragma once
#include <string>
#include "osoite.h"
using namespace std;

class henkilo{
public:
    henkilo();
    henkilo(string nimiIn, int ikaIn);
    henkilo(string aNimi, int aIka, osoite aOsoite);
    ~henkilo();
    void setNimi(string uusiNimi);
    string getNimi() const;
    void setIka(int uusiIka);
    int getIka() const;
    void setOsoite(osoite aOsoite);
    osoite getOsoite() const;
    void tulostaHenkilonTiedot() const;

private:

    string nimi;
    int ika;
    osoite Osoite;

};
