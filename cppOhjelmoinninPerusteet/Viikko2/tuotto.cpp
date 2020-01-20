#include <iostream>
using namespace std;
int main()
{
	double sijoitus;
	double korko;
	double aika;
	double output1;

	//syötetään lukuja laskuriin
	cout << "Syota sijoitettava summa:";
	cin >> sijoitus;
	
	cout << "Syota tuottoprosentti: ";
	cin >> korko;

	cout << "Syota sijoitusaika: ";
	cin >> aika;
	
	
	//lasketaan laskuja
	
	korko = korko / 100;
	output1 = sijoitus * korko * aika;
	
	//tulostetaan tulokset
		
	cout << "Sijoituksesi on kasvanut " << output1 << " eurolla " << aika << " vuodessa" << endl;
	
	return EXIT_SUCCESS;
}