#include <iostream>
using namespace std;

int main()
{
	float input;
	float pienin = 999999999999999.999;
	float suurin = 0.0;
	float pituus;
	float pisteet = 0.0;
	char bonari;
	int tuomari = 0;

	cout << "Bonus vai normi? B/N: ";
	cin >> bonari;

	if (bonari == 'n')
	{
		cout << "Syota hypyn pituus: ";
		cin >> pituus;
		pituus = pituus * 0.9;


		while (tuomari < 5)
		{
			cout << "Syota tuomarin " << tuomari + 1 << " pisteet: ";
			cin >> input;
			pisteet = pisteet + input;
			tuomari++;
		}
		pisteet = pisteet + pituus;
		cout << "Hyppaajan pisteet: " << pisteet << endl;


	}


	else if (bonari == 'b')
	{

		cout << "Syota hypyn pituus: ";
		cin >> pituus;
		pituus = pituus * 0.9;


		while (tuomari < 5)
		{
			cout << "Syota tuomarin " << tuomari + 1 << " pisteet: ";
			cin >> input;

			if (pienin > input)
				pienin = input;
			
			if (suurin < input)
				suurin = input;

			pisteet = pisteet + input;
			tuomari++;
		}
		pisteet = pisteet + pituus;
		pisteet = pisteet - pienin;
		pisteet = pisteet - suurin;
		cout << "Hyppaajan pisteet: " << pisteet << endl;


	}

	return EXIT_SUCCESS;
}