#include"Omakirjasto.h"
using namespace std;


//Viikko 7

float nelio(float input) {
	float tulos = pow(input, 2);
	return tulos;
}

float suorakaide(float input, float input1) {
	int tulos = input * input1;
	return tulos;
}

float matkanHinta(float kmMaara, float kulutus, float pAineHinta) {
	float laskuri = kmMaara * kulutus;
	laskuri = laskuri * pAineHinta;
	laskuri = laskuri / 100;
	return laskuri;
}

int palkkaLaskuri(int tuntiMaara) {
	int laskuri = 0;
	for (int i = 0; i < tuntiMaara; i++) {
		if (i < 40) {
			laskuri = laskuri + 10;
		}
		else if (i > 40) {
			laskuri = laskuri + 15;
		}
	}
	return laskuri;
}

//Viikko 8

void virtaLaskuri() {
	cout << "Syota jannite: ";
	float u;
	cin >> u;
	cout << "Syota resistanssi: ";
	float r;
	cin >> r;

	float tulos = u / r;
	cout << "Virta on "<< tulos << "A" << endl;
	
}

void sulake() {
	cout << "Syota tehonkulutus: ";
	int p;
	cin >> p;
	int i = p / 220;

	if (i > 20)
		cout << "Laitteen taakse tarvitaan useampi sulake" << endl;
	else if (i > 16)
		cout << "Kayta 20A sulaketta" << endl;
	else if (i >= 10)
		cout << "Kayta 16A sulaketta" << endl;
	else if (i < 10)
		cout << "Kayta 10A sulaketta" << endl;


}

