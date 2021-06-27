Runtime Analysis
- the running time depends on the size of the input
  parameterize running time by the size of the input
- the running time depends on the operator we use, and on the type of the data they are applied on
  ignore machine-dependent constants. we count each primitive operations as 1.

We compare the number of primitive operations executed by a process, as a function of its input size
  
- the running time depends on the machine hardware technology
  make asymptotic analysis: look at the order of growth of T(n)
  
We compare the asymptotic order of the number of primitive operations executed by a process, as a function of its input size

T(n) = 3n^2 + 6n - 15 = theta(n^2)

Rule of the thumb to get the order of growth:
- drop low-order terms
- ignore leading constants


let n be the size of the input (n = num)
  //see 07-primality-testing for code reference 
T1(n) = 5n + 4  // slowest
  = theta(n) -> T1(n)=theta(n)
  
T2(n) = 3n + 4    // a bit slower
   = theta(n) -> T2(n)=theta(n)

T3(n) = 6 square root of n + 4    //fastest
   = theta(square root of n) -> T3(n)=theta(square root of n)

Conclusions:
- T1(n) and T2(n) are asymptotically equivalent
- T3(n) is asymptotically better than T1(n) and T2(n)
  
   
