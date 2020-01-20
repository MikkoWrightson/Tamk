#include <iostream>

using namespace std;
// unohdin vaan palauttaa ja oli pöytäkoneelle tallennettu niin ei koulussa voinut palauttaa i promise :(

int main()
{
	double	pi = 0.0,
		output,
		input,
		i2;
	int i3=0.0;

	cout << "Montako piin desimaalia laitetaan?";
	cin >> input;
	input = input + 1;

	for (double i = 1.0; i < input; i+=2.0) {
		
		if (i3 % 2 == 0) {
			pi = pi + 4.0 / i;
			i3 = i3 + 1;
		}
		else if (i3 % 2 == 1) {
			pi = pi - 4.0 / i;
			i3 = i3 + 1;
		}
		
	}

	cout << pi << endl;


	return EXIT_SUCCESS;

}