#pragma once
#include <string>
using namespace std;

class henkilo{
public:
    henkilo();
    henkilo(string nimiIn, int ikaIn);
    ~henkilo();
    void setNimi(string uusiNimi);
    string getNimi();
    void setIka(int uusiIka);
    int getIka();
    void tulostaHenkilonTiedot();

private:

    string nimi;
    int ika;

};
