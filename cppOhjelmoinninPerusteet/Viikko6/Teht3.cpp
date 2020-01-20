#include <iostream>
#include <string>

using namespace std;


int main()
{

	string etunimi,
		sukunimi,
		kadunnimi,
		katunumero,
		postinumero,
		kunta;

	int etuPituus,
		takaPituus,
		pituus;




	cout << "Syota etunimi: ";
	cin >> etunimi;
	cout << "Syota sukunimi: ";
	cin >> sukunimi;
	cout << "Syota kadun nimi: ";
	cin >> kadunnimi;
	cout << "Syota talon numero: ";
	cin >> katunumero;
	cout << "Syota postinumero: ";
	cin >> postinumero;
	cout << "Syota kunta: ";
	cin >> kunta;


	cout << "Osoitteesi on: " << endl << etunimi << " " << sukunimi << endl << kadunnimi << " " << katunumero << endl << postinumero << endl << kunta << endl << endl;

	etuPituus = etunimi.length();
	takaPituus = sukunimi.length();
	pituus = etuPituus + takaPituus;

	if (etunimi < sukunimi) {
		cout << "Etunimi tulee aakkosissa ensin. Nimessa on yhteensa " << pituus << " kirjainta" << endl;
	}
	else if (etunimi == sukunimi) {
		cout << "Etunimi ja sukunimi ovat samat, nimessa on yhteensa " << pituus << " kirjainta" << endl;
	}
	else if (etunimi > sukunimi) {
		cout << "Sukunimi tulee aakkosissa ensin. Nimessa on yhteensa " << pituus << " kirjainta" << endl;
	}


	return EXIT_SUCCESS;

}