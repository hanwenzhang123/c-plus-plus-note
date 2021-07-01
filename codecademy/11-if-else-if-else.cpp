The else if statement always comes after the if statement and before the else statement. The else if statement also takes a condition.
  
if (condition) {

  some code

} else if (condition) {

  some code

} else {

  some code

}



if (grade == 9) {
 
  std::cout << "Freshman\n";
 
} 
else if (grade == 10) {
 
  std::cout << "Sophomore\n";
 
}
else if (grade == 11) {
 
  std::cout << "Junior\n";
 
} 
else if (grade == 12) {
 
  std::cout << "Senior\n";
 
}
else {
 
  std::cout << "Super Senior\n";
 
}



#include <iostream>

int main() {

  double ph = 4.6;

  if (ph > 7) {

    std::cout << "Basic\n";

  }
  else if (ph < 7) {

    std::cout << "Acidic\n";

  }
  else {

    std::cout << "Neutral\n";

  }  

}
  
