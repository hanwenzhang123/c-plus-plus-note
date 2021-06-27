Initializing: = 
Concatenating: + 
Reading: cin
        getline(cin, str)
Indexing: str[i]
Slicing: str.substr(ind, len) //a method
Length: str.length()  //the number of the string
Comparing: ==, !=, <, >, <=, >=
Searching: str.find(s)


Initializing & Concatenating Strings

#include <iostream> 
#include <string>   //need this library
using namespace std;

int main() {
  string str;
  
  str = "abc";
  cout<<str + "def";    //abcdef
  
  retutrn 0;
}


Reading Strings

int main() {
  string str;
  
  cout<<"Please enter your name "<<endl;   //Donald Duck
  //cin>>str;       //Donald -> cin will only print first line before the first space
  getline(cin, str);   //entire line, from first line cin to the entire str, and print str
  
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
   

Comparing Strings & Lexicographic Order

int main() {
  string str1, str2;
  
  str1 = "abc";
  str2 = "de";
  
  if(str1<str2)
        cout<<str<<" is smaller than "<<str2<<endl; 
  else
        cout<<str<<" is not smaller than "<<str2<<endl;
  
  return 0;
}
//abc is smaller than de
//comparing string is not based on the size but alphabetic order
  
abcdefg
abcdxyz
//here we compare to 'e' and 'x' in this case 'e' is less than 'x'
  

Searching in a String
Searching: str.find(s)
        
main(){
  string str = "abcdbcdefg";
        
  cout<<str.find("de")<<endl;
        
  if(str.find("xyz") == string::npos)
     cout<<"Not Found"<<endl;
  else
     cout<<"Found"<<endl;
        
  cout<<str.find("cd");
  cout<<str.find("cd", 3);
          
  return 0;
}
// 6
// Not Found
// 2
  
