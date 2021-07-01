A variable is simply a name that represents a particular piece of your computer’s memory that has been set aside for you to store, retrieve, and use data.
int: integer numbers
double: floating-point numbers
char: individual characters
string: a sequence of characters
bool: true/false values

"Every variable in C++ must be declared before it can be used!"

Before we can use a variable, we must declare, or create, it. To declare a variable, we need to provide two things:

A type for the variable.
A name for the variable.

  
Step 1: Declare a Variable
int score;
The int is the type of the variable.
The score is the name of the variable.
The ; is how we end a statement.
  
Step 2: Initialize a Variable
score = 0;
The score is the name of the variable.
The = indicates assignment.
The 0 is the value you want to store inside the variable.
Note: In C++, a single equal sign = does not really mean “equal”. It means “assign”. In the code above, we are assigning the score variable a value of 0.
  
// Declare a variable
int score;
// Initialize a variable
score = 0;
// Declare and initialize a variable here
   int year = 2019;
  
$ g++ variable.cpp
$ ./a.out
  
