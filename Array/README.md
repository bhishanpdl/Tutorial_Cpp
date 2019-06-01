Table of Contents
=================
   * [accumulate](#accumulate)
   * [algorithm: all_any_none_of](#algorithm-all_any_none_of)
   * [numeric: adjacent_difference](#numeric-adjacent_difference)
   * [for_each](#for_each)

# accumulate
```c++
#include <iostream>
#include <vector>
#include <numeric>
#include <string>
#include <functional> // multliplies<int>()

using namespace std;
 
int main(){
vector<int> v{1, 2, 3, 4};

int mysum = accumulate(v.begin(), v.end(), 0);

int myproduct = accumulate(v.begin(), v.end(), 1, multiplies<int>());

auto dash_fold = [](string a, int b) {
                     return move(a) + '-' + to_string(b);
                 };

string s = accumulate(next(v.begin()), v.end(),
                                to_string(v[0]), // start with first element
                                dash_fold);

// Right fold using reverse iterators
string rs = accumulate(next(v.rbegin()), v.rend(),
                                 to_string(v.back()), // start with last element
                                 dash_fold);

cout << "sum: " << mysum << '\n'
     << "product: " << myproduct << '\n'
     << "dash-separated string: " << s << '\n'
     << "dash-separated string (right-folded): " << rs << '\n';
}
```

# algorithm: all_any_none_of
```c++
#include <vector>
#include <numeric>
#include <algorithm> // all_of, none_of, any_of, copy_n, iota
#include <iterator>
#include <iostream>
#include <functional>
 
int main()
{
    std::vector<int> v(10, 2);
    std::partial_sum(v.cbegin(), v.cend(), v.begin());
    std::cout << "Among the numbers: ";
    std::copy(v.cbegin(), v.cend(), std::ostream_iterator<int>(std::cout, " "));
    std::cout << '\n';
 
    if (std::all_of(v.cbegin(), v.cend(), [](int i){ return i % 2 == 0; })) {
        std::cout << "All numbers are even\n";
    }
    if (std::none_of(v.cbegin(), v.cend(), std::bind(std::modulus<int>(), 
                                                     std::placeholders::_1, 2))) {
        std::cout << "None of them are odd\n";
    }
    struct DivisibleBy
    {
        const int d;
        DivisibleBy(int n) : d(n) {}
        bool operator()(int n) const { return n % d == 0; }
    };
 
    if (std::any_of(v.cbegin(), v.cend(), DivisibleBy(7))) {
        std::cout << "At least one number is divisible by 7\n";
    }
}
```

# numeric: adjacent_difference
```c++
#include <iostream>  
#include <functional> // for multiplies function 
#include <numeric>   //for adjacent_difference 
  
using namespace std; 
  
int myfun (int x, int y)  
{ 
    return x+y; 
} 
  
int main ()  
{ 
    int a[] = { 1, 2, 3, 4, 5, 6} ; 
    int b[6]; 
      
    // using adjacent_difference function 
    adjacent_difference (a, a+6, b); 
    cout << "\nResult using adjacent_difference: "; 
    for (int i=0; i<6; i++)  
        std::cout << b[i] << ' ' ;    
      
    // using adjacent_difference function 
    // user defined function     
    adjacent_difference (a, a+6, b, myfun); 
    cout << "\nResult using accumulate with user-"
             "defined function: "; 
    for (int i=0; i<6; i++)  
        std::cout << b[i] << ' '; 
      
    // using adjacent_difference with pre-defined function 
    adjacent_difference (a, a+6, b, multiplies<int>() ) ; 
      
    cout << "\nResult using accumulate with pre-defined function: " ; 
    for (int i=0; i<6; i++)  
        std::cout << b[i] << ' '; 
      
    return 0; 
} 
```

# for_each
```c++
#include <iostream>
#include <vector>

using namespace std;

int arr[4] = {10,20,30,40};
vector<int> v = {10,20,30,40};

//increase by 1
std::for_each(v.begin(), v.end(), [](int &n){ n++; });
for (auto &x: v) cout << x << " "; // 11 21 31 41 

//decrease by 1
std::for_each(begin(v), end(v), [](int &n){ n--; });
for (auto &x: v) cout << x << " "; // 10 20 30 40 

//multiply by 2
std::for_each(v.begin(), v.end(), [](int &n){ n=n*2; });
for (auto &x: v) cout << x << " "; // 20 40 60 80

//for_each with user function
void printx2(int x) { cout << x * 2 << " "; }

vector<int> vec = {10,20,30,40};
for_each(vec.begin(), vec.end(), printx2);  // 20 40 60 80 

//for_each with array
for_each(arr, arr+4, printx2);  // 20 40 60 80

//for_each with struct object
struct MultiplyBy3 { 
    void operator() (int a){ 
        cout << a * 3 << " "; 
    } 
};

vector<int> myvec = {10,20,30,40};
MultiplyBy3 m3;

for_each(myvec.begin(), myvec.end(), m3); // 30 60 90 120 


```
