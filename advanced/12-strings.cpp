Initializing = 
Concatenating + 
Reading cin
        getline(cin, str)
Indexing: str[i]
Slicing: str.substr(ind, len) //a method
Length: str.length()  //the number of the string


Initializing & Concatenating Strings

#include <iostream> 
#include <string>   //need this library
using namespace std;

int main() {
  string str;
  
  str = "abc";
  cout<<str + "def";
  
  retutrn 0;
}
//abcdef


Reading Strings

int main() {
  string str;
  
  cout<<"Please enter your name "<<endl;
  //cin>>str;
  getline(cin, str);
  
  cout<<str<<endl;
  
  retutrn 0;
}


Indexing Strings:
Indexing: str[i]

int main() {
  string str1, str2;
  char ch;
  
  cout<<str1[0]<" "<<str1[1]<<" "<<str1[2]<<endl;
  str1 = "abcdefg";
  
  cout<<str1[0]<<" "<<str1[1]<<" "<<str1[2]<<endl;
  ch=str1[3]    //d
  retutrn 0;
}
//abc


Slicing Strings

int main() {
  string str1, str2;
  char ch;
  
  str1 = "abcdefg";
  
  cout<<str1[0]<<" "<<str1[1]<<" "<<str1[2]<<endl;  //abc
  ch=str1[3]    //d
  
  cout<<str1.substr(3, 2)<<endl;   //de
  str2 = str1.substr(2, 3);
  cout<<str2<<endl;  //cde
  retutrn 0;
}
   
