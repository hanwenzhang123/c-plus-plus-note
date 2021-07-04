//Lets get dynamic!
pointers would not be much use if they would only point to objects that were created already
pointers can point to heap-dynamic memory
heap-dynamic memory is allocated when you ask for it, and remains allocated until you destroy it
this means it can survive function calls
you have to be very careful to destroy it after you are done, it is not destroyed automatically

//Well, that is new
a variable can be created on the heap for a particular datatype, but it does not have a name
if it does not have a name, how do you refer to it? ... pointers!
onnce memory is allocated onn the heap, it will not be deallocated until you do it, or the program ends
if you lose track of a heap-dynamic variable, it becomes garbage on the heap, aka, a memory leak
  
int * ptr = new int;

//for every new, there must be delete
if memory is allocated, it must be destroyed
you must destroy it once and only once, can not be twice
  - forgettinng to destoy it results in a memory leak
  - deleting it twice results inn a "double delete", which will crash your program
deleting NULL or nullptr has no effect

delete ptr; // return back to the operation system

// what about arrays?
heap-dynamic arrays do not have to have a static size
once created, heap-dynamic arrays can not grow, but they can be created to be any size initially
since we are working with a ponter, a new, lager, heap-dynamic array can be made to replace a smaller one
deleting a heap-dynamic array is a bit different

int x;
cout<<"How big? ";
cin>>x;
int * arr = new int [x];
delete [] arr;    //array

//what can we do with heap-dynamic arrays
heap-dynamic arrays are no different than the normal arryas which you have been using.
use heap dynamic arrays just like all other arryas, using the square bracket operator []
you can also use pointer arithmetic

//pointer arithmetic
C++ allows pointer to be manipulated using simple math operations
use the addition operator + to move the pointer forward some number of spaces (x = x+5 will make the pointer point to 5 elements higher in the array)
use the subtraction operator to move the pointer backwards
     
