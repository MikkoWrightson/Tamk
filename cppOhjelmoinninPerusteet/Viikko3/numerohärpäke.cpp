#include <iostream>
using namespace std;
int main()
{
	int luku1;
	int luku2;
	int luku3;
	
	int vertailu;

	int output;
	
	//syötetään lukuja laskuriin
	cout << "Anna luku 1: ";
	cin >> luku1;
	
	cout << "Anna luku 2: ";
	cin >> luku2;

	cout << "Anna luku 3: ";
	cin >> luku3;
	
	vertailu = luku1 > luku2 ? luku1 : luku2;
		vertailu = luku2 > luku3 ? luku2 : luku3;

		cout << vertailu << endl;

	return EXIT_SUCCESS;
}