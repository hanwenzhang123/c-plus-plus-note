When writing code, we might consider the following qualities:
Correctness
  or whether our code works correctly, as intended.
Design
  or a subjective measure of how well-written our code is,
  based on how efficient it is and how elegant or logically readable it is, without unnecessary repetition.
Style 
  or how aesthetically formatted our code is, in terms of consistent indentation and other placement of symbols. 
  Differences in style don’t affect the correctness or meaning of our code, but affect how readable it is visually.

To run our program, we’ll use a CLI, or command-line interface

source code - complier - machine code
A program called a compiler will take source code as input and produce machine code as output. 
  
  
//hello world
#include <stdio.h>  //end with .h refer to some other set of code, like a library, standard input/output library, which contains the printf function.
  
int main(void)
{
    printf("hello, world");
}
  
