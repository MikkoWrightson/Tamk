#include "Kirjasto.h"

int main()
{
	char valinta = 'x';
	do {
		cout << "Valitse tehtava(1-5, L = lopeta): ";
		cin >> valinta;

		switch (valinta) {
/*----------------------------------------Tehtävä 1-----------------------------------------------------------------------*/
		case '1': {
			int taulukko[10] = { };

			for (int i = 0; i < 10; ++i) {		//Syötetään dataa taulukkoon
				printf("%s %d: ", "Syota tenttitulos nro ", i + 1);
				scanf("%d", &taulukko[i]);
			}
			for (int i = 0; i < 10; ++i) {		//Tulostetaan yksi kerrallaan taulukon sisältö
				printf("%d ", taulukko[i]);
			}
			int ka = 0;
			for (int i = 0; i < 10; ++i) {		//Lasketaan taulukon keskiarvo ja tulostetaan se
				ka += taulukko[i];
			}
			printf("\n\n");
			printf("Keskiarvo on %d \n", ka / 10);
			break;
		}
/*----------------------------------------Tehtävä 2-----------------------------------------------------------------------*/
		case '2': {
			int sademaara[12] = { };
			int kk = 0;

			while (kk != 12)					//Syötetään dataa taulukkoon
			{
				printf("Syota %d. kuukauden sademaara: ", kk + 1);
				scanf("%d", &sademaara[kk]);
				kk++;
			}

			for (kk = 0; kk < 12; kk++) {		//Käydään syötteet läpi yksi kerrallaan ja lähetetään tulostusfunktiolle
				int stara = sademaara[kk];
				print(stara);
			}

			break;
		}
/*----------------------------------------Tehtävä 3-----------------------------------------------------------------------*/
		case '3': {
			float input;
			float input1;
			printf("Syota ensimmainen luku: ");				//Syötetään laskettavat luvut input ja input1
			scanf("%f", &input);
			printf("Syota toinen luku: ");
			scanf("%f", &input1);

			string jos = "jos haluat lukujen";				//Kysytään että mitä niille tehdään
			cout << "Valitse 1," << jos << " summan\nValitse 2, " << jos << " erotuksen\nValitse 3, " << jos << " tulon\nValitse 4, " << jos << "osamaaran.\n(1-4):";
			int val;
			scanf("%d", &val);

			switch (val) {
			case 1: {
				printf("Lukujen summa on %.2f\n", input + input1);
				break;
			}
			case 2: {
				printf("Lukujen erotus on %.2f\n", input - input1);
				break;
			}
			case 3: {
				printf("Lukujen tulo on %.2f\n", input * input1);
				break;
			}
			case 4: {
				printf("Lukujen osamaara on %.2f\n", input / input1);
				break;
			}
			default:
				printf("Virheellinen syote\n");
			}

			break;
		}
/*----------------------------------------Tehtävä 4-----------------------------------------------------------------------*/
	//en ollut väsyneenä ihan varma haluttiinko tässä kysellä käyttäjältä lukua ja tarkistaa onko se alkuluku
	//vai haluttiinko tässä tulostaa vain 1000 alkulukua. Päätin tehdä molemmat.
		
		case '4': {
			printf("Haluatko syottaa luvun(Valitse 1) vai listata 1000 alkulukua(Valitse 2)?");
			int pick;
			scanf("%d", &pick);
			switch (pick){

			case 1: {		//Testataan käyttäjän syöttämä luku joko se olisi alkuluku
				printf("Syota luku tarkistaaksesi onko se alkuluku: ");
				int syote;
				scanf("%d", &syote);
					
				if (syote != 0 && syote != 1) {
					if (alkuluku(syote) == true) {
						cout << "Annettu luku on alkuluku" << endl;
					}
					else {
						cout << "Annettu luku ei ole alkuluku" << endl;
					}
				}
				else
					cout << "Annettu luku ei ole alkuluku" << endl;
				break;
			}

			case 2: {
				for (int i = 2; i <= 1000; i++) {
					if (alkuluku(i) == true) {
						cout << i << endl;
					}
				}
				break;
			}

			default: {
				cout << "Virheellinen syote"<<endl;
			}
			}


			break;
		}
/*----------------------------------------Tehtävä 5-----------------------------------------------------------------------*/
		case '5': {
			int ika;
			asetaIka(ika);
			cout <<"Syotetty ika on " << ika << endl;
			break;
		}
/*------------------------------------------------------------------------------------------------------------------------*/
		default: {

		}
		}		//Switch päättyy
	} while (valinta != 'l' && valinta != 'L');

	return 0;
}

