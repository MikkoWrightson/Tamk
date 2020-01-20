#include "Omakirjasto.h"
using namespace std;


int main()
{
	// Koska tein kaikki tehtävät samoihin tiedostoihin ohjlema ensin kysyy viikon 8 tehtävänumeron,
	// sitten vasta viikon 7 tehtävistä. 
	int valinta = '0';
	do {			// Pyöritetään ohjelmaa kunnes käyttäjä haluaa lopettaa
		cout << "Valitse tehtava viikon 8 tehtavanumeroista(2-5, L = lopeta):";
		cin >> valinta; 

		switch (valinta) {
		/*case 'l': 
			break;
		case'L':
			break;
		*/
		case 2: {												//siirrytään viikon 7 tehtäviin
			cout << "Valitse viikon 7 tehtavanro(1-4): ";	
			int tehtava;
			cin >> tehtava;

			switch (tehtava) {
			case 1: {	//Viikon 7 teht 1
				cout << "syota nelioitava:";
				float input;
				cin >> input;
				float output = nelio(input);
				cout << output << endl;
				break; }

			case 2: {	//Viikon 7 teht 2
				cout << "Syota suorakaiteen leveys: ";
				float input;
				cin >> input;
				cout << "Syota suorakaiteen korkeus: ";
				float input1;
				cin >> input1;
				float pintaAla = suorakaide(input, input1);
				cout << pintaAla << endl;
				break; }

			case 3: {	//Viikon 7 teht 3
				cout << "Syota ajettava matka kilometreina: ";
				float matka;
				cin >> matka;
				cout << "Syota auton kulutus: ";
				float kulutus;
				cin >> kulutus;
				cout << "Syota polttoaineen hinta: ";
				float hinta;
				cin >> hinta;
				float tulos = matkanHinta(matka, kulutus, hinta);
				cout << tulos << endl;
				break; }

			case 4: {	//Viikon 7 teht 4
				cout << "Syota tuntimaara: ";
				int tuntiMaara;
				cin >> tuntiMaara;
				int palkka = palkkaLaskuri(tuntiMaara);
				cout << palkka << endl;
				break; }

			default: {
				cout << "virheellinen syote" << endl;
			}
		}
			break;
		}

		case 3: {	//Takaisin viikon 8 tehtäviin, teht 3
			virtaLaskuri();
			break;
		}


		case 4: {	//Viikon 8 teht 4
			sulake();
			break;
		}

		case 5: {	//Viikon 8 teht 5
			int rivi[7];
			int pallo = 41;
			srand(time(NULL));

				for (int i = 0; i < 7; i++) {
					rivi[i] = rand() % 40 + 1;
				}

			
			cout << endl << endl;
			sort(rivi, rivi + 7);
			for (int i = 0; i < 7; i++) {
				cout << rivi[i] << "  ";
			}
			cout << endl;
			break;
		}

				/*En tajua mikä näissä menee väärin, tässä väärin menneet ratkasut tohon lisätehtävään.
				https://pastebin.com/SAP8TakN
				https://pastebin.com/kurznxTx
				Näistäkin tietty oli miljoonia eri iteraatioita mut joku näissä meni vikaan aina.
				Pyydän joulupukilta sitä et se kertoo miks toi std::find aina palautti arvoks true. 
				*/

		}
	} while (valinta != 'l' && valinta != 'L');
	
	return 0;
}

