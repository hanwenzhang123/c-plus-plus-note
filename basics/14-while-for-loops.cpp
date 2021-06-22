Iterative Execution
- while loops
- for loops
  
While Lopps
while(condition){   //while the conidtion is true, body goes over and over repeating
  ...
}   //while the condition is false, the loop breaks out

while(condition)    //for a single statement, no need for {}


For Loops
for(initialization; condition; increment) { 
  ...   //initialize first, evaluate the condition either true or false, if true, the body is executed followed by increment
}       //if the condition is false, the for loop ends
 
for(initialization; condition; increment)
  
  
Solve let us count
problem
write a program that reada a positive integer n, and prints the numbers from 1 up to n.
  
example
Please enter a positive integer: 4 
  - 1, 2, 3, 4

While Lopps
int main(){
  int n;
  int counter;
  
  count<<"Please enter a positive integer: ";
  cin>>n;
  
  counter = 1;
  
  while(counter<=n){
    count<<counter<<endl;
    counter++;
  }
  return 0;;
}


For Loops
int main(){
  int n;
  int counter;
  
  count<<"Please enter a positive integer: ";
  cin>>n;
  
  for(counter=1; counter<=4; counter++){
    count<<counter<<endl;
  }
  return 0;;
}


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
enter the students' grades (separated by a space): 71 86 68 94
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
  for(count =1; count<= numOfStudents ; count++) {
    cin>>curr;
    sum += curr;
  }
  
  average = (double)sum / (double)numOfStudents;    //to be sure to use the division and return the value to double
  
  cout<<"The average is "<<average<<endl;
  
  return 0;
}
 
  
