Counting and Summing Digits
problem
write a program that reads a positive integer num, and prints the number of digits in num and their sum.
  
example
please enter a positive integer: 375
375 has 3 digits and their sum is 15
  
int main(){
  int num;
  int sumDigits, countDigits;
  int currDigit;
  
  count<"Enter a positive integer: "<<endl;
  cin>>num;
  
  sumDigits = 0;
  countDigits = 0;
  
  while(num > 0){
    currDigit = num%10;
    countDigits++;
    sumDigits += currDigit;
    num = num/10;
  }
  
  cout<<num<<" has "<<countDigits<<" digits.";
  cout<<"and their sum is "<<sumDigits<<endl;
}
  
  
Computing the Average
problem
write a program that reads grades of students in a class, and prints the average.

example
please enter the number of students in the class: 4
enter the students grades (separated by a space): 71 86 68 94
the class average is 79.75
  
  
#include <iostream> 
using namespace std;

int main() {
  int numOfStudents;
  int count;
  int curr, sum;
  double average;
  
  cout<<"Please enter the number of students in class: "<<endl;
  cin>>numOfStudents;

  cout<<"Please enter students' grades (separate by a space)"<<endl;
  
  sum = 0
  for(count =1; count<= numOfStudents ; count++) {    //when we knoe the number of iterations we want to do, then we choose a for loop
    cin>>curr;
    sum += curr;
  }
  
  average = (double)sum / (double)numOfStudents;    //to be sure to use the division and return the value to double
  
  cout<<"The average is "<<average<<endl;
  
  return 0;
}
 
  
Revision: Computing the Average  - we do not know how many numbers(students) will be in counting.
problem
write a program that reads a sequence of grades (till -1 is entered), and prints the average.
  
example
enter the grades separated by a space. end your sequence by typing -1: 71 86 68 94 -1
the class average is 79.75
  
  
#include <iostream> 
using namespace std;

int main() {
  bool seenEndOfInput;
  int sum, numOfStudents;
  int curr;
  double average;
  
  cout<<"Enter the grades separated by a space"<<endl;
  cout<<"End the sequence by typing -1: "<<endl;
  
  sum = 0;
  numOfStudents = 0;
  
  seenEndOfInput = false; 
  while(seenEndOfInput == false) {    //when we do not know how many iterations we are going to have, while loop is a better choice. 
    cin>>curr;
    if (curr == -1) {
      seenEndOfInput = true;
    } else {
      sum += curr;
      numOfStudents++;
    }
  } 
  
  average = (double)sum / (double)numOfStudents;
  cout<<"The class average is "<<average<<endl;
  return 0;
}

  
