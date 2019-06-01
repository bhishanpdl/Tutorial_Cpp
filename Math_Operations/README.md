# Find sum of array, vector, valarray
```c++

/*
Author: Bhishan Poudel
Date: Jun 1, 2019
Ref: 
*/
#include <iostream>
#include <list>
#include <vector>
#include <valarray>
#include<bits/stdc++.h>

using namespace std;

int arr[] = {1,2,3};
int mysum = 0;

for (int i=0; i<3; i++){
    mysum += arr[i];
}

std::cout << mysum << std::endl;

vector<int> v{1,2,3} ; 
mysum = 0;

mysum = 0;
for (auto& n : v)
    mysum += n;
cout << mysum << endl;

mysum = 0;

for_each(v.begin(), v.end(), [&] (int n) {
    mysum += n;
});

cout << mysum << endl;

// accumulate for array
int a[] = {1,2,3};
int total = accumulate(begin(a), end(a), 0); // also 0, plus<int>());

cout << total << endl;

//accumulate for vector
total = accumulate(begin(v), end(v), 0);
cout << total << endl;

#include<valarray>

valarray<int> myvalarray(3);

myvalarray[0] = 1;
myvalarray[1] = 2;
myvalarray[2] = 3;;
std::cout << "The sum is " << myvalarray.sum() << '\n';

int find_sum(int arr[], int n){
    int mysum=0;
    for(int i=0; i<n; i++){
        mysum += arr[i];
    }
    return mysum;
}

int n = distance(begin(arr), end(arr));
mysum = find_sum(arr,n);
cout << mysum << endl;

```
