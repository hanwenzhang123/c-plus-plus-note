std::cout << "Enter your password: ";
std::cin >> password;

The name cin refers to the standard input stream (pronounced “see-in”, for character input). 
  The second operand of the >> operator (“get from”) specifies where that input goes.

  
#include <iostream>

int main() {
  
  int tip = 0;
  
  std::cout << "Enter tip amount: ";
  std::cin >> tip;
  
  std::cout << "You paid " << tip << " dollars.\n";
  
}

$ g++ tip.cpp
$ ./a.out
Enter a tip amount: 
