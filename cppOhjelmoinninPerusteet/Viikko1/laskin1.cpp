#include <iostream>
using namespace std;
int main()
{
	int input1;
	int input2;
	int output1;
	int output2;


	//syötetään lukuja laskuriin
	cout << "Syota 1. luku: ";
	cin >> input1;
	cout << endl;
	cout << "Syota 2. luku: ";
	cin >> input2;
	cout << endl;

	//lasketaan syötteiden erotus ja tulo
	output1 = input1 - input2;
	output2 = input1 * input2;

	//tulostetaan laskujen tulokset
	cout << "Lukujen erotus on " << output1 << endl;
	cout << "Lukujen tulo on " << output2 << endl;

	return EXIT_SUCCESS;
}
