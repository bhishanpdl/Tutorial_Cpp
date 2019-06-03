/* -.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.

* File Name : a00_pointer.cpp

* Purpose :

* Creation Date : May 26, 2019 Sun

* Last Modified : Sun May 26 16:31:59 2019

* Created By :  Bhishan Poudel
* Ref: https://www.learncpp.com/cpp-tutorial/4-8-the-auto-keyword/
_._._._._._._._._._._._._._._._._._._._._.*/
#include<iostream>
#include<string>
using namespace std;

int main(int argc, char **argv){
    int array[5] = {1,2,3,4,5};

    cout << &array[1] << endl; // memory of arr
    cout << array+1 << endl; // memory of arr+1

    cout << array[1] << endl; // 2nd elem
    cout << *(array+1) << endl; // 2nd elem, paren is required here.
    return 0;
}
