#include <iostream>

void ptrSwap(int *swapVar, int *swapVar1);
void refSwap(int &swapVar, int &swapVar1);

int main(){
	int var = 69,
    	var1 = 420;
	
	std::cout << "Original state:\n";
	std::cout << "var holds " << var << std::endl << "var1 holds " << var1 << std::endl;
	
	std::cout << "\n\nPTRSWAP\n";
	ptrSwap(&var, &var1);
	std::cout << "var holds " << var << std::endl << "var1 holds " << var1 << std::endl;
	
	std::cout << "\n\nREFSWAP\n";
	refSwap(var, var1);
	std::cout << "var holds " << var << std::endl << "var1 holds " << var1 << std::endl;
}//main

void ptrSwap(int *swapVar, int *swapVar1){
	int temp = *swapVar;
	*swapVar = *swapVar1;
	*swapVar1 = temp;
}//ptrSwap

void refSwap(int &swapVar, int &swapVar1){
	int temp = swapVar;
	swapVar = swapVar1;
	swapVar1 = temp;

}//refSwap
