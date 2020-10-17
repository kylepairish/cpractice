#include "std_lib_facilities.h"
using namespace std;

int main()
{
  double large;
  double small;

  cout << "Please enter your first number" << endl;
  double first_num;
  cin >> first_num;  
 
  cout << "Please enter your second number" <<endl;
  double second_num;
  cin >> second_num;

  cout << "The sum of these is " << first_num + second_num << endl;
  cout << "The difference of these is " << first_num - second_num << endl;
  cout << "The product of these is " << first_num * second_num << endl;
  
  if(first_num > second_num) {
    cout << "The larger number is " << first_num  << endl;
    cout << "The smaller number is " << second_num << endl;
      large = first_num;
      small = second_num;
  } else {
    (first_num < second_num);
      cout << "The larger number is " << second_num << endl;
      cout << "The smaller number is " << first_num << endl;
  }   large = second_num;
      small = first_num;
  
  double ratio;
  ratio = large/small;
  cout << "The ratio of these is " << ratio << endl;
}
