Classifying a character
problem
write a program that read from the user a character, and classifies it to one of the following:
- lower case letter
- upper case letter
- digit
- not alpha-numeric character

example
please enter a character: D
D is an upper case letter


#include <iostream> 
using namespace std;

int main() {
  char userCh;
  
  cout<<"Please enter a character: "<<endl;
  cin>>userCh;

  if(userCh >= 'a' && userCh <= 'z')
    cout<<userCh<<" is a lower case letter."<<endl;
  else if(userCh >= 'A' && userCh <= 'Z')
    cout<<userCh<<" is an upper case letter."<<endl;
  else if(userCh >= '0' && userCh <= '9')
    cout<<userCh<<" is a digit."<<endl;
  else
    cout<<userCh<<" is not alpha-numeric character."<<endl;
  
  return 0;
}


Convert 24-hour to 12-hour
problem
write a program that read from the user a time entered in a 24-hour format, and prints the equivalent time in a 12-hour format.

example
please enter a time in a 24-hour format: 15:37
15:37 is 3:37pm


#include <iostream> 
#include <string>
using namespace std;

int main() {
  int hour24, minutes24;
  int hour21, minutes12;
  string period;
  char temp;
  
  cout<<"Please enter a time in a 24-hour format: "<<endl;
  cin>>hour24>>temp>>minutes24;
  
  minutes12 = minutes24;
  if(hour24 >=0 & hour24 <= 11) {
    period = "am";
    if (hour24 == 0)
      hour12 = 12;
    else
      hour12 = hour24;
  }
  else{
    period = "pm";
    if (hour24 == 12)
      hour12 = 12;
    else
      hour12 = hour24 - 12;
  }
  
  cout<<hour24<<":"<<minutes24<<" is "<<hour12<<":"<<minutes12<<" "<<period<<endl;
  
  return 0;
}
