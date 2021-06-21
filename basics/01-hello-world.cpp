//hello world
#include <iostream>
using namespace std;

int main(){
  cout<<'Hello World'<<endl;
  return 0;
}


/* this program reads two integers from the user and prints their sum */
#include <iostream>
using namespace std;

int main()
{           //need to start with the variable with the type of the data and the name of the variable
  int num1;   //will hold the first input
  int num2;   //will hold the second input
  int sum;    //will hold the sum
  
  //cout is output is then endl is end line, break the line
  cout <<"please enter two numbers separated by a space:"<<endl; //in one line is fine because the compiler knows the ;
  cin>>num1>>num2;       //cin is getting the input from the user, we can also seperate it into 2 segments with ; like cin>>num1; cin>>num2;

  sum = num1 + num2;
  
  cout<<num1<<" + "<<num2<<" = "<<sum<<endl;
  
  return 0; //program ended with the exit code: 0
}
