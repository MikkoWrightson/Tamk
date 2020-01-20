#include <iostream>
using namespace std;

int main()
{
	int n;

	cout << "Anna luku: ";
	cin >> n;

	while (n > 0) {
		cout << "Hello world!" << endl;
		n--;
	}
	

	while (n < 15) {
		cout << n + 1 << " ";
		n++;
	}
	return EXIT_SUCCESS;
}