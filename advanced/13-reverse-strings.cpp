Printing Backwards Introduction
problem
write a program that read the user name and prints it in a reverse older
example
please enter your name: Donald Duck
kcuD dlanoD

//code
#include <iostream> 
#include<string>
using namespace std;

int main() {
  string userName;
  int ind;
  
  cout<<"Please enter your name: "<<endl;
  getline(cin, userName);
  
  for(ind=userName.length()-1; ind>=0; ind--){  //0 based index so ends at -1 as the position of last character in the string
    cout<<userName[ind];
  } 
  cout<<endl;
  
  return 0;
}
