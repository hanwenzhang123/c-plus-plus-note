The int Data Type
kind of data: integer numbers - whole number
inner representation: 
  - each int data use 4 bytes (32 bits)
  - the numbers are represented using the 2/' complement method
C++ literals: 3, 4, -6, 3964
Arithmetic Operators: +, -, *, /, %, =
  
int main() {
  int x;
  int y;
  
  x=5;
  
  count<<x+2;
  y=x+2;
  x+2;
  
  count<<x-2;
  y=x*2;
  
  count<<x/2;
  count<<x%2;
  
  x=6;
  cout<<x=7;
  y=(x=8);
  y=x=9;
  
  return 0;
}

13 divided by 5 = 2 R 3
13 div 5 = 2  13 / 5
13 mod 5 = 3  13 % 5


  
Weeks and Days
if 19 days, there will be 2 weeks and 5 days
19 divide 7 = 2 R 5

19/7 = 2
19%7 = 5
  
  
#include <iostream>
using namespace std;

const int DAYS_IN_A_WEEK = 7;   //for constance, we use upper cases and seperate words with underscore //7 is the number of the week
int main() {
  int daysTraveled;
  int fullWeeks, remainingDays;
  
  cout<<"please enter the total days:"<<endl;
  cin>>daysTraveled;
  
  fullWeeks = daysTraveled / DAYS_IN_A_WEEK;
  remainingDays = daysTraveled % DAYS_IN_A_WEEK;  
  
  cout<<daysTraveled<<" days are "<<fullWeeks<<" weeks and "<<remainingDays<<" days."<<endl;
  
  return 0;
}
  
