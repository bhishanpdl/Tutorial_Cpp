# C++ Kernel
Ref: https://github.com/jupyter-xeus/xeus-cling

```bash
conda --version # it was 4.8.3 and I updated to 4.8.4 on Aug 12, 2020
conda update conda

conda create -n cling
source activate cling

conda install ipykernel  # NOTE there are TWO myenv below
python -m ipykernel install --user --name cling --display-name "xeus-cling"

conda install notebook -c conda-forge
jupyter notebook # Now we see C++11 C++14 C++17 choose C++14

#include <iostream>

std::cout << "some output" << std::endl;
```

# Few examples
```cpp
//cell 1
#include<iostream>
#include <vector>
using namespace std;

//cell2
vector<int> v = {1,2,3,4};
for (auto &x: v) cout << x << " ";

//cell3
for_each(v.begin(),v.end(),[](int &n) {return ++n;});
v
```
