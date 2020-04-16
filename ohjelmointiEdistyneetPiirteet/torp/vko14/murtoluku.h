#pragma once
using namespace std;

class murtoluku{
public:
    murtoluku();
    murtoluku(int osoittajaIn, int nimittajaIn);
    ~murtoluku();
    void setOsoittaja(int osoittajaIn);
    void setNimittaja(int nimittajaIn);
    int getOsoittaja() const;
    int getNimittaja() const;
    void kysyTiedot();
    void tulosta() const;
    void sievenna();
private:
    int osoittaja,
        nimittaja;
};