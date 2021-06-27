Solving Quadratic Equations
problem
write a program that reads 3 real numbers, representing coefficients of a quadratic equation, and prints the solutions of the equation, if there are any, or an appropriate message. 
example
please enter coefficients of quadratic equation: 1 -5 6
  the equation: 1x^2 + -5x + 6 = 0
  the solutions: 2 3
  
cases of solutions
- two real solutions
  e.g. x^2+5x+6=0   x1=2  x2=3
- one real solution
  e.g. x^2+2x+1=0   x1=-1
- no real solution
  e.g. x^2+1=0
- no solutions
  e.g. 0x^2+0x+5=0
- all reals
  e.g. 0x^2+0x+0=0
    
    
//code
#include <iostream> 
#include <cmath> 
using namespace std;

//constant to represent type of solutions to an euqation
const int NO_SOLUTION = 0;
const int ONE_REA_SOLUTION = 1;
const int TWO_REAL_SOLUTIONS = 2;
const int ALL_REALS = 3;
const int NO_REAL_SOLUTION = 4;

//quadratic: solve the quadratic equation: ax^2+bx+c=0
//input from user: 3 real numbers, representing coefficients of a quadratic equation
//output to user: the solutions to equation(output parameters), if there are any, or an appropriate message
int main() {
  double a, b, c, x1, x2;
  cout<<"Please enter coefficients of quadratic equation:\n";
  cin>>a>>b>>c;
  cout<<"The equation: "<<a<<"x^2 + "<<b<<"x + "<<c<<" = 0"<<endl;
  switch (quadratic(a, b, c, x1, x2)){
    case TWO_REAL_SOLUTIONS:
      cout<<"Solutions: "<<x1<<" "<<x2<<endl; break;
    case ONE_REAL_SOLUTION:
      cout<<"One Solutions: "<<x1<<endl; break;
    case NO_REAL_SOLUTION:
      cout<<"No real solution"<<endl; break;
    case NO_SOLUTION:
      cout<<"No solutions"<<endl; break;
    case ALL_REALS:
      cout<<"All real numbers are solutions"<<endl; break;
      
    default:
      cout<<"Error"<<endl; break;
  }
  return 0;
}
  
int quadratic(double a, double b, double c, double& outX1, double& outX2){  //update outX1 & outX2
  double delta,
  if (a != 0.0){
    delta = b*b - 4*a*c;
    if (delta > 0){
      x1 = (-b + sqrt(delta))/(2*a);
      x2 = (-b - sqrt(delta))/(2*a);
      outX1 = x1;
      outX2 = x2;
      return TWO_REAL_SOLUTIONS;
    }
    else if (delta == 0) {
      x1 = -b/(2*a);
      outX1 = x1;
      return ONE_REAL_SOLUTION;
    }
    else
      return NO_REAL_SOLUTION;
  }
  else
    return linear(b, c, outX1);
}
        
int linear(double a, double b, double& outX1){
  double x;
  if (a != 0){
    x = -b/a;
    outX = x;
    return ONE_REA_SOLUTION;
  }
  else if ((a == 0) && (b == 0)){
    x = 0;
    outX = x;
    return ALL_REALS;
  }
  else  //in this case a==0 && b != 0
    return NO_SOLUTION;
}
    
