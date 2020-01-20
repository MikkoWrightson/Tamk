#include "Kirjasto.h"

//setlocale(LC_ALL, "fi_FI.utf8");


struct Luettelo
{
	string nimi;
	string numero;
	
};

Luettelo UusiNumero(void) {
	string nimi;
	string numero;

	cout << "Anna nimi: ";
	cin >> nimi;

	cout << "Anna numero: ";
	cin >> numero;

	return Luettelo{ nimi, numero };
}

int main()
{
	char valinta = 'x';
	//cout << "Tehtava 1-4?(L=Lopeta)";
	//cin >> valinta;

	do {
		cout << "Tehtava 1-4?(L=Lopeta): "; //Valitaan että mitä viikon tehtäviä testataan, L=lopeta.
		cin >> valinta;
		srand(time(NULL));
		switch (valinta) {
			/*____________________________________Teht 1_____________________________________________________________*/
		case '1': {
			cout << "ARPAKUUTIO\n\n";
			int tahko;
			int heittoMaara;

			tahkotJaMaarat(tahko, heittoMaara);   //Tulee hieman siistimpää ja luettavaampaa kun kysellään nämä inputit funktiossa,
													// Tein kylläkin version jossa arpominen tapahtuu funktiossa mutta koin tämän hieman hyödyllisemmäksi
													//Luettavuuden kannalta, vaikkakin jossain suuremmassa ohjelmassa saatettaisiin mieluummin hyödyntää sitä arpomista erillisessä funktiossa

			srand(time(NULL));		//Syötellään randia ja sitten aletaan heittelemään
			vector<int> tulokset;
			for (int i = 0; i < heittoMaara; i++) {
				tulokset.push_back({ rand() % tahko + 1 });
			}

			for (int i = 0; i < tulokset.size(); i++) {
				cout << tulokset[i] << endl;
			}

			break;
		}
				  /*____________________________________Teht 2_____________________________________________________________*/
		case '2': {
			cout << "LOTTOTAULUKKO\n\n";

			const int koko = 7;
			int lottoTaulukko[koko];
			arvoLottonumerot(lottoTaulukko, koko);

			break;
		}
				  /*____________________________________Teht 3_____________________________________________________________*/
		case '3': {
			cout << "TIKANHEITTO\n\n";

			int tikkataulukko[5];
			for (int i = 0; i < 5; i++) {
				cout << "Tikanheittajan pisteet kierroksella " << i + 1 << ":";
				cin >> tikkataulukko[i];
				cout << endl;
			}

			sort(tikkataulukko, tikkataulukko + 5);

			cout << "Tikanheittajan parhaat pisteet viidelta kierrokselta oli " << tikkataulukko[4] << endl;

			break;
		}
				  /*____________________________________Teht 4_____________________________________________________________*/
		case '4': {
			vector<Luettelo> contacts;
			cout << "PUHELINLUETTELO\n\n";
			char v = '0';
	
			do {
				cout << "1. Lisaa kontakti 2. Hae kontakti 3. Lopeta (1-3): ";
				cin >> v;
				switch (v) {
				case '1': {
					contacts.push_back(UusiNumero());
					break;
				}
				case '2': {
					cout << "Mita haetaan?: ";
					string in;
					cin >> in;

					for (auto Luettelo : contacts) {
						if (Luettelo.nimi == in) {
							cout << Luettelo.nimi << "      " << Luettelo.numero << endl;
						}
					}
					break;
				}

				default: {
					if (v != '3')
						cout << "Virheellinen syote!" << endl;
					break;
				}
				}
				
			} while (v != '3');

				}
			break;
		
				  /*_________________________________________________________________________________________________*/
		default: {
			if (valinta == 'l');
			else if (valinta == 'L');
			else {
				cout << "Virheellinen syote\n";
			}
			break;
		}
		}
	} while (valinta != 'l' && valinta != 'L');
}