#include <iostream>
#include <string>
#include "henkilo.h"
using namespace std;

//class (luokka) tai struct koostuu tyypillisesti
//1. tietojasenista eli jasenmuuttujista esim nimi ja ika
// - attribuutti, member variable, property
//2. jasenfunktioista eli metodeista
//  - method, member function


// Henkiloluokan esittelu, yleensa (.h tiedostoon eli Henkilo.h)
/*class Henkilo{
public:


private:
    //tietoj'senet, j'senmuuttujat
    string nimi;
    int ika;

};
*/

int main(){
    Henkilo kalle; //Henkilo on luokka, kalle on luokan olio(muuttuja)
    kalle.setNimi("Kalle");
    kalle.setIka( 20 );
    kalle.tervehdi();

    Henkilo ville;
    ville.setNimi("Ville");
    ville.setIka( 30 );

    kalle.tervehdi();
    ville.tervehdi();

    return 0;
}