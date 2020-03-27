#pragma once
#include <string>
#include "paivays.h"
using namespace std;

class kalenterimerkinta{
public:
    kalenterimerkinta();
    kalenterimerkinta(paivays aPvm, string aAsia, bool aMuistutus);
    ~kalenterimerkinta();
    void setPVM(paivays aPvm);
    void setAsia(string aAsia);
    void setMuistutus(bool aMuistutus);
    paivays getPvm() const;
    string getAsia() const;
    bool getMuistutus() const;
    void tulostaMerkinta() const;
    void kysyTiedot();
    
    
    
private:
    paivays pvm;
    string asia;
    bool muistutus;

};