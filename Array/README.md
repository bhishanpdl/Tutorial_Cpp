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
