/* -.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.

* File Name : a02_pointer_to_function.cpp

* Purpose :

* Creation Date : May 26, 2019 Sun

* Last Modified : Sun May 26 16:40:15 2019

* Created By :  Bhishan Poudel

_._._._._._._._._._._._._._._._._._._._._.*/
#include<iostream>
#include<string>
using namespace std;

void printSize(int *array)
{
    // array is treated as a pointer here
    std::cout << sizeof(array) << '\n'; // prints the size of a pointer, not the size of the array!
}
 
int main()
{
    int array[] = { 1, 1, 2, 3, 5, 8, 13, 21 };
    std::cout << sizeof(array) << '\n'; // will print sizeof(int) * array length
 
    printSize(array); // the array argument decays into a pointer here
 
     return 0;
}
