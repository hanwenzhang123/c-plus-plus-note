The char Data Type
kind of data: characters
inner representation: 
  - each char data uses 1 byte (8 bits)
  - the characters are mapped to numbers by the ASCII table, which are then represented in binary
C++ literals: 'a', 'B', '3', '$' //(using single quote for characters, not for double quote which is for strings)
              '\n' //(new line, break the line)   
              '\t' //(tab) 
Arithmetic Operators: +, -, =
  
int main() {
  char ch; 
  ch = 'a';
  cout<<'b'<<endl;
  cout<<"abc"<<'\n';
  cout<<"abc\n";
  return 0;
}

int main() {
  char ch1, ch2;
  
  ch1 = 'a';
  ch2 = 'a' + 1;
  
  cout<<ch2<<endl;    //'b'
  cout<<'a' + 1<<endl; //98 - add data different type, one of the type is then casted to the other type in order to match, here casted to the int, a becomes 97
  cout<<(char)('a' + 1)<<endl;  //B - transform back to a char, 98 is a B
  
  return 0;
} 

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


Convert to UPPER CASE
Example: 
please enter a lower case letter: t
the upper case of t is T

#include <iostream>
using namespace std;

int main() {
  char lowerCaseLetter, upperCaseLetter;
  int offset;

  cout<<"Please enter a lower case letter: "<<endl;
  cin>>lowerCaseLetter;

  offset = (int)(lowerCaseLetter - 'a');
  upperCaseLetter = (char)('A' + offset);   //that will be uppercase letter
  
  cout<<"The upper case of "<<lowerCaseLetter<<" is "<<upperCaseLetter<<endl;
  return 0;
}
   
