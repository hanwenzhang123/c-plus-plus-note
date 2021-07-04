//Why pointers?
  - a way to store a reference to an object
  - a way to store large amounts of information not associated with a function (the heap)
  - a way to link objects together
  
//What it looks like?
  - in C++ a pointerr must specify the datatype that it points to
  - in main memory, the pointer is simply a stored number
  - the stored number represents the memory addredss of the item being pointed to
  int * ptr;

//Getting pointers to point
- pointers can be made to point to something
- the address of the item being pointed to is stored in the pointer
- we can get the address of an item by using the "address-of" operator, the ampersand "&"; in front of the variable

int x = 100;
int * ptr;
ptr = &x;

//Accessing Data From a Pointer
- pointer would be pretty useless if all they do was point
- we can access the data that aa pointerr is pointing to by "dereferencing" the pointer.
  we do this using the dereferencing operator, the star "*".
    
int x = 100;
int *ptr;
ptr = &x;
cout<<*ptr;
*ptr = 20;

//What if a pointer does not point to anything?
  - pointer always point to something
  - if the pointer is not pointing to something valid, it should point to:
    - NULL or nullptr
      
//Defining Multiple Pointers
When defining pointers, then * is assocciated with only the next item in the sequence.
      if you need multiple pointers in the same line, you need more stars!
int *ptr1, x;
int *ptr2, *ptr3;
  
