Analyze Digits
problem
write a program that reads a positive integerr num, and prints the number of digits in num and their sum
example
please enter a positive integer: 375
  375 has 3 digits and their sum is 15
  
int num -> analyzeDigits -> 1. int(num) 2. int(amount)
  
int analyzeDigits(int num, int& outSum)
void analyzeDigits(int num, int& outSum, int& outCountDigs)
  
  
//code
#include <iostream> 
using namespace std;

int analyzeDigits(int num, int& outSum);

int main() {
  int num, countDigs, sumDigs;
  
  cout<<"Please enter a positive integer: "<<endl;
  cin>>num;
  
  countDigs = analyzeDigits(num, sumDigs);
    
  cout<<num<<" has "<<countDigs<<" digits and their sum is "<<sumDigs<<endl;    
  return 0;
}

int analyzeDigits(int num, int& outSum){
  int count, sum;
  int currDig;
  
  count = 0;
  sum = 0;
  while(num > 0){
    currDig = num % 10;
    count++;
    sum += currDig;
    num = num / 10;
  }
  outSum = sum;     //will update to the sumDigs in the main
  return count;
}
  
