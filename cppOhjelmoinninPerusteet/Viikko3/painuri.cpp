#include <iostream>
using namespace std;
int main()
{
	int paino;
	int output;
	
	//syötetään lukuja laskuriin
	cout << "Anna paino: ";
	cin >> paino;
	
	if (paino < 50)
	{
		cout << "Hinta 60 snt" << endl;
	}

	else if (paino < 100)
	{
		cout << "Hinta 90 snt" << endl;
	}
	
	else if (paino < 250)
	{
		cout << "Hinta 1,3 euroa" << endl;
	}
	
	else if (paino < 500)
	{
		cout << "Hinta 2,1 euroa" << endl;
	}

	else if (paino < 1000)
	{
		cout << "Hinta 3,5 euroa" << endl;
	}

	else if (paino < 2000)
	{
		cout << "Hinta 5,5 euroa" << endl;
	}
	return EXIT_SUCCESS;
}