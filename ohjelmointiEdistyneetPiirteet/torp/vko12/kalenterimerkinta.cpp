#include <string>
#include "paivays.h"
#include "kalenterimerkinta.h"
#include <iostream>
using namespace std;

kalenterimerkinta::kalenterimerkinta(){

}
kalenterimerkinta::kalenterimerkinta(paivays aPvm, string aAsia, bool aMuistutus) : pvm(aPvm), asia(aAsia), muistutus(aMuistutus){

}

kalenterimerkinta::kalenterimerkinta(kalenterimerkinta& aKalenterimerkinta) : asia(aKalenterimerkinta.asia), muistutus(aKalenterimerkinta.muistutus){

}

kalenterimerkinta::~kalenterimerkinta(){

}
void kalenterimerkinta::setPVM(paivays aPvm){
    pvm = aPvm;
}
void kalenterimerkinta::setAsia(string aAsia){
    asia = aAsia;
}
void kalenterimerkinta::setMuistutus(bool aMuistutus){
    muistutus = aMuistutus;
}
paivays kalenterimerkinta::getPvm() const{
    return pvm;
}
string kalenterimerkinta::getAsia() const{
    return asia;
}
bool kalenterimerkinta::getMuistutus() const{
    return muistutus;
}
void kalenterimerkinta::tulostaMerkinta() const{
    pvm.tulostaPaivays();
    cout << endl << asia << endl;
    if (muistutus == true){
        cout << "Muistutus paalla\n";
    }else{
        cout << "Ei muistutusta\n";
    }

}
void kalenterimerkinta::kysyTiedot(){
    string tempString;
    char yn = 'x';

    pvm.kyselePvm();
    cout << "Anna syy merkinnallesi hei: ";
    cin >> tempString;
    setAsia(tempString);
    
    do{
        cout << "Haluatko muistutuksen(y/n): ";
        cin >> yn;
        if (yn == 'y' || yn == 'Y'){
            muistutus = true;
        }else if (yn == 'n' || yn == 'N'){
            muistutus = false;
        }else{
            cout << "Virheellinen syote\n";
        }
    }while(yn != 'y' && yn != 'Y' && yn != 'n' && yn != 'N');
}

