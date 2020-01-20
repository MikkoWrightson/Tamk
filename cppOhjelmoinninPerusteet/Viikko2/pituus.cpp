#include <iostream>
using namespace std;
int main()
{
	int pituus1;
	int pituus2;

	//syötetään lukuja laskuriin
	cout << "Anna hlo 1 pituus";
	cin >> pituus1;
	
	cout << "Anna hlo 2 pituus";
	cin >> pituus2;
	
	
	if (pituus1 > pituus2)
	{
		cout << "hlo 1 on pidempi pituudella " << pituus1 << endl;
	}
	
	else
	{
		cout << "hlo 2 on pidempi pituudella " << pituus2 << endl;
	}
	return EXIT_SUCCESS;
}