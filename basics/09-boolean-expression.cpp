Atomic Boolean Expression
- the bool literals - true, false
- arithmetic expression compared with relational operator (<, >, <=, >=, ==(check if the value if equal), !=(check not equal))
  
Compound Boolean Expression
- simple boolean expressions combined with boolean operators (!, &&, ||)
  
  
int main(){
  bool b;
  
  b=true; //boolean expression
  b=(true & !b); //compound expression
  
  x = 3;
  b = (x < 5);  //true - Atomic Boolean Expression
  b = (x >= 0) && (x < 5);  //true
  b = (x == 3) || (x == 4); //true
  
  return 0;
}
     
