#include "Kirjasto.h"

/*----------------------------------------Tehtävä 2-----------------------------------------------------------------------*/
void print(int n) {
	for (int i = 0; i < n; ++i)					//Tulostetaan tähtiä syötetty määrä ja vaihdetaan riviä valmiutena seuraavaa varten
		cout << '*';
	cout << endl;
}

/*----------------------------------------Tehtävä 4-----------------------------------------------------------------------*/
bool alkuluku(int n) {

	bool flag = true;
	for (int i = 2; i < n; i++)
	{

		if (n % i == 0) {
			flag = false;
		}
	}
	return flag;
}

/*----------------------------------------Tehtävä 5-----------------------------------------------------------------------*/
void asetaIka(int& a) {
	cout << "Aseta ika: ";
	cin >> a;
}