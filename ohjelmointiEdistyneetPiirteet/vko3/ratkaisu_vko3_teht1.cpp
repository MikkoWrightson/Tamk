#include <iostream>
#include <bits/stdc++.h>//for sort
#include <math.h>//for pow, sqrt

bool isTriangular(float side[]);

enum triangle{isoscelesTriangle, rightTriangle, equilateralTriangle, scaleneTriangle};

int main(){
    float side[3];

    for(int i = 0; i < 3; i++){
        std::cout << "Input length of side " << i + 1 << ": ";
        std::cin >> side[i];
    }//for, input
    int sizeOfArray = sizeof(side) / sizeof(side[0]);
    std::sort(side, side+sizeOfArray);

    std::cout << isTriangular(side) << std::endl;
}


bool isTriangular(float side[]){
    if(side[0] + side[1] > side[2]){
        bool isoscelesCheck = false,
            rightCheck = false,
            equilateralCheck = false,
            scaleneCheck = false;
         
        for(int i = 0; i < 2; i++){
            if (side[i] == side[i+1]){
                isoscelesCheck = true;
            }
        }//for isoscelesCheck

        float c2;

        c2 = pow(side[0], 2) + pow(side[1], 2);
        if (c2 = side[2]){
            rightCheck = true;
        }//rightCheck 

        if (side[0] == side[1] && side[1] == side[2]){
            equilateralCheck = true;
        }



        
        return true;
    }
    else{
        return false;
    }
 
}
