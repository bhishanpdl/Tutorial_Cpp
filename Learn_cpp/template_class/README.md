# Using templates in headers
Ref: https://isocpp.org/wiki/faq/templates#templates-defn-vs-decl
## Method 1
File: foo.h
```cpp
// File "foo.h"
template<typename T>
extern void foo();
```

File: foo.cpp
```cpp
// File "foo.cpp"
#include <iostream>
#include "foo.h"
template<typename T> void foo()
{
  std::cout << "Here I am!\n";
}
template void foo<int>();
```

File: main.cpp
```cpp
// File "main.cpp"
// Command: rm -rf a.out; g++ foo.cpp  main.cpp -std=c++11 && ./a.out
#include "foo.h"
int main()
{
  foo<int>();
}
```


## Method 2
File: foo.h
```cpp
// File "foo.h"
template<typename T>
extern void foo();
```

File: foo.cpp
```cpp
// File "foo.cpp"
#include <iostream>
#include "foo.h"
template<typename T> void foo()
{
  std::cout << "Here I am!\n";
}
```

File: foo_impl.cpp
```cpp
// File "foo_impl.cpp"
#include "foo.cpp"
template void foo<int>();
```

File: main.cpp
```cpp
// File "main.cpp"
// Command: rm -rf a.out; g++ foo.cpp foo_impl.cpp main.cpp -std=c++11 && ./a.out
#include "foo.h"
int main()
{
  foo<int>();
}
```
