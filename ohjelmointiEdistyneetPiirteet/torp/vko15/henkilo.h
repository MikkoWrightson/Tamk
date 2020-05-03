#pragma once
#include <string>
#include "osoite.h"
//#include "Koulu.h"

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
    virtual void tulostaTiedot() const;
    /*
    t2:
        jos on virtuaalinen funktio, ohjelma katsoo ajon aikana onko periytetyill' luokilla samannimist' metodia.
        Mik'li se l;ytyy, ohjelma k'ytt'' periytetyn luokan metodia.
    */


    void kysele();


   

   //t1: Periytetylle luokallekin private on privaattia, mutta protected antaa muokata 
   // niitä näissä tapauksissa. Eli siis tämä koodihan ei toimisi lainkaan mikäli Osoite ei olisi protected sillä sen 
   // luokassa on tulostaTiedot() -metodi myös jota kutsutaan opettajan tulostaTiedot()-metodissa.

protected:
    
    osoite Osoite;
    string nimi;
    int ika;

private:

    

};
