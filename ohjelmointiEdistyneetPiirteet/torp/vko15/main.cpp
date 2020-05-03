#include <string>
#include <iostream>
#include <vector>
#include "paivays.h"
#include "henkilo.h"
#include "murtoluku.h"
#include "osoite.h"
#include "kalenterimerkinta.h"
#include "opettaja.h"
#include "opiskelija.h"
#include "Koulu.h"

char kysely(){
        char tester;
        std::cout << "1. Lisaa opettaja\n2. Lisaa opettajalle kurssi";
        std::cout << "\n3. Lisaa opiskelija\n4. Lisaa opiskelijalle kurssi";
        std::cout << "\n5. Tulosta opettajat\n6. Tulosta opiskelijat\n7. Tulosta koulun tiedot";
        std::cout << "\nX lopeta ohjelma\nMita laitetaan? ";
        std::cin >> tester;
        return tester;
}

template<class henkilo> 
    henkilo find(vector<henkilo> henkilot, string toBeFound) {
    int where = -1;
    for(int i = 0; i < henkilot.size(); i++){
        if(henkilot[i].getNimi() == toBeFound){
            where = i;
            break;

        } else {
            where = -1;
        }
    }

    return where;
    
}


// template<class henkilo> 
//     henkilo find(vector<henkilo> henkilot, string name) {
//         for (int i = 0; i < henkilot.size(); i++) {
//             if (henkilot[i].getNimi() == name) {
//                 return henkilot[i];
//             }
//         }
//         throw "henkilo not found with name ";
    
// }

// int find(vector<henkilo> henkilot, string toBeFound){
//     int where = -1;
//     for(int i = 0; i < henkilot.size(); i++){
//         if(henkilot[i].getNimi() == toBeFound){
//             where = i;
//             break;

//         } else {
//             where = -1;
//         }
//     }

//     return where;

// }


int main(){

    char tester = 'a';
    koulu skole;
    do
    {
        tester = kysely();
        switch (tester){
            case '1':{
                opettaja uusiOpe;
                osoite aOsoite;
                string temp;
                int aIka;
                //std::cout << "Lisaa opettaja\n\n";
                //std::cout << "Opettajan nimi: ";
                //std::cin >> temp;
                //uusiOpe.setNimi(temp);
                //std::cout << "Opettajan ika: ";
                //std::cin >> aIka;
                uusiOpe.setIka(aIka);
                uusiOpe.kysele();
                std::cout << "Koulutusala: ";
                std::cin >> temp;
                uusiOpe.setKoulutusala(temp);

                skole.lisaaOpettaja(uusiOpe);
                break;
            }
            case '2':{
                string aKurssi,
                        ope;
                //int sijainti;
                std::cout << "Lisaa opettajalle kurssi\n\n";
                std::cout << "Kenelle lisataan kurssi?";
                std::cin >> ope;
                std::cout << "Mita lisataan? ";
                std::cin >> aKurssi;
                //mitä on muistinhallinta tai fiksu koodi?
                vector<opettaja> opet = skole.getOpettajat();
                //sijainti = find(opet, ope);

            

                

                break;
            }
            case '3':{
                opiskelija uusiOpiskelija;
                osoite aOsoite;
                string temp;
                int aIka;

                uusiOpiskelija.setIka(aIka);
                uusiOpiskelija.kysele();
                std::cout << "Koulutusala: ";
                std::cin >> temp;
                skole.lisaaOpiskelija(uusiOpiskelija);
                
                break;
            }
            case '4':{
                
                break;
            }
            case '5':{

                break;
            }
            case '6':{

                break;
            }
            case '7':{

                break;
            }
            default:{

                break;
            }
        }
    } while (tester != 'x' && tester != 'X');
    return 0;


















/*
    osoite foo("1", "1", "1"); 

    vector<henkilo*> ihmiset;

    ihmiset.push_back(new henkilo(true));
    ihmiset.push_back(new opiskelija("2", 2, foo, "2", 2));
    ihmiset.push_back(new opettaja("ope", 3, foo, "3"));
    ihmiset.push_back(new henkilo("asd", 4, foo));
        
    for (int i = 0; i < ihmiset.size(); i ++){
        std::cout << std::endl;
        ihmiset[i]->tulostaTiedot();
        std::cout << std::endl;
    }

    return 0;
*/
}