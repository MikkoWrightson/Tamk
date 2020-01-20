#include <iostream>
using namespace std;
int main()
{
	int luku1;
	int luku2;
	char merkki;
	int out;

	cout << "Anna ensimmainen luku: ";
	cin >> luku1;

	cout << "Anna merkki:";
	cin >> merkki;

	cout << "Anna toinen luku: ";
	cin >> luku2;

	if (merkki == '+')
	{
		out = luku1 + luku2;
	}

	else if (merkki == '-')
	{
		out = luku1 - luku2;
	}

	else if (merkki == '*')
	{
		out = luku1 * luku2;
	}

	else if (merkki == '/')
	{
		out = luku1 / luku2;
	}

	cout << out << endl;
	return EXIT_SUCCESS;
}