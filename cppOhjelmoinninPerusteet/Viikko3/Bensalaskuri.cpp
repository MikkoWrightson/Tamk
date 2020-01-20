#include <iostream>
using namespace std;
int main()
{
	int matka;
	int erotus;

	int bensa;
	int bensak;
	int bensah;
	
	int diesel;
	int dieselk;
	int dieselh;
	int dieselvero;
	
	
	int output;

	//syötetään lukuja laskuriin
	cout << "Anna ajettu matka vuodessa: ";
	cin >> matka;
	
	cout << "Anna bensan hinta: ";
	cin >> bensah;

	cout << "Anna bensan kulutus: ";
	cin >> bensak;

	cout << "Anna dieselin hinta: ";
	cin >> dieselh;

	cout << "Anna dieselin kulutus: ";
	cin >> dieselk;
	
	cout << "Anna dieselveron maara vuodessa:";
	cin >> dieselvero;

	diesel = dieselh * dieselk * matka + dieselvero;

	bensa = bensah * bensak * matka;

	if (bensa - diesel > 0)
	{
		erotus = bensa - diesel;
		cout << "Bensalla ajaminen tulee " << erotus << " euroa halvemmaksi vuodessa" << endl;
		cout << "maksaen yhteensa " << bensa << " euroa per vuosi" << endl;
	}
	
	else
	{
		erotus = diesel - bensa;
		cout << "Dieselilla ajaminen tulee " << erotus << " euroa halvemmaksi vuodessa" << endl;
		cout << "maksaen yhteensa" << diesel << " euroa per vuosi" << endl;
	}
	return EXIT_SUCCESS;
}