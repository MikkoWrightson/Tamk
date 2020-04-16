#include <string>
#include <iostream>
#include <vector>
#include "paivays.h"
#include "henkilo.h"
#include "murtoluku.h"
#include "osoite.h"
#include "kalenterimerkinta.h"
#include "opettaja.h"
#include "opiskelija.h"


int main(){

    // T4

    string nimi = "matti";
    int ika;
    osoite paikka;

    opettaja oletusope;
    opiskelija oletusoppija;
    opettaja paraope("asd", 69, paikka, "tite");
    opiskelija paraoppija();
    opettaja kopiope(oletusope);
    opiskelija kopioppilas(oletusoppija);

    //T5
    vector<henkilo*> ihmiset;

    ihmiset.push_back(new henkilo(true));
    ihmiset.push_back(new opiskelija);
    ihmiset.push_back(new opettaja);
    ihmiset.push_back(new henkilo);
        
    for (int i = 0; i < ihmiset.size(); i ++){
        std::cout << std::endl;
        ihmiset[i]->tulostaHenkilonTiedot();
        std::cout << std::endl;
    }

    return 0;

}