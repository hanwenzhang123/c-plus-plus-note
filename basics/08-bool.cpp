The bool Data Type (boolean)
kind of data: truth value (True/False)
inner representation: 
  - each bool data uses 1 byte (8 bits)
  - False is represented by a byte of 0s
  - True is any non-zero value
C++ literals: true, false
Boolean Operators: not - !, and - &&, or - ||
  
NOT - !
p     not p
true  false
false true
  
int main(){
  bool b1, b2, b3;
  
  b1=true;
  b2=!b1; //false
  
  return 0;
}


AND - &&
p     q     p and
true  true  true
true  false false
false true  false
false false false
  
int main(){
  bool b1, b2, b3;
  
  b1=true;
  b2=false;
  b3=b1 && b2;  //false
  b3=b1 && !b2;   //true
  
  return 0;
}

  
OR - ||
p     q     p or q
true  true  true
true  false true
false true  true
false false false
  
int main(){
  bool b1, b2, b3;
  
  b1=false;
  b2=b1 || !b1;  //true
  b3=b2 && (b1 || true);  //true
  
  return 0;
} 
