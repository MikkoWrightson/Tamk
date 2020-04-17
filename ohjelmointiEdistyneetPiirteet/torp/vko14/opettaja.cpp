#include "osoite.h"
#include "opettaja.h"
#include <iostream>
#include <string>
using namespace std;

opettaja::opettaja(){
    
}
opettaja::opettaja(const string& aNimi, int aIka, const osoite& aOsoite, const string& aKoulutusala)
: henkilo(aNimi, aIka, aOsoite), koulutusala(aKoulutusala){
}

opettaja::opettaja(const opettaja& aOpettaja) : henkilo(aOpettaja.getNimi(), aOpettaja.getIka(), aOpettaja.getOsoite()), koulutusala(aOpettaja.koulutusala){

}

opettaja::~opettaja()
{
}

void opettaja::setKoulutusala(const string& aKoulutusala)
{
    koulutusala = aKoulutusala;
}

string opettaja::getKoulutusala() const
{
    return koulutusala;
}

void opettaja::lisaaKurssi(const string& aKurssi)
{
    kurssit.push_back(aKurssi);
}

void opettaja::tulostaTiedot() const
{
    cout << "Opettajan tiedot\n";
    cout << getNimi() << endl;
    cout << "Ika: " << getIka() << endl;
    cout << "Osoite: " << endl;
    tulostaTiedot();
    cout << "Koulutusala: " << koulutusala << endl;
    cout << "Vastuukurssit" << endl;
    for(string s : kurssit){
        cout << s << endl;
    }


}

void opettaja::poistaKurssi(const string& pKurssi){
    int poistettava = -1;
    for(int i = 0; i < kurssit.size(); i++){
        if(kurssit[i] == pKurssi){
            poistettava = i;
            break;

        }else{
            poistettava = -1;
        }
    }
    if (poistettava > 0){
        kurssit.erase(kurssit.begin() + poistettava);
    }else if (poistettava == -1){
        cout << "Kurssia ei loydy\n";
    }
}