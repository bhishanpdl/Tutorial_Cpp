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