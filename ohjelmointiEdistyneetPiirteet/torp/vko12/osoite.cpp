#include "osoite.h"
#include <string>
#include <iostream>

osoite::osoite() : katuosoite("N/A"), postinumero("N/A"), kunta("N/A"){

}
osoite::osoite(string aKatuosoite, string aPostinumero, string aKunta) : katuosoite(aKatuosoite), postinumero(aPostinumero), kunta(aKunta){

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
void osoite::setKatuosoite(string aKatuosoite){
    katuosoite = aKatuosoite;
}
void osoite::setPostinumero(string aPostinmuero){
    postinumero = aPostinmuero;
}
void osoite::setKunta(string aKunta){
    kunta = aKunta;
}
void osoite::tulostaTiedot() const{
    cout << "Katuosoite: " << katuosoite << endl;
    cout << "Postinumero: " << postinumero << endl;
    cout << "Kunta: " << kunta << endl;
}