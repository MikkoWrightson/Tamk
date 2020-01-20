#include <iostream>

using namespace std;

int main()
{
	double ansiotulo;
	const float kunnallisvero = 0.1975;
	float tulovero;
	float kokonaisvero;
	float alaraja;
	float maksettava;
	double netto;
	

	cout << "Anna tulosi: ";
	cin >> ansiotulo;


	if (ansiotulo <= 17600) {
		alaraja = 8.0;
		tulovero = 0;
	}

	else if (ansiotulo <= 26400) {
		alaraja = 8.0;
		tulovero = 0.06;
	}

	else if (ansiotulo <= 43500) {
		alaraja = 536.0;
		tulovero = 0.1725;
	}
	
	else if (ansiotulo <= 76100) {
		alaraja = 3485.75;
		tulovero = 0.2125;
	}
	else if (ansiotulo > 76100) {
		alaraja = 10413.25;
		tulovero = 0.3125;
	}
	
	kokonaisvero = tulovero + kunnallisvero;
	maksettava = ansiotulo * kokonaisvero + alaraja;
	netto = ansiotulo - maksettava;

	cout << "Jos bruttotulosi ovat " << ansiotulo << "e, maksat kokonaisverona " << maksettava << " euroa." << endl;
	cout << "Talloin nettotulosi ovat " << netto << "e" << endl;

	
	return EXIT_SUCCESS;
}