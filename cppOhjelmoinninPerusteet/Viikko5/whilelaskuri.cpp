#include <iostream>
using namespace std;

int main()
{

	int count = 10;
	int jaannos;
	char valinta;


	cout << "A vai B?" << endl;
	cin >> valinta;

	if (valinta == 'a')
	{
		while (count >= 0)
		{
			cout << count - 5 << " ";
			count--;
		}
	}

	else if (valinta == 'b')
	{
		count = 50;
		while (count > 0)
		{
			jaannos = count % 2;
			
			if (jaannos == 0)
			{
				cout << count << " ";
			}
			
			count--;
		}
	}
	return EXIT_SUCCESS;
}