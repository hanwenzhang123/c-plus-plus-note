One-Way If Statements

if(condition)
  ...
  
if(condition){    //if we want to execute several extensions, compound expression, a set of instruction
  ...
}

Two-Way If-Else Statement
syntax and semantics

if(condition)   //either one way if body
  ...
else    //or another way else body
  ...
  
if(condition){    //compound version, group a set of instructure using enclosed {}
  ...
} else {
  ...
}

    
Determining Parity
write a program that reaad form the users a positive integer, and determines it is parity (even or odd)
  
example:
please enter a positive integer: 7
  7 is odd
  
  
#include <iostream> 
using namespace std;

int main() {
  int userInput;
  
  out<<"Please enter a positive integer: "<<endl;
  cin>>userInput;
  
  if(userInput % 2 == 0)
    cout<<userInput<<" is even"<<endl;
  else
    cout<<userInput<<" is odd"<<endl;

  return 0;
}
