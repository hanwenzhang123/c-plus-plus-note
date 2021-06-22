Switch Statements

switch(numeric-expression){
  case constant1: //if this constant1 matches the numeric expression then run code and break, otherwise, go next
  ...
  ...
    break;
  case constant2:  //if this constant2 matches the numeric expression then run code and break, otherwise, go next
  ...
  ...
    break;
    
  default:    //if no constant expressions match, the default body would be executed, break will break out the switch statement
  ...
  ...
    break;
}


Computing Value of a Simple Expression
Write a progran that reads from the user a simple mathematical expression (operators allowed: +, -, /, *), and prints its value.
  
 example
 please enter an expression of the form argument op argument: 5.2 * 4 //20.8

#include <iostream> 
using namespace std;

int main() {
  double arg1, arg2;
  char op;
  
  cout<<"Please enter an expression of the form arg1 op arg2: "<<endl;
  cin>>arg1>>op>>arg2;

  switch(op){
    case '+':
      res = arg1 + arg2;
      cout<<res<<endl;
      break;
      
    case '-':
      res = arg1 - arg2;
      cout<<res<<endl;
      break;
      
    case '*':
      res = arg1 * arg2;
      cout<<res<<endl;
      break;
      
    case '/':
      if(arg2 != 0){
      res = arg1 / arg2;
      cout<<res<<endl;
      }
      else
        cout<<"Ilegal expression"<<endl;
      break;
      
    default:
      cout<<"Ilegal expression"<<endl;
      break;
  }
  
  return 0;
}


Switch Statement - Syntactic Notes
- the numeric-expression must be of type int (short int, int, or long int), char or bool
- the case labels must be constants (literals or named constants).
- if no case label matches the value of numeric-expression, control branches to the default label 
  (if there is no default label than control passes to the statement following the entire switch statement)
- after a branch is taken, control proceeds sequentially until either break or the end of the switch statement occurs. 
  That is whty there is usually a break at the end of each branch.
  
    
                                     
