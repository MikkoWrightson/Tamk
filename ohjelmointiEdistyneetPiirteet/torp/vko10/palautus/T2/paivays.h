#pragma once
class paivays{
public:
    void setPaiva(int paivaInput);
    void setKuukausi(int kkInput);
    void setVuosi(int vuosiInput);
    int getPaiva();
    int getKuukausi();
    int getVuosi();
    void tulostaPaivays();

private:
    int paiva = 0,
        kuukausi = 0,
        vuosi = 0;

};