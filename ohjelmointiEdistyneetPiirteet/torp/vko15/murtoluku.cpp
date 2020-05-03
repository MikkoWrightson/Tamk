#include "murtoluku.h"
#include <iostream>
#include <algorithm>
using namespace std;

murtoluku::murtoluku(){
    osoittaja = 0;
    nimittaja = 0;
}
murtoluku::murtoluku(int osoittajaIn, int nimittajaIn){
    osoittaja = osoittajaIn;
    nimittaja = nimittajaIn;
}
murtoluku::~murtoluku(){

}
void murtoluku::setOsoittaja(int osoittajaIn){
    osoittaja = osoittajaIn;
}
void murtoluku::setNimittaja(int nimittajaIn){
    nimittaja = nimittajaIn;
}
int murtoluku::getOsoittaja() const{
    return osoittaja;
}
int murtoluku::getNimittaja() const{
    return nimittaja;
}
void murtoluku::kysyTiedot(){
    cout << "Anna osoittaja: ";
    cin >> osoittaja;
    cout << "Anna nimittaja: ";
    cin >> nimittaja;
}
void murtoluku::tulosta() const{
    cout << osoittaja << "/" << nimittaja;
}
void murtoluku::sievenna(){
    int gcd;
    gcd = __gcd(osoittaja, nimittaja);
    nimittaja = nimittaja / gcd;
    osoittaja = osoittaja / gcd;
    //cout << gcd << endl;
   //if (osoittaja == 0){
    //nimittaja = nimittaja;
   //}else{
   //    nimittaja = nimittaja % osoittaja;
   //    sievenna();
   //}
}