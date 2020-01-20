#include <iostream>
#include <string>
using namespace std;

int main()
{
	char yksikko;
	float lampo;
	float c;
	float f;
	
	float out;

	string muunnettava;
	string muunnettu;
	
	cout << "Anna lampotila: ";
	cin >> lampo;

	cout << "Muunnetaanko Celsiukseksi vai Fahrenheitiksi? (C/F)";
	cin >> yksikko;

	

	if (yksikko = 'C') {
		f = lampo;
		c = f - 32;
		c = c / 1.8;

		out = c;

		muunnettava = " Fahrenheit";
		muunnettu = " Celsius";

	}

	else if (yksikko = 'F') {
		f = lampo;
		c = f * 1.8;
		c = c + 32;
		
		out = f;

		muunnettava = " Celsius";
		muunnettu = " Fahrenheit";
	}

	 
	cout << lampo << muunnettava << " = " << out << muunnettu << endl;
	
	return EXIT_SUCCESS;
}