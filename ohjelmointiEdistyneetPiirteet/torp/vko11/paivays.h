#pragma once
#define tammikuu 1
#define helmikuu 2
#define maaliskuu 3
#define huhtikuu 4
#define toukokuu 5
#define kesakuu 6
#define heinakuu 7
#define elokuu 8
#define syyskuu 9
#define lokakuu 10
#define marraskuu 11
#define joulukuu 12

class paivays{
public:
    paivays();
    ~paivays();
    paivays(int paivaIn, int kuukausiIn, int vuosiIn);
    void setPaiva(int paivaInput);
    void setKuukausi(int kkInput);
    void setVuosi(int vuosiInput);
    int getPaiva();
    int getKuukausi();
    int getVuosi();
    void tulostaPaivays();
    void setPaivays();
    void lisaaPaiva();

private:
    bool setPaiva();
    int paiva = 0,
        kuukausi = 0,
        vuosi = 0;

};