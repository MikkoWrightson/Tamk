#include <iostream>
#include <tgmath.h>
using namespace std;

int tehtava,
	nelioTulos,
	kaideTulos,
	input,
	input1,
	tuntiMaara,
	palkka=0;

float kmMaara,
	kulutus,
	pAineHinta,
	hintaTulos;

int palkkaLaskuri(int tuntiMaara) {
	for (int i = 0; i < tuntiMaara; i++) {
		if (i < 40) {
			palkka = palkka + 10;
		}
		else if (i > 40) {
			palkka = palkka + 15;
		}
	}
	return palkka;
}

float matkanHinta(float kmMaara, float kulutus, float pAineHinta) {
	hintaTulos = kmMaara * kulutus;
	hintaTulos = hintaTulos * pAineHinta;
	hintaTulos = hintaTulos / 100;
	return hintaTulos;
}

int suorakaide(int input, int input1) {
	kaideTulos = input * input1;
	return kaideTulos;
}

int nelio(int input){
	nelioTulos = pow(input, 2);
	return nelioTulos;
}

int main()
{
	cout << "Valitse tehtavanro(1-4): ";
	cin >> tehtava;
	
	if (tehtava == 1) {
		cout << "syota nelioitava:";
		cin >> input;

		nelio(input);
		cout << nelioTulos;
	}
	else if (tehtava == 2) {
		cout << "Syota suorakaiteen leveys: ";
		cin >> input;
		cout << "Syota suorakaiteen korkeus: ";
		cin >> input1;

		suorakaide(input, input1);
		cout << kaideTulos;
	}
	else if (tehtava == 3) {
		cout << "Syota ajettava matka kilometreina: ";
		cin >> kmMaara;
		cout << "Syota auton kulutus: ";
		cin >> kulutus;
		cout << "Syota polttoaineen hinta: ";
		cin >> pAineHinta;

		matkanHinta(kmMaara, kulutus, pAineHinta);
		cout << hintaTulos;
	}
	else if (tehtava == 4) {
		cout << "Syota tuntimaara: ";
		cin >> tuntiMaara;

		palkkaLaskuri(tuntiMaara);
		cout << palkka;
	}
	else
		cout << "virheellinen syote" << endl;
}

