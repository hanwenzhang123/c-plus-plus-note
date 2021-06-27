Flow of a program that calls functions
int num -> factorial -> int(num!)
  
//n-choose-k
#include <iostream> 
using namespace std;

int factorial(int num); // #1 declare the function is expected to get one single argument of type integer and return an integer with a value

int main() {
  int n, k, nFact, kFact, n_kFact, k_comb;
  cout<<"Please enter n and k (n>=k): "<<endl;
  cin>>n>>k; 
  nFact = factorial(n);
  kFact = factorial(k);
  n_kFact = factorial(n-k);   
  k_comb = nFact / (kFact*n_kFact);
  cout<<n<<" choose "<<k<<" is "<<k_comb<<endl;
  return 0;
}

int factorial(int num){
  int factRes, i;
  
  factRes = 1;
  for (i=1, i<=num; i++)
    factRes *= i;
  
  return factRes;   //return not print, if print we can not assign it to a variable
}

