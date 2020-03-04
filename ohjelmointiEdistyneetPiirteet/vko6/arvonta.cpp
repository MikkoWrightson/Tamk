#include "func.h"
#include <iostream>
#include <stdlib.h>
#include <time.h>// for seeding srand
#include <algorithm> //for std::find
#include <iterator> //for std::begin, std::end

using namespace std;
// se toimii toistaseks ÄLÄ KOSKE DONT TOUCH IF NOT BROKEN
void rivinArvonta(int arvottuRivi[]){   
    int rivi[7];
    int pallo = 41;
    srand(time(NULL));

    for (int i = 0; i < 7; i++) {
            pallo = rand() % 40 + 1;
            //Testataan onko juuri arvottu pallo jo arrayssa, jos on niin arvotaan samalle paikalle uusi arvo
            bool exists = (find(begin(rivi), end(rivi), pallo) != end(rivi));
            if (exists == false) {
                    rivi[i] = pallo;
            }else
                    i = i - 1;
    }
    //järkätään nättiin nousevaan järjestykseen
    sort(rivi, rivi + 7);
    

    for (int i = 0; i < 7; i++){
        arvottuRivi[i] = rivi[i];
    }
}
