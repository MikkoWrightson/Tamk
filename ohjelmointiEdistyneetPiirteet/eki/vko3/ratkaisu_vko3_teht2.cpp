#include <iostream>
#include <math.h>

void roundUpWeedKiller(float input);

int main(){
    float input;
    std::cout << "Input a value: ";
    std::cin >> input;
    roundUpWeedKiller(input);
    return 0;
}

void roundUpWeedKiller(float input){
    std::cout << "The given value " << input << " lies between " << floor(input) << " and " << ceil(input) << std::endl;
}