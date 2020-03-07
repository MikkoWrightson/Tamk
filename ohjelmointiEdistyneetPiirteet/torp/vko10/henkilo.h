#pragma once
#include <string>
using namespace std;

class Henkilo{
public:

    //metodit eli j'senfunktiot
    void tervehdi();
    void setNimi(string uusiNimi);
    string getNimi();
    void setIka(int uusiIka);
    int getIka();

private:
    //tietoj'senet, j'senmuuttujat
    string nimi;
    int ika;

};
