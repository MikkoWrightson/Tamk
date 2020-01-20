#include <iostream>
#include <string>
#include <cmath>
using namespace std;

int main()
{
	string toiminto;
	float luku;
	float tulos = 0.0;
	string out = "";
	bool quit = false;
	
	while (!quit) {		
		cout << "Syota luku: ";
		cin >> luku;
		cout << "Valitse laskutoimitus (1=neliojuuri, 2=log, 3=exp ja 4=tan, L=lopetus): ";
		cin >> toiminto;
		int legit = 1;

		if (toiminto == "1") {
			tulos = sqrt(luku);
			out = " neliojuuri ";
		}
		else if (toiminto == "2") {
			tulos = log(luku);
			out = " logaritmi ";
		}
		else if (toiminto == "3") {
			tulos = exp(luku);
			out = " exponentti ";
		}
		else if (toiminto == "4") {
			tulos = tan(luku);
			out = " tangentti ";
		}
		else if (toiminto == "l" || toiminto == "L") {
			quit = true;
		}
		else {
			legit = 0;
		}


		if (!quit) {
			if (legit == 1) {
				cout << "Syottamasi luvun" << out << "on " << tulos << endl << endl;
			}
			else {
				cout << "Las Vegas turns women into men and men into idiots." << endl;
			}
		}
	} 

	return EXIT_SUCCESS;
}