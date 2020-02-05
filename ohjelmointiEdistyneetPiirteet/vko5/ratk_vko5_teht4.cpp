#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main (int argc, char** argv) {
    string line,
        fileToSearch = argv[1],
        searchTerm = argv[2];
    uint success = 0;

  ifstream file (fileToSearch);
  if (file.is_open())
    {
        while(file >> line){
            if(line.find(searchTerm) != string::npos){
                cout << line <<endl;
                success++;
            }
        }
    file.close();
    }

    else cout << "Unable to open file\n"; 
    cout << "Found " << success << " instances of " << searchTerm << endl;

  return 0;
}