#include "murtoluku.h"
#include <iostream>
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
int murtoluku::getOsoittaja(){
    return osoittaja;
}
int murtoluku::getNimittaja(){
    return nimittaja;
}
void murtoluku::kysyTiedot(){
    cout << "Anna osoittaja: ";
    cin >> osoittaja;
    cout << "Anna nimittaja: ";
    cin >> nimittaja;
}
void murtoluku::tulosta(){
    cout << osoittaja << "/" << nimittaja;
}
void murtoluku::sievenna(){

}