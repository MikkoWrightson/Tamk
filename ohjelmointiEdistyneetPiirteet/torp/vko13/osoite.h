#pragma once
#include <string>

using namespace std;

class osoite
{
public:
    osoite();
    osoite(const string& aKatuosoite, const string& aPostinumero, const string& aKunta);
    ~osoite();
    string getKatuosoite() const;
    string getPostinumero() const;
    string getKunta() const;
    void setKatuosoite(const string& aKatuosoite);
    void setPostinumero(const string& aPostinmuero);
    void setKunta(const string& aKunta);
    void tulostaTiedot() const;
    void kysele();
private:
    string katuosoite;
    string postinumero;
    string kunta;
};