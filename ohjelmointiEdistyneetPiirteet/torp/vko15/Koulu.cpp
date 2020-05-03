#include "Koulu.h"
#include "opettaja.h"
#include "opiskelija.h"
#include <string>
#include <vector>
#include <iostream>

using namespace std;

    koulu::koulu(){


    }

    koulu::~koulu(){

    }

    koulu::koulu(const vector<opiskelija>& ollit){
        setOpiskelijat(ollit);
    }

    koulu::koulu(const vector<opettaja>& otot){
        setOpettajat(otot);
    }

    koulu::koulu(const opiskelija& olli){
        lisaaOpiskelija(olli); 
    }

    koulu::koulu(const opettaja& otto){
        lisaaOpettaja(otto);
    }

    koulu::koulu(const string& nimi) : koulunNimi(nimi){
        
    }

    void koulu::lisaaOpiskelija(const opiskelija& olli){
        opiskelijat.push_back(olli);
    }

    void koulu::lisaaOpettaja(const opettaja& otto){
        opettajat.push_back(otto);
    }

    void koulu::tulostaKaikkiTiedot() const{
        std::cout << "\nKoulun nimi on " << koulunNimi <<"\n";
        
        for(int i = 0; i < sizeof(opettajat); i++){
            opettajat[i].tulostaTiedot();
        }        
        for(int i = 0; i < sizeof(opiskelijat); i++){
            opiskelijat[i].tulostaTiedot();
        } 

    }

    vector<opettaja> koulu::getOpettajat() const{
        return opettajat;
    }

    vector<opiskelija> koulu::getOpiskelijat() const{
        return opiskelijat;
    }

    string koulu::getKoulunNimi() const{
        return koulunNimi;
    }

    void koulu::setOpiskelijat(const vector<opiskelija>& ollit){
        opiskelijat = ollit;
    }

    void koulu::setOpettajat(const vector<opettaja>& otot){
        opettajat = otot;
    }

    void koulu::setKoulunNimi(const string& nimi){
        koulunNimi = nimi;
    }