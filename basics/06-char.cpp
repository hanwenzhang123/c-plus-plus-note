The char Data Type
kind of data: characters
inner representation: 
  - each char data uses 1 byte (8 bits)
  - the characters are mapped to numbers by the ASCII table, which are then represented in binary


What is my ASCII value?
    write a program that reads from the user a single character, and prints it is ASCII value
example: 
please enter a character: T
The ASCII value of T is 84

    
#include <iostream>
using namespace std;

int main() {
  char inputChar;
  int asciiValue;
  
  cout<<"Please enter a character: "<<endl;
  cin>>inputChar;
  
  asciiValue = (int)inputChart;   //cast to the int, to be more formal
  
  cout<<'The ASCII value of '<<inputChar<<' is '<<asciiValue<<endl;
  
  return 0;
}
