#include <iostream>
#include <bits/stdc++.h>//for sort
#include <math.h>//for pow, sqrt

enum triangle{isoscelesTriangle,
            rightTriangle,
            equilateralTriangle,
            scaleneTriangle};

bool isTriangular(int side[], triangle type);

int main(){
    int side[3];

    for(int i = 0; i < 3; i++){
        std::cout << "Input length of side " << i + 1 << ": ";
        std::cin >> side[i];
    }//for, input
    int sizeOfArray = sizeof(side) / sizeof(side[0]);
    std::sort(side, side+sizeOfArray);

    if(isTriangular(side, isoscelesTriangle)){
        std::cout << "The triangle is an isosceles triangle.\n";
        return 0;
    }
    if(isTriangular(side, rightTriangle)){
        std::cout << "The triangle is a right triangle.\n";
        return 0;
    }
    if(isTriangular(side, equilateralTriangle)){
        std::cout << "The triangle is an equilateral triangle.\n";
        return 0;
    }
    if(isTriangular(side, scaleneTriangle)){
        std::cout << "The triangle is a scalene trangle.\n";
        return 0;
    }
}


bool isTriangular(int side[], triangle type){
    switch(type) {
        case isoscelesTriangle : {
            if(side[0] == side[1] || side[1] == side[2] || side[2] == side[0]){
                return true;
            }
            else{
                return false;
            }
            break;
        }//isoscelesTriangle
        case rightTriangle : {
        float c2;
        c2 = pow(side[0], 2) + pow(side[1], 2);
        
            if(c2 = side[2]){
                return true;
            }
            else{
                return false;
            }
            break;
        }//rightTriangle
        case equilateralTriangle : {
            if(side[0] == side[1] && side[1] == side[2]){
                return true;
            }
            else{
                return false;
            }
            break;
        }//equilateralTriangle
        case scaleneTriangle : {
            if(side[0] != side[1] && side[1] != side[2] && side[2] != side[0]){
                return true;
            }
            else{
                return false;
            }
            break;
        }//scaleneTriangle
    }//switch 
}//isTriangular