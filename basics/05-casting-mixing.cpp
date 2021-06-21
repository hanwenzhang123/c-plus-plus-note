Type Casting
Casting: converting the representation of a data from one type to another type

int main(){
  int x1, x2;
  double y1, y2;
  
  x1 = 6;
  y1 = 6.7;
  
  y2 = (double)6;
  x2 = (int) 6.7;
  
  return 0;
}


Expressions with Mixed Types

int main(){
  int x;
  int y;
  
  cout<< 5/2 <<endl;
  cout << 5.0/2.0 <<endl;
  cout<< 5.0/2 <<endl;      //mixing
  
  x = 5/2;    //2
  y = 5/2;    //2.0
  
  return 0;
}
  
