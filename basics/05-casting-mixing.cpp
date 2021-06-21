Type Casting
Casting: converting the representation of a data from one type to another type

int main(){
  int x1, x2;
  double y1, y2;
  
  x1 = 6;
  y1 = 6.7;
  
  y2 = (double)6;   //convert to double 6.0, y2 = 6.0
  x2 = (int) 6.7;   //convert to integer 6, x2 = 6
  
  return 0;
}


Expressions with Mixed Types
Accuracy comes first, integer can be convert to double, but double can not be converted to integer

int main(){
  int x;
  double y;
  
  cout<< 5/2 <<endl;  //div - 2
  cout << 5.0/2.0 <<endl; //division - 2.5
  cout<< 5.0/2 <<endl;  //mixing types, compiler will try to match the data type - 2.5
  
  x = 5/2;    //2
  y = 5/2;    //2.0 (y is double)
  
  return 0;
}
  
