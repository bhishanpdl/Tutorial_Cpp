# print 2d vector
```c++
template<typename T>
void print2d(T vec2d){
     for (auto row: vec2d){
         for (auto x: row) 
             cout << x << " ";
             cout << endl;
    }
}
```
