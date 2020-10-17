#include "std_lib_facilities.h"
using namespace std;

int main() 
{

//  int small = 0;
//  int medium = 0;
//  int large = 0;



  cout << "Enter first number: " << endl;
  int num1;
  cin >> num1;
  cout << "Enter second number: " << endl;
  int num2;
  cin >> num2;
  cout << "Enter third number: " << endl;
  int num3;
  cin >> num3;

  
  // large number
  int large = 0;
  if(num1 >= num3 && num1 >= num2)
    large = num1;
  if(num2 >= num1 && num2 >= num3)
    large = num2;
  if(num3 >= num1 && num3 >= num2)
    large = num3;

  // middle number
  int middle = 0;
  if(num2 >= num1 && num1 >= num3 || num3 >= num1 && num1 >= num2)
    middle = num1;
  if(num1 >= num2 && num2 >= num3 || num3 >= num2 && num2 >= num1)
    middle = num2;
  if(num1 >= num3 && num3 >= num2 || num2 >= num3 && num3 >= num1)
    middle = num3;
  

  // small number
  int small = 0;
  if(num1 <= num2 && num1 <= num3)
    small = num1;
  if(num2 <= num1 && num2 <= num3)
    small = num2;
  if(num3 <= num1 && num3 <= num2)
    small = num3;

  // if same number


  cout << small << "," << middle << "," << large << endl;
}
