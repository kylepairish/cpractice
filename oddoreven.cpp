#include "std_lib_facilities.h"
using namespace std;

int main()
{
  cout << "Please enter a number and I will tell you if its odd or even" << endl;
  int number;
  cin >> number;

  if(number % 2 == 0)
    cout << "The value " << number << " is an even number" << endl;
  if(number % 2 == 1)
    cout << "The value " << number << " is an odd number" << endl;
}
