We can also add an else clause to an if statement to provide code that will only be executed if the condition is false.
if (condition) {

  do something

} else {

  do something else

}

#include <iostream>

int main() {

  int grade = 59;

  if (grade > 60) {

    std::cout << "Pass\n";

  }
  else {

    std::cout << "Fail\n";

  }

}
