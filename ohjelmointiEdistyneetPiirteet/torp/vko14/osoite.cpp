#include "osoite.h"
#include <string>
#include <iostream>

osoite::osoite() : katuosoite("N/A"), postinumero("N/A"), kunta("N/A"){

}
osoite::osoite(const string& aKatuosoite, const string& aPostinumero, const string& aKunta) : katuosoite(aKatuosoite), postinumero(aPostinumero), kunta(aKunta){

}
osoite::~osoite(){

}
string osoite::getKatuosoite() const{
    return katuosoite;
}
string osoite::getPostinumero() const{
    return postinumero;
}
string osoite::getKunta() const{
    return kunta;
}
void osoite::setKatuosoite(const string& aKatuosoite){
    katuosoite = aKatuosoite;
}
void osoite::setPostinumero(const string& aPostinmuero){
    postinumero = aPostinmuero;
}
void osoite::setKunta(const string& aKunta){
    kunta = aKunta;
}
void osoite::tulostaTiedot() const{
    cout << "Katuosoite: " << katuosoite << endl;
    cout << "Postinumero: " << postinumero << endl;
    cout << "Kunta: " << kunta << endl;
}
void osoite::kysele(){
    string aKatu,
            aPnro,
            aKunta;
    cout << "Anna katuosoite: ";
    cin >> aKatu;
    cout << "Anna postinumero: ";
    cin >> aPnro;
    cout << "Anna kunta: ";
    cin >> aKunta;

    setKatuosoite(aKatu);
    setPostinumero(aPnro);
    setKunta(aKunta);
}