#pragma once
#include <string>
#include "paivays.h"
using namespace std;

class kalenterimerkinta{
public:
    kalenterimerkinta();
    kalenterimerkinta(const paivays& aPvm, const string& aAsia, bool aMuistutus);
    kalenterimerkinta(const kalenterimerkinta& aKalenterimerkinta);
    ~kalenterimerkinta();
    
    void setPVM(const paivays& aPvm);
    void setAsia(const string& aAsia);
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