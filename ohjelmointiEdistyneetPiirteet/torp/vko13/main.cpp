#include <string>
#include <iostream>
#include "paivays.h"
#include "henkilo.h"
#include "murtoluku.h"
#include "osoite.h"
#include "kalenterimerkinta.h"

using namespace std;

int main(){
    
    osoite OSOITE("Teiskontie", "33540", "Tampere");
    OSOITE.tulostaTiedot();
    henkilo kalle("Kalle", 30, OSOITE);
    kalle.tulostaHenkilonTiedot();
    
    paivays randompvm(12, 3, 2020);

    kalenterimerkinta uusimerkinta(randompvm, "mee toihin", true);
    uusimerkinta.tulostaMerkinta();
    kalenterimerkinta toka;
    toka.kysyTiedot();
    randompvm = toka.getPvm();
    randompvm.tulostaPaivays();

    
    return 0;
}