[![Binder](https://mybinder.org/badge_logo.svg)](https://mybinder.org/v2/gh/bhishanpdl/Tutorial_Cpp/master)

# Repository to learn C++

- [Link to c++ notebook](https://mybinder.org/v2/gh/bhishanpdl/Tutorial_Cpp/master)

# Using stdc++ header file in MacOS
- Copy the file [stdc++.h](https://gist.githubusercontent.com/eduarc/6022859/raw/3f81acf4e2288d9dea02bd8a7c7a2908bbaeebbe/stdc++.h) to the path `usr/local/include/bits`.
- comment the line of this file `"#include <sdtdalign>`.
- Also copy this edited file to the path `~/miniconda3/envs/pyvz/include/bits` to use this file in jupyter-notebook.

Program to test:
```c++

#include <bits/stdc++.h> 
using namespace std; 
  
// Function to print the list 
void printList(list<string> mylist) 
{ 
  
    // Get the iterator 
    list<string>::iterator it; 
  
    // printing all the elements of the list 
    for (it = mylist.begin(); it != mylist.end(); ++it) 
        cout << ' ' << *it; 
    cout << '\n'; 
} 
  
int main() 
{ 
    // Create a list with the help of constructor 
    // This will insert Geeks 5 times in the list 
    list<string> myList(5, "Geeks"); 
  
    printList(myList); 
  
    return 0; 
} 
```
