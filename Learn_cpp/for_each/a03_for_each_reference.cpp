/* -.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.

* File Name : a03_for_each_reference.cpp

* Purpose :

* Creation Date : May 26, 2019 Sun

* Last Modified : Sun May 26 15:44:40 2019

* Created By :  Bhishan Poudel

_._._._._._._._._._._._._._._._._._._._._.*/
#include<iostream>
#include<string>
using namespace std;

int main(int argc, char **argv){
    int array[5] = {9,7,3,4,3};

    for (const auto &element: array) // element is  a const reference to the current iteration
        cout << element << ' ';
    return 0;
}
