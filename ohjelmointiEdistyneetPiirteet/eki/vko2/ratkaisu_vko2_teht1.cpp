#include <iostream>
using namespace std;

int main(){
	int* ptr;
	int var = 0;
	int var1;
	int* ptr1;
	ptr = &var;
	ptr1 = &var1;
	cout << *ptr << " @ " << ptr << endl;

	*ptr = 7;
	
	cout << sizeof(var) << endl;
	cout << sizeof(var1) << endl;
	cout << *ptr << " @ " << ptr << endl;

	cout << *ptr1 << " @ " << ptr1 << endl;

	cout << &ptr << " @ " << ptr << endl;
	cout << *&ptr << " @ " << ptr << endl;	//* ja & kumoaa toisensa

	ptr1 = nullptr;
	cout << *ptr1 << " @ " << ptr1 << endl; 

}
