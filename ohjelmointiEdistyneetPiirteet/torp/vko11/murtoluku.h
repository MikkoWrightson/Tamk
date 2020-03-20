#pragma once
using namespace std;

class murtoluku{
public:
    murtoluku();
    murtoluku(int osoittajaIn, int nimittajaIn);
    ~murtoluku();
    void setOsoittaja(int osoittajaIn);
    void setNimittaja(int nimittajaIn);
    int getOsoittaja();
    int getNimittaja();
    void kysyTiedot();
    void tulosta();
    void sievenna();
private:
    int osoittaja,
        nimittaja;
};