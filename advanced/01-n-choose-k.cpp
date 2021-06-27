A set of n items, choose k items
order does not matter
0<=k<=n

K-combinations problem
definite: let n and k be two nonnegative integers, such that k <= n.
  we define k-combinations as the number of unordered selections of k distinct elements from the set of size n.
  k-combinatiins is denoted by (nk) and is also called n choose k
  n=5 K=3 //C(5, 3) = 5!/3!2! = 120/12 = 10
  
  theorem: let n and k be two nonnegative integers, such that k<=n. 
    the number of k-combinations of a set with n elements equals 
    C(n, k) = (n-1 choose k) + (n-1 choose k-1)
            = n! / k!(n-k)!
  
Problem
write a program that reads from the user two positive integer n, k(n>=k) and prints the value n choose k
example 
please enter n and k (k<=n):  5 3
    5 choose 3 is 10
    

int main() {
  int n, k, i, nFact, kFact, n_kFact, k_comb;
  
  cout<<"Please enter n and k (k<=n): "<<endl;
  cin>>n>>k;

  nFact = 1;    //nFact = factorial(n)
  for (i=1; i<=n; i++)
    nFact *= i;     //multiply up to n
    
  kFact = 1;    //nFact = factorial(k)
  for (i=1; i<=k; i++)
    kFact *= i;     //multiply up to k
    
  n_kFact = 1;  //nFact = factorial(n-k)
  for (i=1; i<=n-k; i++)
    n_kFact *= i;  //multiply up to n-k
    
  k_comb = nFact / (kFact*n_kFact);
  cout<<n<<" choose "<<k<<" is "k_comb<<endl;
  return 0;
}
     
