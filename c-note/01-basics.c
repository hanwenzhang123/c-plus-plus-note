When writing code, we might consider the following qualities:
Correctness
  or whether our code works correctly, as intended.
Design
  or a subjective measure of how well-written our code is, based on how efficient it is and how elegant or logically readable it is, without unnecessary repetition.
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


//functions and arguments
Functions are small actions or verbs that we can use in our program to do something, and the inputs to functions are called arguments.

Functions can also have two kinds of outputs:
- side effects, such as something printed to the screen,
- return values, a value that is passed back to our program that we can use or store for later.
  
#include <cs50.h>
#include <stdio.h>

int main(void)
{
    string answer = get_string("What's your name? ");   //get_string will ask the user for a string, = indicates assignment
    printf("hello, %s", answer);    //f standing for “formatted” text
}

   
