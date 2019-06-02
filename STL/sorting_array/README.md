Table of Contents
=================
   * [partition print two parts](#partition-print-two-parts)
   * [partition to two parts no sorting](#partition-to-two-parts-no-sorting)
   * [partition and sorting into two vectors](#partition-and-sorting-into-two-vectors)

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
#include <iostream>
#include <algorithm>
#include <iterator>

using namespace std;

int pivot = 8;
int arr [9] = {2,1,5,8,9,4,10,15,20};

// get partition point  
int *pt = stable_partition(arr, end(arr), [&](int n) {return n < pivot;});

// get left and right parts
vector<int> a1(arr, pt);
vector<int> a2(pt, end(arr));

// output results
for (auto& i : a1) cout << i << " ";
cout << endl;
for (auto& i : a2) cout << i << " ";
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
