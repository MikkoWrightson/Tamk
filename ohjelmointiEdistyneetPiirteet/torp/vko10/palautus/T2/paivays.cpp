#include "paivays.h"
#include <iostream>
#define piste << "." <<

void paivays::setPaiva(int paivaInput){
    if(paivaInput > 0){
        switch (kuukausi)
        {
            case 0:{
                if(paivaInput < 32)
                    paiva = paivaInput;
                    break;
            }
            case 1:{
                if(paivaInput < 32)
                    paiva = paivaInput;
                    break;
            }
            case 2:{
                if(paivaInput < 28)
                    paiva = paivaInput;
                    break;
            }
            case 3:{
                if(paivaInput < 32)
                    paiva = paivaInput;
                    break;
            }
            case 4:{
                if(paivaInput < 31)
                    paiva = paivaInput;
                    break;
            }
            case 5:{
                if(paivaInput < 32)
                    paiva = paivaInput;
                    break;
            }
            case 6:{
                if(paivaInput < 31)
                    paiva = paivaInput;
                    break;
            }
            case 7:{
                if(paivaInput < 32)
                    paiva = paivaInput;
                    break;
            }
            case 8:{
                if(paivaInput < 32)
                    paiva = paivaInput;
                    break;
            }
            case 9:{
                if(paivaInput < 31)
                    paiva = paivaInput;
                    break;
            }
            case 10:{
                if(paivaInput < 32)
                    paiva = paivaInput;
                    break;
            }
            case 11:{
                if(paivaInput < 31)
                    paiva = paivaInput;
                    break;
            }
            case 12:{
                if(paivaInput < 32)
                    paiva = paivaInput;
                    break;
            }
            default:{
                std::cout << "ERROR\n";
                break;
            }
        }
    }
}

void paivays::setKuukausi(int kkInput){
    if (kkInput > 0 && kkInput < 13){
        kuukausi = kkInput;
    }else{
        std::cout << "ERROR\n";
    }
}

void paivays::setVuosi(int vuosiInput){
    vuosi = vuosiInput;
}

int paivays::getPaiva(){
    return paiva;
}

int paivays::getKuukausi(){
    return kuukausi;
}

int paivays::getVuosi(){
    return vuosi;
}

void paivays::tulostaPaivays(){
    std::cout << paiva piste kuukausi piste vuosi << std::endl;
}
