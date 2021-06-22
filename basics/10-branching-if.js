syntax and semantics
if(condition)   //no semicolon

  
Computing the absolute value
write a program that reads from the user an integer, and prints it is absolute value

Example:
please enter an interger: -7
  |-7| = 7

  
#include <iostream> 
using namespace std;

int main() {
  int userInput;
  
  cout<<"Please enter an integer: "<<endl;
  cin>>userInput;

  if(userInput < 0)
    userInput *= (-1)   //userInput = userInput * (-1);
  
  cout<<userInput<<endl;
  
  return 0;
}
