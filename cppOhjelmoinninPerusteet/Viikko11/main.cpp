#include <iostream>
#include <string>
#define väli << "  " <<

using namespace std;

/*Tehtävä 1------------------------------------------------------------------------------------------------------*/
struct Opiskelija {
	string etunimi;
	string sukunimi;
	string opiskelijanro;
	int opintopiste;

};
/*Tehtävä 2------------------------------------------------------------------------------------------------------*/
struct valtio {
	int asukasluku;
	double pinta;
	string johtaja;
};

Opiskelija olli;
/*Tehtävä 4------------------------------------------------------------------------------------------------------*/
void tulostaOpiskelijanTiedot(Opiskelija& olli) {
	cout << olli.etunimi väli olli.sukunimi << endl << olli.opiskelijanro << endl << olli.opintopiste << endl << endl;
}



/*Tehtävä 5------------------------------------------------------------------------------------------------------*/
Opiskelija luoOpiskelija(Opiskelija& otus) {
	cout << "Anna opiskelijan etunimi: ";
	cin >> otus.etunimi;
	cout << "Anna opiskelijan sukunimi: ";
	cin >> otus.sukunimi;
	cout << "Anna opiskelijan opiskelijanumero: ";
	cin >> otus.opiskelijanro;
	cout << "Anna opiskelijan suorittamat opintopisteet: ";
	cin >> otus.opintopiste;

	return otus;
}

/*---------------------------------------------------------------------------------------------------------------*/
int main() {
	setlocale(LC_ALL, "FIN");
	char tehtava = ' ';
	do {
		cout << "Valitse tehtävä 1-5(L - Lopeta): ";
		cin >> tehtava;
		switch (tehtava) {
			/*Tehtävä 1------------------------------------------------------------------------------------------------------*/
		case '1': {
			cout << "1. Structit eli tietueet - perusharjoitus\n\n";

			cout << "Anna opiskelijan etunimi: ";
			cin >> olli.etunimi;
			cout << "Anna opiskelijan sukunimi: ";
			cin >> olli.sukunimi;
			cout << "Anna opiskelijan opiskelijanumero: ";
			cin >> olli.opiskelijanro;
			cout << "Anna opiskelijan suorittamat opintopisteet: ";
			cin >> olli.opintopiste;


			cout << olli.etunimi väli olli.sukunimi << endl << olli.opiskelijanro << endl << olli.opintopiste << endl << endl;
			cout << "\n\nNYT VOIT SUORITTAA OHJELMAN 4!\n\n";
			
			break;
		}
				/*Tehtävä 2------------------------------------------------------------------------------------------------------*/
		case '2': {
			cout << "2. Structit eli tietueet - perusharjotus\n\n";

			valtio valtio1;
			cout << "anna valtion 1 asukasluku: ";
			cin >> valtio1.asukasluku;
			cout << "Anna valtion 1 pinta-ala: ";
			cin >> valtio1.pinta;
			cout << "Anna valtion 1 johtaja: ";
			cin >> valtio1.johtaja;

			valtio valtio2;
			cout << "anna valtion 2 asukasluku: ";
			cin >> valtio2.asukasluku;
			cout << "Anna valtion 2 pinta-ala: ";
			cin >> valtio2.pinta;
			cout << "Anna valtion 2 johtaja: ";
			cin >> valtio2.johtaja;

			cout << "Valtio 1\n" << valtio1.asukasluku väli valtio1.pinta väli valtio1.johtaja << "\n\n";
			cout << "Valtio 2\n" << valtio2.asukasluku väli valtio2.pinta väli valtio2.johtaja << "\n\n";


			break;
		}
				/*Tehtävä 3------------------------------------------------------------------------------------------------------*/
		case '3': {
			cout << "3. Structit taulukossa\n\n";
			valtio t3[5];

			for (int i = 0; i < 5; i++) {
				cout << "anna valtion " << i + 1 << " asukasluku: ";
				cin >> t3[i].asukasluku;
				cout << "Anna valtion " << i + 1 << " pinta-ala: ";
				cin >> t3[i].pinta;
				cout << "Anna valtion " << i + 1 << " johtaja: ";
				cin >> t3[i].johtaja;
			}

			for (int i = 0; i < 5; i++) {
				cout << "Valtio " << i + 1 << endl << t3[i].asukasluku väli t3[i].pinta väli t3[i].johtaja << "\n\n";
			}

			break;
		}
				/*Tehtävä 4------------------------------------------------------------------------------------------------------*/
		case '4': {
			cout << "4. Struct funktion parametrina\n AJA ENSIN OHJELMA 1!\n";
			char ohj1;
			cout << "Ajoitko jo ohjelman 1? (Y/N)";
			cin >> ohj1;
			if (ohj1 != 'Y' && ohj1 != 'y') {
				break;
			}


			else {
				tulostaOpiskelijanTiedot(olli);
			}

			break;
		}
				/*Tehtävä 5------------------------------------------------------------------------------------------------------*/
		case '5': {
			cout << "5. Struct funktion paluuarvona \n\n";
			
			Opiskelija opettelija;
			luoOpiskelija(opettelija);
			tulostaOpiskelijanTiedot(opettelija);
			
			break;
		}
				/*------------------------------------------------------------------------------------------------------*/
		default: {
			if (tehtava != 'l' && tehtava != 'L')
				cout << "Virheellinen syöte!" << endl;
		}
		}
	} while (tehtava != 'l' && tehtava != 'L');
}