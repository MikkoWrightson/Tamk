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
    int getPaiva() const;
    int getKuukausi() const;
    int getVuosi() const;
    void tulostaPaivays() const;
    void setPaivays(int aPaiva, int aKuukausi, int aVuosi);
    void lisaaPaiva();
    void kyselePvm();

private:
    bool setPaiva();
    int paiva,
        kuukausi,
        vuosi;

};