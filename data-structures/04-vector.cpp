//Someone has done this already
of course, c++ has something called the "standard template library"
the STL contains a data-type known as a vector
a vector is a dynamically growing array, in which you do not need to worry about the size, it will even tell you how many items are in it.
  
#include <iostream>
#include <vector>
using namespace std;

int main(){
  vector<int> v;
  for (int i=0; i<100; i++)
    v.push_back(i * 100);
  for (int i=0; i<v.size(); i++)
    cout<<v[i]<<endl;
}
  
//but wait.. there is more
vector allow us to access all of the elements by using a "ranged for loop"
the syntax is a bit strange (it was borrowed from another language and brought into C++ later)
  
#include <iostream>
#include <vector>
using namespace std;

int main(){
  vector<int> v;
  for (int i=0; i<100; i++)
    v.push_back(i * 100);
  for (int i: v)
    cout<<i<<endl;
}
