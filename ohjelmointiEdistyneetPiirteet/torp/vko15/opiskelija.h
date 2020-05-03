#pragma once
#include "opiskelija.h"
#include "henkilo.h"
#include <string>
#include <vector>
using namespace std;

class opiskelija : public henkilo::henkilo
{
public:
    opiskelija();
    opiskelija(const string& aNimi, int aIka, const osoite& aOsoite, const string& aOpiskelijanumero, const int aOpintopisteet);
    opiskelija(const opiskelija& aOpiskelija);
    ~opiskelija();
    string getOpiskelijanumero() const;
    void setOpiskelijanumero(int aOpiskelijanumero);
    void lisaaKurssi(const string& aSuoritetutKurssit);
    int getOpintopisteet() const;
    void setOpintopisteet(int aOpintopisteet);
    void lisaaOpintopiste();
    void kysele() const;


private:
    string opiskelijanumero;
    vector<string> suoritetutKurssit;
    int opintopisteet;
};

