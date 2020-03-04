#include <iostream>
#include <fstream>
#include <string>
#include <vector>
//#define \n   << '\n' <<

using namespace std;

int main(){
    string line;
    ifstream myfile ("Random.txt");
    vector<int> numbers;
    int lines = 0;
    
    if (myfile.is_open())
    {
        while ( getline (myfile,line) )
        {
            numbers.push_back(stoi(line));
        }
        myfile.close();
    } else cout << "Unable to open file"; 


    int total = 0;
    for(int i = 0; i < numbers.size(); i++){
        total = total + numbers.at(i);
    }

    int avg = numbers.size();
    avg = total / avg;

    cout <<  numbers.size() << '\n'  << total << '\n' << avg << '\n';
    return 0;
}