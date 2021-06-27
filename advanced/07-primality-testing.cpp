Algorithm Analysis Lecture

Primality Testing
definition: let num >= 2 be an integer, we say that num is prime, if it is only divisor are 1 and num
example: 13 is prime, 12 is not prime

definition: let num >= 2 be an integer, and let d and k be two divisors of num. we say that k and d are complementary divisors of num, if a*k = num
example: 4 and 25 are complementary divisors of 100; 5 and 20 are complementary divisors of 100
  
  
Primality Testing: Solution 1
bool isPrime(int num){
  int countDivs;
  countDivs = 0;
  for(int i=1; i<= num; i++){
    if(num % i == 0)
      countDivs++;
  }
  if(countDivs == 2)
    return true;
  else
    return false;
}

Primality Testing: Solution 2   //half range    num/2
bool isPrime(int num){
  int countDivs;
  countDivs = 0;
  for(int i=1; i<= num/2; i++){   // 100/2 = 50
    if(num % i == 0)
      countDivs++;
  }
  if(countDivs == 1)
    return true;
  else
    return false;
}

Primality Testing: Solution 3   //square root value
bool isPrime(int num){
  int countDivs;
  countDivs = 0;
  for(int i=1; i<= sqrt(num); i++){   // sqrt(100) = 10  - square root of 100 equals to 10
    if(num % i == 0)
      countDivs++;
  }
  if(countDivs == 1)
    return true;
  else
    return false;
}
             
