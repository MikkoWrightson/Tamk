#include <iostream>
#include<string>
using namespace std;


void foo(){
    int a = 0;
    //cout << "loop";
    //foo();

}

int main(){
    //1. muuttujat
    int a;
    float b;
    char c;
    string s;

    //muuttujan luominen(muistinvaraus)

    //perinteisesti int x = 0;

    int x{ 40 };// moderni cpp, käytä ehkä?
    foo();

    int* y = new int(50);
    delete y;
}