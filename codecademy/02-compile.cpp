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
The executable file will then be loaded to computer memory and the computer CPU (Central Processing Unit) executes the program one instruction at a time.

  
Compile: Sometimes when we compile, we want to give the output executable file a specific name. We still need to write g++ and the file name in the terminal. 
    After that, there should be -o and then the name that you want to give to the executable file:  g++ hello.cpp -o hello
  The compiler will then translate the C++ program hello.cpp and create a machine code file called hello.
  
Execute: To execute the new machine code file, all you need to do is type ./ and the machine code file name in the terminal:  ./hello
  The executable file will then be loaded to computer memory and the computer CPU will execute the program one instruction at a time.
  
    
//summary
What you read and write is called source code (usually it’s in an English-like language like C++)
What the computer executes is called executable, object code, or machine code (a machine language).
That translation is done by a program called a compiler.

Compile:
g++ hello.cpp -o hello
A compiler translates the C++ program into machine language code which it stores on the disk as a file with the extension .o (e.g. hello.o). 
  A linker then links the object code with standard library routines that the program may use and creates an executable image which is also saved on disk
  usually as a file with the file name without any extension (e.g. hello).

Execute:
./hello
The executable is loaded from the disk to memory and the computer’s CPU (Central Processing Unit) executes the program one instruction at a time.
  
  
