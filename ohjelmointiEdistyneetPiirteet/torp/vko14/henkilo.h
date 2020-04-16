#pragma once
#include <string>
#include "osoite.h"

using namespace std;

class henkilo{
public:
    henkilo(const henkilo& aHenkilo);
    henkilo();
    henkilo(bool kysy);
    henkilo(const string& nimiIn, int ikaIn);
    henkilo(const string& aNimi, int aIka, const osoite& aOsoite);
    ~henkilo();
    void setNimi(const string& uusiNimi);
    string getNimi() const;
    void setIka(const int uusiIka);
    int getIka() const;
    void setOsoite(const osoite& aOsoite);
    osoite getOsoite() const;
    void tulostaHenkilonTiedot() const;
    void kysele();

private:

    string nimi;
    int ika;
    osoite Osoite;

};
