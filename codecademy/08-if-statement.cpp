The if keyword is followed by a set of parentheses (). 
  Inside the parentheses (), a condition is provided that evaluates to true or false:
If the condition evaluates to true, the code inside the curly braces {} executes.
If the condition evaluates to false, the code won’t execute.
  
  if (condition) {

  some code

}

// passing grade
#include <iostream>

int main() {

  int grade = 90;
  
  if (grade > 60) {
  
    std::cout << "Pass\n";
  
  }
  
}
