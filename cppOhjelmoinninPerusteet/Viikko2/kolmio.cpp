#include <iostream>
using namespace std;
int main()
{
	float kanta;
	float korkeus;
	float output;
	float output2;


	//syötetään lukuja laskuriin
	cout << "Anna kolmion kanta:";
	cin >> kanta;
	cout << "Anna kolmion korkeus: ";
	cin >> korkeus;

	//lasketaan laskuja
	output = kanta * korkeus;
	output = output / 2;

	//tulostetaan tulokset
	cout << "Kolmion pinta-ala on " << output << " yksikkoa toiseen" << endl;

	return EXIT_SUCCESS;
}