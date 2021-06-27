//example 1
int main(){
  int n=3;
  cout<<"Before func: "<<n<<endl;
  func(n);
  cout<<"After func: "<<n<<endl;
  return 0;
}

void func(int n){   //the void keyword specifies that the function does not return a value
  n=4;
  cout<<"Inside func: "<<n<<endl;   //print
}

Before func: 3
Inside func: 4
After func: 3
  
  
  
parameter passing
two ways to pass parameters to a function:
- call-by-value
syntax: void func(int x)
semantics: when passing by value, the argument is evaluated and its value is passed
  
- call-by-reference
syntax: void func(int& x)
semantics: when passing by reference, a reference to the argument memory location is passed
  
//example 2 
int main(){
  int a=3, b=4;
  cout<<"Before: a= "<<a<<" b= "<<b<<endl;
  swap(a, b);
  cout<<"After: a= "<<a<<" b= "<<b<<endl;
  return 0;
}

void swap(int& a, int& b){
  int temp;
  temp = a; //temp = 3
  a = b;   //a = 4
  b = temp;  //b = 3
}

Before: a = 3 b = 4
After: a = 4 b = 3
  
  
