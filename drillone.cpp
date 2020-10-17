#include "std_lib_facilities.h"

using namespace std;

int main()
{
  cout << "Enter the name of the person you want to write to: " << endl;
  string name;
  cin >> name; 
  cout << "Dear " << name << "," << endl;
  cout << " How are you? I am fine. I miss you. Hopefully all is going"
    "well for you and ma" << endl;
  string friend_name;
  cin >> friend_name;
  cout << "Have you seen " << friend_name << " lately?" <<endl;

  cout << "If if yoru friend is male enter press 'm' if female press 'f'" << endl;
  char friend_sex = 0;
  cin >> friend_sex;
  if(friend_sex == 'm')
      cout << "If you see " << friend_name << " please ask him to call me" << endl;
  if(friend_sex == 'f')
      cout << "If you see " << friend_name << " please ask her to call me" << endl;

  cout << "How old is" << friend_name << "?";
  int age;
  cin >> age;
  cout << "I hear you jsut had a birthday and you are" << age << " years old!" << endl;
  if(age <=0 || age >=100)
    simple_error("you're kidding!");
  if(age < 12)
    cout << "Next you you will be " << age+1 << endl;
  if(age == 17)
    cout << "Next you you will be able to vote." << endl;
  if(age > 70)
    cout << "I hope you are enjoying retirement." << endl;

  cout << "Your's sincerly, \n\n";
  cout << "Kyle" << endl;


}


