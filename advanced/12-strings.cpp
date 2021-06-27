Initializing: = 
Concatenating: + 
Reading: cin
         getline(cin, str)
Indexing: str[i]
Slicing: str.substr(ind, len) //a method
Length: str.length()  //the number of the string
Comparing: ==, !=, <, >, <=, >=
Searching: str.find(s)
          str.find(s, startInd) //from starting index


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
  

Searching in a String / from Starting Index
// return the position of first appearance
Searching: str.find(s)
          str.find(s, startInd) //from starting index
        
main(){
  string str = "abcdbcdefg";
        
  cout<<str.find("de")<<endl; //searching for de in str, it prints '6' because of its location
        
  if(str.find("xyz") == string::npos) //string::npos -> not exist in str
     cout<<"Not Found"<<endl;
  else
     cout<<"Found"<<endl;
        
  cout<<str.find("cd");  //searching in a string, 2
  cout<<str.find("cd", 3);  //searching in a string from starting index (after index 3 here), 5
          
  return 0;
}
// 6
// Not Found
// 2
// 5
           
   
