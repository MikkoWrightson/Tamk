#include <iostream>
using namespace std;
int main()
{
	int paino;
	int paino1;
	int paino2;
	int paino3;
	int paino4;
	int painoraja;

	//syötetään lukuja laskuriin
	cout << "Anna hlon 1 paino: ";
	cin >> paino1;
	
	cout << "Anna hlon 2 paino: ";
	cin >> paino2;

	cout << "Anna hlon 3 paino: ";
	cin >> paino3;

	cout << "Anna hlon 4 paino: ";
	cin >> paino4;

	cout << "Anna hissin painoraja: ";
	cin >> painoraja;
	
	paino = paino1 + paino2 + paino3 + paino4;


	if (paino > painoraja)
	{
		cout << "Ylipainoa, hissia ei saa kayttaa";
	}
	
	else
	{
		cout << "Hissi kaytettavissanne!";
	}
	return EXIT_SUCCESS;
}