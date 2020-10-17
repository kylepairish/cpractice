#include "std_lib_facilities.h"
using namespace std;

int main()
{
  cout << "Please spell out a number" << endl;
  string a;
  cin >> a;

  if(a == "zero") 
    cout << '0' << endl;
  else if(a == "one")
    cout << '1' << endl;
  else if(a == "two")
    cout << '2' << endl;
  else if(a == "three")
    cout << '3' << endl;
  else if(a == "four")
    cout << '4' << endl;
  else 
    cout << "Not a number I know" << endl;
}

