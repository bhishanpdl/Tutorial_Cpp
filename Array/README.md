Table of Contents
=================
   * [accumulate](#accumulate)
   * [algorithm: all_any_none_of](#algorithm-all_any_none_of)
   * [numeric: adjacent_difference](#numeric-adjacent_difference)

# accumulate
```c++
#include <iostream>
#include <vector>
#include <numeric>
#include <string>
#include <functional>
 
int main()
{
    std::vector<int> v{1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
 
    int sum = std::accumulate(v.begin(), v.end(), 0);
 
    int product = std::accumulate(v.begin(), v.end(), 1, std::multiplies<int>());
 
    auto dash_fold = [](std::string a, int b) {
                         return std::move(a) + '-' + std::to_string(b);
                     };
 
    std::string s = std::accumulate(std::next(v.begin()), v.end(),
                                    std::to_string(v[0]), // start with first element
                                    dash_fold);
 
    // Right fold using reverse iterators
    std::string rs = std::accumulate(std::next(v.rbegin()), v.rend(),
                                     std::to_string(v.back()), // start with last element
                                     dash_fold);
 
    std::cout << "sum: " << sum << '\n'
              << "product: " << product << '\n'
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
