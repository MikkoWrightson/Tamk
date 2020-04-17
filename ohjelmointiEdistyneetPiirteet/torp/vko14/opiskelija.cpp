
#include "opiskelija.h"
#include "henkilo.h"
#include<string>
#include<vector>
#include<iostream>

opiskelija::opiskelija()
{

}
opiskelija::opiskelija(const string& aNimi, int aIka, const osoite& aOsoite, const string& aOpiskelijanumero, const int aOpintopisteet)
: henkilo(aNimi, aIka, aOsoite), opiskelijanumero(aOpiskelijanumero), opintopisteet(aOpintopisteet){

}

opiskelija::opiskelija(const opiskelija& aOpiskelija) : henkilo(aOpiskelija.getNimi(), aOpiskelija.getIka(), aOpiskelija.getOsoite()), opiskelijanumero(aOpiskelija.opiskelijanumero), suoritetutKurssit(aOpiskelija.suoritetutKurssit), opintopisteet(aOpiskelija.opintopisteet) 
{
    
}
opiskelija::~opiskelija()
{

}
string opiskelija::getOpiskelijanumero() const
{
    return opiskelijanumero;
}
void opiskelija::setOpiskelijanumero(int aOpiskelijanumero)
{
    opiskelijanumero = aOpiskelijanumero;
}
void opiskelija::lisaaKurssi(const string& aSuoritetutKurssit)
{
    suoritetutKurssit.push_back(aSuoritetutKurssit);
}
int opiskelija::getOpintopisteet() const
{
    return opintopisteet;
}
void opiskelija::setOpintopisteet(int aOpintopisteet)
{
    opintopisteet = aOpintopisteet;
}
void opiskelija::lisaaOpintopiste()
{
    opintopisteet++;
}