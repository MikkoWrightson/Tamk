#include "paivays.h"
#include <iostream>
#define piste << "." <<

paivays::~paivays(){
    
}

paivays::paivays(int paivaIn, int kuukausiIn, int vuosiIn){
    setVuosi(vuosiIn);
    setKuukausi(kuukausiIn);
    setPaiva(paivaIn);
    
}


paivays::paivays(){

}

void paivays::setPaiva(int paivaInput){
    if(paivaInput > 0){
        switch (kuukausi){
            case 0:{
                if(paivaInput < 32)
                    paiva = paivaInput;
                    break;
            }
            case tammikuu:{
                if(paivaInput < 32)
                    paiva = paivaInput;
                    break;
            }
            case helmikuu:{
                if(paivaInput < 28)
                    paiva = paivaInput;
                    break;
            }
            case maaliskuu:{
                if(paivaInput < 32)
                    paiva = paivaInput;
                    break;
            }
            case huhtikuu:{
                if(paivaInput < 31)
                    paiva = paivaInput;
                    break;
            }
            case toukokuu:{
                if(paivaInput < 32)
                    paiva = paivaInput;
                    break;
            }
            case kesakuu:{
                if(paivaInput < 31)
                    paiva = paivaInput;
                    break;
            }
            case heinakuu:{
                if(paivaInput < 32)
                    paiva = paivaInput;
                    break;
            }
            case elokuu:{
                if(paivaInput < 32)
                    paiva = paivaInput;
                    break;
            }
            case syyskuu:{
                if(paivaInput < 31)
                    paiva = paivaInput;
                    break;
            }
            case lokakuu:{
                if(paivaInput < 32)
                    paiva = paivaInput;
                    break;
            }
            case marraskuu:{
                if(paivaInput < 31)
                    paiva = paivaInput;
                    break;
            }
            case joulukuu:{
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
        kuukausi = kkInput;
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

void paivays::setPaivays(){
    int temp;
    std::cout << "Syota vuosi: ";
    std::cin >> temp;
    setVuosi(temp);
    std::cout << "Syota kuukausi: ";
    std::cin >> temp;
    setKuukausi(temp);
    std::cout << "Syota paiva: ";
    std::cin >> temp;
    setPaiva(temp);
}

void paivays::lisaaPaiva(){
    bool flag;
    paiva++;
    do{
        setPaiva();
    }while(flag == false);
}

bool paivays::setPaiva(){
switch (kuukausi){
        case tammikuu:{
            if(paiva > 31){
                paiva = 1;
                kuukausi++;
                return true;
                }else{
                    return true;
                }
                break;
        }
        case helmikuu:{
            if(paiva > 28){
                paiva = 1;
                kuukausi++;
                return true;
                }else{
                    return true;
                }
                break;
        }
        case maaliskuu:{
            if(paiva > 31){
                paiva = 1;
                kuukausi++;
                return true;
                }else{
                    return true;
                }
                break;
        }
        case huhtikuu:{
            if(paiva > 30){
                paiva = 1;
                kuukausi++;
                return true;
                }else{
                    return true;
                }
                break;
        }
        case toukokuu:{
            if(paiva > 31){
                paiva = 1;
                kuukausi++;
                return true;
                }else{
                    return true;
                }
                break;
        }
        case kesakuu:{
            if(paiva > 30){
                paiva = 1;
                kuukausi++;
                return true;
                }else{
                    return true;
                }
                break;
        }
        case heinakuu:{
            if(paiva > 31){
                paiva = 1;
                kuukausi++;
                return true;
                }else{
                    return true;
                }
                break;
        }
        case elokuu:{
            if(paiva > 31){
                paiva = 1;
                kuukausi++;
                return true;
                }else{
                    return true;
                }
                break;
        }
        case syyskuu:{
            if(paiva > 30){
                paiva = 1;
                kuukausi++;
                return true;
                }else{
                    return true;
                }
                break;
        }
        case lokakuu:{
            if(paiva > 31){
                paiva = 1;
                kuukausi++;
                return true;
                }else{
                    return true;
                }
                break;
        }
        case marraskuu:{
            if(paiva > 30){
                paiva = 1;
                kuukausi++;
                return true;
                }else{
                    return true;
                }
                break;
        }
        case joulukuu:{
            if(paiva > 31){
                paiva = 1;
                kuukausi = 1;
                vuosi++;
                return true;
                }else{
                    return true;
                }
                break;
        }
        default:{
            return false;
            break;
        }
    }
}