#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(int argc, char* argv[]){

int lst[3] = {1,2,3};
int mysum = 0;
int n = sizeof(lst) / sizeof(lst[0]);

for (int i=0; i<n; i++){
    mysum += lst[i];
}
cout <<  "c style list sum " << mysum << endl;

// using for_each
mysum = 0;
for_each(lst,lst+n, [&] (int x) {mysum +=x;});
cout << "for each list sum " << mysum << endl;

// best: use vector and for_each in c++
//vector is more popular than valarray
vector<int> v = {1,2,3};
mysum = 0;
for_each(v.begin(), v.end(), [&](int x) {mysum +=x;});
cout << "vector sum " << mysum << endl;

return 0;
}
