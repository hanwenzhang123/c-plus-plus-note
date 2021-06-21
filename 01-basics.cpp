/* this program reads two integers from the user and prints their sum */

#include <iostream>
using namespace std;

int main()
{
  init un1;   //will hold the first input
  int num2;   //will hold the second input
  int sum;    //will hold the sum
  
  cout <<'please enter two numbers separated by a sace:'<<endl;
  cin>>num1>>num2;
  
  sum = num1 + num2;
  
  cout<<num1<<' + '<<num2<<' = '<<sum<<endl;
  
  return 0;
}
