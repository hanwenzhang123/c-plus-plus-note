//n-choose-k
#include <iostream> 
using namespace std;

int factorial(int num); // #1 declare the function is expected to get one single argument of type integer and return an integer with a value
int kCombinations(int n, int k);

int main() {
  int n, k, k_comb;
  cout<<"Please enter n and k (n>=k): "<<endl;
  cin>>n>>k; 
  k_comb = kCombinations(n, k);
  cout<<n<<" choose "<<k<<" is "<<k_comb<<endl;
  return 0;
}

kCombinations(int n, int k){    //new function
  int nFact, kFact, n_kFact;
  nFact = factorial(n);
  kFact = factorial(k);
  n_kFact = factorial(n-k);   
  return (nFact / (kFact*n_kFact));
}

int factorial(int num){
  int factRes, i;
  
  factRes = 1;
  for (i=1, i<=num; i++)
    factRes *= i;
  
  return factRes;   //return not print, if print we can not assign it to a variable
}
  
    
