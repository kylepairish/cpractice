#include "std_lib_facilities.h"
using namespace std;

int main()
{
  cout << "Please enter a number of miles you would like to travel: " << endl;
  double miles;
  cin >> miles;
  double kilometers = 1.609;
  cout << miles * kilometers;
}
