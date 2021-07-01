&&: the and logical operator
||: the or logical operator
!: the not logical operator
  
  //Logical Operator: &&
  It returns true if the condition on the left and the condition on the right are both true. Otherwise, it returns false.
    
  a   	b	  a && b
false	false	false
false	true	false
true	false	false
true	true	true

For instance:

( 1 < 2 && 2 < 3 ) returns true
( 1 < 2 && 2 > 3 ) returns false
  
  
  #include <iostream>

int main() {
  
  int hunger = true;
  int anger = true;
  
  // Write the code below:
  if (hunger && anger) {
    
    std::cout << "Hangry!\n";
    
  }
  
}

//Logical Operator: II
It returns true when the condition on the left is true or the condition on the right is true. Only one of them needs to be true.
  
  a	    b 	a || b
false	false	false
false	true	true
true	false	true
true	true	true

For instance:

( 1 < 2 || 2 > 3 ) returns true
( 1 > 2 || 2 > 3 ) returns false

  
#include <iostream>

int main() {
  
  int day = 6;
  
  // Write the code below:
  if (day == 6 || day == 7) {
    
    std::cout << "Weekend!\n";
    
  }

}

//Logical Operator: !
a	    !a
false	true
true	false

For instance:

( !true ) returns false
( !false ) returns true
( !(10 < 11) ) returns false
  The keyword not can be used in the place of !.
  
  
  #include <iostream>

int main() {
  
  bool logged_in = false;
  
  // Write the code below:
  if (!logged_in) {
    
    std::cout << "Try again!\n";
    
  }
  
}
