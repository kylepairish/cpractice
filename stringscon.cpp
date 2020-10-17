#include "std_lib_facilities.h"
using namespace std;

int main() 
{


  cout << "Enter first name: " << endl;
  string name1;
  cin >> name1;
  cout << "Enter second name: " << endl;
  string name2;
  cin >> name2;
  cout << "Enter third name: " << endl;
  string name3;
  cin >> name3;

  
  // large number
  string large;
  if(name1 >= name3 && name1 >= name2)
    large = name1;
  if(name2 >= name1 && name2 >= name3)
    large = name2;
  if(name3 >= name1 && name3 >= name2)
    large = name3;

  // middle number 
  string middle;
  if(name2 >= name1 && name1 >= name3 || name3 >= name1 && name1 >= name2)
    middle = name1;
  if(name1 >= name2 && name2 >= name3 || name3 >= name2 && name2 >= name1)
    middle = name2;
  if(name1 >= name3 && name3 >= name2 || name2 >= name3 && name3 >= name1)
    middle = name3;
  

  // small number
  string small;
  if(name1 <= name2 && name1 <= name3)
    small = name1;
  if(name2 <= name1 && name2 <= name3)
    small = name2;
  if(name3 <= name1 && name3 <= name2)
    small = name3;


  cout << small << "," << middle << "," << large << endl;
}
