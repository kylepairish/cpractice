#include <iostream>
#include <fstream>
using namespace std;

int main() {

    ofstream kyleFile;
    kyleFile.open("test.txt");

    kyleFile << "This is a test!\n";
    kyleFile.close();

}
