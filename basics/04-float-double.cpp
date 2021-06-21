float and double data types (floating point numbers)

kind of data: real numbers (could have fractional part)   
  //double is more standard, the difference is about precision -- how much data the variable can hold
inner representations:
- double: each data uses 8 bytes (64 bits)    //first 4 bytes will be int and last 4 bytes will be fractional part
- float: each data uses 4 bytes (32 bits)   //the decimal point can float around inside a bunch of bits
- the numbers are represented by the floating point method (IEEE-754)
C++ literals: 
- for double: 3.4, -8.975, 6.0    //if only 6 that will be treated as integer
- for float: 3.4f, -8.975f    //add a prefix of f at the end of the number
  
  
  
int main() {
  int x;
  double y;
  
  x = 6;
  y = 7.658;
  
  return 0;
}
