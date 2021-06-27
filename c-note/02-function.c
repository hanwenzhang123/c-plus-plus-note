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

   
