Iterative Execution
- while loops
- for loops
  
While Lopps
while(condition){   //while the conidtion is true, body goes over and over repeating
  ...
}   //while the condition is false, the loop breaks out

while(condition)    //for a single statement, no need for {}


For Loops
for(initialization; condition; increment) { 
  ...   //initialize first, evaluate the condition either true or false, if true, the body is executed followed by increment
}       //if the condition is false, the for loop ends
 
for(initialization; condition; increment)
  
  
  
Solve let us count
problem
write a program that reada a positive integer n, and prints the numbers from 1 up to n.
  
example
Please enter a positive integer: 4 
  - 1, 2, 3, 4

  
While Lopps
int main(){
  int n;
  int counter;
  
  count<<"Please enter a positive integer: ";
  cin>>n;
  
  counter = 1;
  
  while(counter<=n){
    count<<counter<<endl;
    counter++;
  }
  return 0;;
}


For Loops
int main(){
  int n;
  int counter;
  
  count<<"Please enter a positive integer: ";
  cin>>n;
  
  for(counter=1; counter<=4; counter++){
    count<<counter<<endl;
  }
  return 0;;
}
  
