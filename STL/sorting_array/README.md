# partition print two parts
```c++
#include <algorithm>
#include <array>
#include <iostream>
#include <iterator>

std::array<int, 9> v = { 1, 2, 3, 4, 5, 6, 7, 8, 9 };
// std::vector<int> v = { 1, 2, 3, 4, 5, 6, 7, 8, 9 };

auto is_even = [](int i){ return i % 2 == 0; };
std::partition(v.begin(), v.end(), is_even);

auto p = std::partition_point(v.begin(), v.end(), is_even);

std::cout << "Before partition:\n    ";
std::copy(v.begin(), p, std::ostream_iterator<int>(std::cout, " "));
std::cout << "\nAfter partition:\n    ";
std::copy(p, v.end(), std::ostream_iterator<int>(std::cout, " "));

Before partition:
    8 2 6 4 
After partition:
    5 3 7 1 9 
```

# partition to two parts no sorting
```c++
int pivot = 8;
int arr [9] = {2,1,5,8,9,4,10,15,20};

// get partition point  
int *pt = std::stable_partition(arr, std::end(arr), [&](int n) {return n < pivot;});

// create two vectors consisting of left and right hand side
// of partition
std::vector<int> a1(arr, pt);
std::vector<int> a2(pt, std::end(arr));

// output results
for (auto& i : a1)
    std::cout << i << " ";
std::cout << '\n';

for (auto& i : a2)
    std::cout << i << " ";
    
 2 1 5 4 
8 9 10 15 20
```

# partition and sorting into two vectors
```c++
std::vector<int> vec = {2,1,5,8,9,4,10,15,20};

auto is_lower_than_8 = [](int i){ return i < 8; };

std::partition(vec.begin(), vec.end(), is_lower_than_8 );

auto par = std::partition_point(vec.begin(), vec.end(), is_lower_than_8 );

std::cout << "Before partition:\n    ";
std::vector<int> p1(vec.begin(), par);
std::sort(p1.begin(), p1.end());
std::copy(p1.begin(), p1.end(), std::ostream_iterator<int>(std::cout, " "));

std::cout << "\nAfter partition:\n    ";
std::vector<int> p2(par, vec.end());
std::sort(p2.begin(), p2.end());
std::copy(p2.begin(), p2.end(), std::ostream_iterator<int>(std::cout, " "));

Before partition:
    1 2 4 5 
After partition:
    8 9 10 15 20 
```
