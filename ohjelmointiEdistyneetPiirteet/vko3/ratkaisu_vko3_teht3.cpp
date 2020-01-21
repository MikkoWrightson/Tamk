#include <iostream>
#include <string>

int min(int x, int y);
int min(int x, int y, int z);
int min(int x, int y, int z, int f);

int main(){
    std::string input = "Input value ";
    int x,
        y,
        z,
        f;
    std::cout << input << "1:";
    std::cin >> x;
    std::cout << input << "2:";
    std::cin >> y;
    std::cout << input << "3:";
    std::cin >> z;
    std::cout << input << "4:";
    std::cin >> f;
    
    std::cout << "The first min function returns: " << min(x,y) << std::endl;
    std::cout << "The second min function returns: " << min(x, y, z) << std::endl;
    std::cout << "The third min function returns: " << min(x, y, z, f) << std::endl;

    return 0;
}//main

int min(int x, int y){
    if (x > y){
        return y;
    }
    else if(y > x){
        return x;
    }
return 0;
}//min2


int min(int x, int y, int z){
    x = min(x,y);
    if (x > z){
        return z;
    }
    else if(z > x){
        return x;
    }

return 0;
}//min3


int min(int x, int y, int z, int f){
    x = min(x, y, z);
    if (f > x){
        return x;
    }
    else if (x > f){
        return f;
    }
return 0;
}//min4