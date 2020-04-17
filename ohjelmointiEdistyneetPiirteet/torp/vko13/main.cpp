#include <string>
#include <iostream>
#include <vector>
#include "paivays.h"
#include "henkilo.h"
#include "murtoluku.h"
#include "osoite.h"
#include "kalenterimerkinta.h"
/*
T5:
En ihan tajua millä logiikalla ohjelma kutsuu välillä nuita copystructoreita
ja destructoreita. 

Kun luon ensimmäiset 3 henkilöä ohjelma käyttäytyy suht. loogisesti.
Tällöin ohjelma ajaa ensin konstruktorin, kyselee, ja ajaa copystruktorin ja destruktorin.
Jostain syystä ensimmäisen hlön kanssa ohjelma kopioi vain kerran
kun taas toisen kanssa tulee 2 copystruktoria ja destruktoria 
ja kolmannen kanssa 3 molempia.

En tajua ihan miksi neljännen olion luodessani ohjelma palaa käyttämään
vain kerran näitä metodeita.


Tehtävässähän oli tarkoituksena todeta kuinka uudelleen ja uudelleen datan
kopiointi edestakaisin aiheuttaa tehottomuutta, ja tämän kyllä huomaa
kun ajaa näitä eri versioita perättäin. Viittauksena ajaessa ei tätä tarvitse
tehdä ja kellosyklejä säästyy tusinoittain.
*/


int kysy();

int main(){
    
    int nelivaivisi = 0;
    cout << "T4 vai T5: ";
    cin >> nelivaivisi;
   
    if(nelivaivisi == 4){
       
        int watdo = kysy();
        vector<henkilo*> henkilot;

        do{
            switch (watdo){
                case 1 : { //lisaa hlo
                    henkilot.push_back(new henkilo(true));//tää nyt on vähä tällee tyhmästi tehty
                    break;
                }
                case 2 : { //poista hlo
                    string temp;
                    int poistettava = -1;
                    std::cout << "Kuka poistetaan? ";
                    std::cin >> temp;
                    for(int i = 0; i < henkilot.size(); i++){
                        if(henkilot[i]->getNimi() == temp){
                            poistettava = i;
                            break;

                        }else{
                            poistettava = -1;
                        }
                    }
                    if (poistettava > 0){
                        delete henkilot[poistettava];
                        henkilot.erase(henkilot.begin() + poistettava);
                    }else if (poistettava == -1){
                        cout << "henkiloa ei loydy\n";
                    }

                    break;
                }
                case 3 : { // tulosta hlot
                    
                    for (int i = 0; i < henkilot.size(); i++){
                        cout << endl;
                        henkilot[i]->tulostaHenkilonTiedot();
                        cout << endl;
                    }


                    break;
                }
                case 4 : { // lopeta
                    break;
                }
                default : {
                    std::cout << "Virheellinen syote\n";
                    break;
                }

            }
            if(watdo != 4){
                watdo = kysy();
            }
        }while(watdo != 4);
        for(henkilo* p : henkilot){
            delete p;
        }
        //henkilot.clear;
        return 0;


    }else if (nelivaivisi == 5){
                
                
                int watdo = kysy();
        vector<henkilo> henkilot;

        do{
            switch (watdo){
                case 1 : { //lisaa hlo
                    henkilot.push_back(henkilo(true));//tää nyt on vähä tällee tyhmästi tehty
                    break;
                }
                case 2 : { //poista hlo
                    string temp;
                    int poistettava = -1;
                    std::cout << "Kuka poistetaan? ";
                    std::cin >> temp;
                    for(int i = 0; i < henkilot.size(); i++){
                        if(henkilot[i].getNimi() == temp){
                            poistettava = i;
                            break;

                        }else{
                            poistettava = -1;
                        }
                    }
                    if (poistettava > 0){
                        henkilot.erase(henkilot.begin() + poistettava);
                    }else if (poistettava == -1){
                        cout << "henkiloa ei loydy\n";
                    }

                    break;
                }
                case 3 : { // tulosta hlot
                    
                    for (int i = 0; i < henkilot.size(); i++){
                        cout << endl;
                        henkilot[i].tulostaHenkilonTiedot();
                        cout << endl;
                    }


                    break;
                }
                case 4 : { // lopeta
                    break;
                }
                default : {
                    std::cout << "Virheellinen syote\n";
                    break;
                }

            }
            if(watdo != 4){
                watdo = kysy();
            }
        }while(watdo != 4);


        
        return 0;
    }
}

int kysy(){
    int temp;
    std::cout << "\nMita haluat tehda?\n1. Lisaa henkilo\n2. Poista henkilo\n3. Tulosta henkilo\n4. Lopeta\n";
    std:: cin >> temp;
    return temp;
}