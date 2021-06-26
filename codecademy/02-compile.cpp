C++ is a compiled language. 
That means that to get a C++ program to run, you must first translate it from a human-readable form to something a machine can “understand.” 
That translation is done by a program called a compiler.


When you program in C++, you mainly go through 4 phases during development:

Code — writing the program
Save — saving the program
Compile — compiling via the terminal
Execute — executing via the terminal
And repeat (debug the errors if needed).
  
  
  
Compile: A computer can only understand machine code. 
  A compiler can translate the C++ programs that we write into machine code. 
  To compile a file, you need to type g++ followed by the file name in the terminal:   g++ hello.cpp
  
  
The compiler will then translate the C++ program hello.cpp and create a machine code file called a.out.
Execute: To execute the new machine code file, all you need to do is type ./ and the machine code file name in the terminal:  ./a.out
The executable file will then be loaded to computer memory and the computer’s CPU (Central Processing Unit) executes the program one instruction at a time.
