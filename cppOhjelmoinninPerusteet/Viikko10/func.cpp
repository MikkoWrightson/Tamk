#include "Kirjasto.h"
/*
void mikaTehtava(char& valinta) {
	cout << "Tehtava 1-4?(L=Lopeta)";
	cin >> valinta;
}*/
/*_____________________________Teht 1____________________________________________________________________*/
void tahkotJaMaarat(int& heittoMaara, int& tahko) {
	cout << "Montako tahkoa arpakuutiossa on?: ";
	cin >> tahko;
	cout << "Montako kertaa noppaa heitetaan?: ";
	cin >> heittoMaara;

}
/*_____________________________Teht 2____________________________________________________________________*/
void arvoLottonumerot(int taulukko[], int koko) {
	for (int i = 0; i < koko; i++) {
		taulukko[i] = rand() % 40 + 1;
	}


	sort(taulukko, taulukko + koko);

	for (int i = 1; i < koko; i++) {
		cout << taulukko[i] << " ";
	}

}
/*_____________________________Teht 3____________________________________________________________________*/

/*_____________________________Teht 4____________________________________________________________________*/

