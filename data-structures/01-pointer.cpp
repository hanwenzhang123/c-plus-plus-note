Why pointers?
  - a way to store a reference to an object
  - a way to store large amounts of information not associated with a function (the heap)
  - a way to link objects together
  
What it looks like?
  - in C++ a pointerr must specify the datatype that it points to
  - in main memory, the pointer is simply a stored number
  - the stored number represents the memory addredss of the item being pointed to
  int * ptr;

Getting pointers to point
- pointers ccan be made to point to something
- the address of the item being pointed to is stored in the pointer
- we ccaan get the address of an item by using the "address-of" operator, the ampersand "&"; in front of the variable

int x = 100;
int * ptr;
ptr = &x;

Accessing Data From a Pointer
- pointer would be pretty useless if all they do was point
- we caan access the data that aa pointerr is pointing to by "dereferencing" the pointer.
  we do this using the dereferencing operator, the star "*".
    
