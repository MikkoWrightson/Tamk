#include <iostream>
#include <string>
using namespace std;

int main()
{
	char option;
	int laskuri;
	string b;

	cout << "Tehtava a vai b?";
	cin >> option;

	if (option == 'a') {
		for (laskuri = 1; laskuri <= 10; laskuri++) {

			cout << laskuri << " ";
		}

	}

	else if (option == 'b') {
		for (laskuri = 2; laskuri <= 20; laskuri+=2) {
			if (laskuri < 20) {
				b = ", ";
			}

			else {
				b = "";
			}

			cout << laskuri << b;
		}

	}
	return EXIT_SUCCESS;
}