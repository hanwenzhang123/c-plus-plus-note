Asymptotic Analysis Example

We compare the asymptotic order of the number of primitive operations executed by a process, as a function of its input size

T(n) = 3n^2 + 6n - 15 = theta(n^2)

Definition
let f(n) and g(n) be two functions mapping positive integers to positive real numbers
we say that f(n) = theta(g(n)) 
  if there exist positive real constants c1, c2 and a positive integer constant n0 such that
  c2*g(n)<=f(n)<=c1*g(n) for all n >= n
  
show that: 3n^2 + 6n - 15 = theta(n^2)
        //    f(n)           g(n)
proof:  c1 = 9
        c2 = 3
        n0 = 3
then for all n >= n0 we have:
  3n^2 <= 3n^2 + 6n - 15 <= 3n^2 + 6n <= 3n^2 + 6n^2 = 9n^2
   3n^2 <= 3n^2 + 6n - 15 <= 9n^2
   
Therefore: 3n^2 + 6n - 15 = theta(n^2)
    
