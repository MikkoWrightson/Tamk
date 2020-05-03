#pragma once
#include <string>
#include <vector>
#include "opettaja.h"
#include "opiskelija.h"
#include "henkilo.h"

using namespace std;

class koulu{
public:
    koulu();
    ~koulu();
    koulu(const opiskelija& olli);
    koulu(const opettaja& otto);
    koulu(const string& nimi);
    koulu(const vector<opiskelija>& ollit);
    koulu(const vector<opettaja>& otot);
    void lisaaOpiskelija(const opiskelija& olli);
    void lisaaOpettaja(const opettaja& otto);
    void tulostaKaikkiTiedot() const;
    vector<opettaja> getOpettajat() const;
    vector<opiskelija> getOpiskelijat() const;
    string getKoulunNimi() const;
    void setOpiskelijat(const vector<opiskelija>& ollit);
    void setOpettajat(const vector<opettaja>& otot);
    void setKoulunNimi(const string& nimi);

protected:
    vector<opettaja> opettajat;
    vector<opiskelija> opiskelijat;
    string koulunNimi;

private:
    //vector<opettaja> opettajat;
    //vector<opiskelija> opiskelijat;
    //string koulunNimi;

};
