#include <iostream>
using namespace std;

int main()
{
	int n;
	int laskuri;
	float g = 9.81;
	float v=0.0;

	cout << "Anna aika sekunteina: ";
	cin >> n;
	cout << endl << endl << endl;
	cout << "Aika     Nopeus(km/h)" << endl;


	for (laskuri = 0; laskuri <= n; laskuri++) {
		int t = laskuri;											//sinänsä turha muuttuja toki mutta näyttää nätimmältä imo

		v = g * t;
		if (laskuri < 10)
			cout << laskuri << "        " << v * 3.6 << endl;
	
		else if (laskuri < 100)										//varmistaa vain että numerot pysyvät nätissä rivissä
			cout << laskuri << "       " << v * 3.6 << endl;

		else if (laskuri < 1000)
			cout << laskuri << "      " << v * 3.6 << endl;

	}
	return EXIT_SUCCESS;
}