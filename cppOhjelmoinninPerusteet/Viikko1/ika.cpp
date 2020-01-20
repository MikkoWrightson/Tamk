#include <iostream>
using namespace std;
int main()
{
	int age;
	int in50;
	const int luku=50;

	cout << "Anna ikasi: ";
	cin >> age;
	in50 = age + luku;
//	cout << "50 vuoden kuluttua olet %d vuotias" << in50 << endl;
	cout << "50 vuoden kuluttua olet " << in50 << " vuotias" << endl;

	return EXIT_SUCCESS;
}