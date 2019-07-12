 # To run c++ notebook online
Reference : https://github.com/QuantStack/xeus-cling  
- Go to QuantStack xeus-cling github repo.
- Open the notebook in binder.
- Delete all cells (hit cut button repeatedly) (or, esc dd repeatedly).
- Edit the notebook and rename its title.
- Download the notebook.
- Note: If I load a notebook in mybinder.org it takes tooooo long time, but opening quantstack notebook takes much shorter time.
  So, simpliy open that notebook, edit and save to local computer. Thats the best way.
  
# NOTE
- Do not use int main() or return 0 inside jupyter-notebook.
- Write a complete funtion in one cell. If you encounter some code run error, try to put all codes in a single cell and run it.
- Write template class in separate cell.
- We can not define same named variables with different types in different cell. The whole notebook just a single c++ script.
  
# Example of c++ notebook
```c++
// cell1

#include<iostream>
#include<vector>

using namespace std;
using vec2d_t = std::vector<vector<int>>;

//cell2
template<typename T>
void print2d(T vec2d){
     for (auto row: vec2d){
         for (auto x: row) 
             cout << x << " ";
             cout << endl;
    }
}

//cell3
class FlipTranspose {
public:
    vec2d_t flipAndInvertImage(vec2d_t& A)
    {
        for (auto &row: A) reverse(row.begin(), row.end());
        for (auto &row: A) for (int &i: row) i^=1;
        return A;
    }
};

//cell4
vec2d_t A = {{1,1,0}, {1,0,1}, {0,0,0}};
vector< vector<int> > B;

B = A;
FlipTranspose sol;

B = sol.flipAndInvertImage(A); // A is also changed in-place
print2d(A)

// cell5
A

```

# c++ jupyter-notebook shortcomings and fixes
There are some issues with jupyter-notebook. Sometimes the notebook hangs if we run some specific code, and we need to resort
alternative ways to refactor the code or re-run the code in c++ editor instead of notebook. Here are some examples of problems and fixes.

```c++
// print fuction causes jupyter kernel to restart, in those cases, run whole codes in a single cell.
std::vector<int> nums{3, 4, 2, 8, 15, 267};
auto print = [](const int& n) { std::cout << " " << n; };
 
std::for_each(nums.begin(), nums.end(), print); // This line causes jupyter-notebook restart.

// solution dont use print function just do this:
for (auto &x: nums) cout << x << " ";
```
