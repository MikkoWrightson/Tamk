#pragma once
#include <string>

using namespace std;

class osoite
{
public:
    osoite();
    osoite(string aKatuosoite, string aPostinumero, string aKunta);
    ~osoite();
    string getKatuosoite() const;
    string getPostinumero() const;
    string getKunta() const;
    void setKatuosoite(string aKatuosoite);
    void setPostinumero(string aPostinmuero);
    void setKunta(string aKunta);
    void tulostaTiedot() const;
private:
    string katuosoite;
    string postinumero;
    string kunta;
};