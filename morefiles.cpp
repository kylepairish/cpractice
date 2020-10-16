#include <iostream>
#include <fstream>
using namespace std;

int main() {

    ofstream kylesFile("test.txt");

    if(kylesFile.is_open()) {
        cout << "Okay file is open" << endl;
    } else {
        cout << "Kyle you messed up" << endl;
    }


    kylesFile << "Testing again\n";
    kylesFile.close();

}

