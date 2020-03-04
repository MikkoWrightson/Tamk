#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main () {
    string name,
            description;
    ofstream myfile ("index.html");
    if (myfile.is_open())
    {
        cout << "Input name: ";
        cin >> name;
        cout << "Input description: ";
        cin >> description;
        myfile << "<html>\n<head>\n</head>\n<body>\n<center>\n<h1>" << name;
        myfile << "</h1>\n</center>\n<hr />\n";
        myfile << description << "<hr />\n</body>\n</html>";
        myfile.close();
    }   else cout << "Unable to open file";
    return 0;
}