#pragma once
#include "opettaja.h"
#include "henkilo.h"
#include "osoite.h"
#include <string>
#include <vector>
using namespace std;

class opettaja : public henkilo
{

public:
    opettaja();
    opettaja(const string& aNimi, int aIka, const osoite& aOsoite, const string& aKoulutusala);
    opettaja(const opettaja& aOpettaja);
    ~opettaja();
    void setKoulutusala(const string& aKoulutusala);
    string getKoulutusala() const;
    void lisaaKurssi(const string& aKurssi);
    //string getKurssi();
    void tulostaTiedot()const;
    void poistaKurssi(const string& pKurssi);

private:
    string koulutusala;
    vector<string> kurssit;
};


