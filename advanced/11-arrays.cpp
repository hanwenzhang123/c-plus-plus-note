//syntactic notes
Basic properties of arrays
1. the elements are stored continuously in the memory
2. all of the elements in an array are of the same type
3. the elements are accessed using a 0-based index system

int arr [6];    //size 6
arr [0] = 4;
arr [2] = 5;
arr [5] = 7;
arr [8] = 10; //invalid indices but compiler does allow it
arr [-2] = 20;  //your responsibility to keep inbound of range
(address of arr[i]) = (address arr begins) + i * (size of each element in arr)

//syntactic notes
int main(){
  int x;
  int arr [5];
  double y;
}
static array syntax:
1. array's physical size must be a constant, and must be given at declaration.
int arr [6];  
const int X = 7;  //can not just be int X=7 because it is a variable
int arr [X];
2. array's name is a legal C++ expression.
  cout<<arr
its value is the address in the memory where the array starts.
3. initialization of array (at declaration)
int arr [6];
arr [0] = 5;
arr [1] = 7;
int arr [6] = {5, 7, 6, 2, 1, 15};
  
//Solution
Above the average(revisited)
problem
write a program that reads grades of students in a class, and prints the average and the grades that are above the average

example
please enter the number of students in the class: 4
enter the students grades (separated by a space): 71 86 68 94
the class average is 79.75
the gardes above the average are 86, 94
  
//code
#include <iostream> 
using namespace std;

const int MAX_CLASS_SIZE = 60;

int main() {
  int numOfStudents;
  int gradeList[MAX_CLASS_SIZE];
  int currGrade;
  int ind, sum;
  double average;
  
  cout<<"Please enter the number of students in class (no more than "<<MAX_CLASS_SIZE<<"): "<<endl;
  cin>>numOfStudents;
  
  //reading the grades
  for (ind = 0; ind < numOfStudents; ind++){
    cin>>currGrade;
    gradesList[ind] = currGrade;
  }
  
  //calculatng the average
  sum = 0
  for(ind = 0; ind < numOfStudents; ind++) { 
    sum += gradesList[ind];
  }
  average = (double)sum / (double)numOfStudents;
  cout<<"The class average is "<<average<<endl;
  
  //print grades above the average
  cout<<"The grades above the average are ";
  for (ind = 0; ind < numOfStudents; ind++) { 
    if (grades[ind] > average) {
      cout<<gradesList[ind]<<" ";
    }
  }
  cout<<endl;
  return 0;
}
    
