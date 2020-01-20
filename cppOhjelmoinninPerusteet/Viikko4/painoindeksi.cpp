#include <iostream>
#include <string>
using namespace std;

int main()
{
	float paino;
	float pituus;
	float indeksi;
	string xpaino;

	cout << "Anna paino: ";
	cin >> paino;

	cout << "Anna pituus metreina: ";
	cin >> pituus;

	pituus = pituus * pituus;
	indeksi = paino / pituus;

	if (indeksi <= 20.7) {
		xpaino = "alipaino";
	}

	else if (indeksi <= 26.4) {
		xpaino = "normaalipaino";
	}

	else if (indeksi <= 27.8) {
		xpaino = "lieva ylipaino";
	}
	
	else if (indeksi <= 31.1) {
		xpaino = "ylipaino";
	}
	else if (indeksi > 31.1) {
		xpaino = "merkittava ylipaino";
	}

	
	cout << xpaino << endl;
	cout << "Painoindeksisi on " << indeksi << endl;
	return EXIT_SUCCESS;
}