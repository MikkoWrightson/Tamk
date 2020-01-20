#include <iostream>
using namespace std;

int main()
{
	float input;
	double counter = 0.0;
	do
	{
		cout << "Syota luku: ";
		cin >> input;
		counter = counter + input;
	}
	while (input != 0.0);

		cout << counter << endl;

	return EXIT_SUCCESS;
}