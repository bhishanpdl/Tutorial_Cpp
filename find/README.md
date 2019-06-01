# Find element in an array
```c++
#include <iostream> // std::cout
#include <algorithm> // std::find
#include <vector> // std::vector

using namespace std;

int myints[] = {10,20,30,40};
int *p;
int ser;

ser = 30;
p = find(myints, myints+4, ser);
if (p != myints+4)
    cout << "Element found in myints: " << *p << endl; // Element found in myints: 30
else
    cout << ser << "not found in " << "myints."
    
ser = 50;
p = find(myints, myints+4, ser);
if (p != myints+4)
    cout << "Element found in myints: " << *p << endl;
else
    cout << ser << " not found in " << "myints." // 50 not found in myints.
```

# Find element in vector
```c++
vector<int> vec {10,20,30,40,30};
vector<int>::iterator it;

ser = 30;
it = find(vec.begin(), vec.end(), ser);

if (it != vec.end())
    cout << "Element found in myints: " << *it << endl;
else
    cout << ser << " not found in " << "myints."
    
// Find position
ser = 50;
it = find(vec.begin(), vec.end(), ser);

if (it != vec.end()){
    cout << "Element " << ser << " found at position: ";
    cout << it - vec.begin() + 1 <<  endl;
}
else
    cout << "Element not found\n";
```

# find_if find_if_not
```c++
bool is_odd(int i){ return i%2;}

// get the vector
for (int i=1;i<=5;i++)
    vec.push_back(i+30);

it = find_if(vec.begin(), vec.end(), is_odd);

cout << "The first odd values is " << *it << endl;

it = find_if_not(vec.begin(), vec.end(), is_odd);

cout << "The first non-odd (even) values is " << *it << endl;
```

# find_end
```c++
// Defining first container 
vector<int>v = {10, 20, 30, 4, 5, 6, 7, 8, 9, 10, 11,  
                10, 20, 30}; 

// Defining second container 
vector<int>v1 = {10, 20, 30};  

// Using std::find_end 
it = find_end(v.begin(), v.end(),
              v1.begin(),v1.end()); 

// Displaying the index where the last common occurrence begins 
cout << (it - v.begin()) << "\n"; 

// using user defined function for find_end
// Using std::find_end 
it = std::find_end(v.begin(), v.end(),
                   v1.begin(), v1.end(), is_equal); 
  
// Displaying the index where the last common occurrence begins 
cout << (it - v.begin()) << "\n";
```

# search
```c++
v1.clear();

for (int i=1;i<=7;i++)
    v1.push_back(i);

v1.push_back(3);
v1.push_back(4);
v1.push_back(5);

for (int &x: v1) cout << x << " ";

vector<int> v2 = {3,4};

it = std::search(v1.begin(), v1.end(),
                 v2.begin(), v2.end());

// checking if iterator it contains end pointer of v1 or not 
if (it != v1.end()) { 
    cout << "vector2 is present firstly at index " 
         << (it - v1.begin()); 
} else { 
    cout << "vector2 is not present in vector1"; 
} 

// Using std::find_end to find the last occurrence of v2 
it = std::find_end(v1.begin(), v1.end(),
                   v2.begin(), v2.end()); 
   
// checking if iterator i1 contains end pointer of v1 or not 
if (it != v1.end()) { 
    cout << "\nvector2 is present lastly at index " 
         << (it - v1.begin()); 
} else { 
    cout << "vector2 is not present in vector1"; 
} 
```
