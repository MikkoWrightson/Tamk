#include <iostream>
using namespace std;

int main()
{
	int toiminto = 69;
	double saldo = 0.0;
	float input;

	cout << "Tervetuloa pankkiin!" << endl;
	cout << "Tilisi saldo on " << saldo << " euroa" << endl;


	while (toiminto != 3)
	{
		cout << endl << "Valitse toiminto 1. Talleta 2. Nosta 3. Lopeta ";
		cin >> toiminto;


		if (toiminto == 1)
		{
			cout << "Anna talletettava summa: ";
			cin >> input;
			saldo = saldo + input;
			cout << "Tililla on " << saldo << " euroa" << endl;
		}

		else if (toiminto == 2)
		{
			cout << "Anna nostettava summa: ";
			cin >> input;

			if (input > saldo)
				cout << "Tienaa enemman niin voit nostaa nuin paljon" << endl;
			else
				saldo = saldo - input;
			
			cout << "Tililla on " << saldo << " euroa" << endl;
		}
	}

	cout << "Nakemiin!" << endl;

	return EXIT_SUCCESS;
}