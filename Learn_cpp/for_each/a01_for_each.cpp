/* -.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.

* File Name : for_each_eg.cpp

* Purpose :

* Creation Date : May 26, 2019 Sun

* Last Modified : Sun May 26 15:57:14 2019

* Created By :  Bhishan Poudel
*
* For-each syntax

for (element_declaration : array)
    statement;
_._._._._._._._._._._._._._._._._._._._._.*/
#include<iostream>
#include<vector>
using namespace std;

int main(int argc, char **argv){
    //int fibonacci[] = {0, 1,1,2,3,5,8,13}; // using array
    vector<int> fibonacci = {0,1,1,2,3,5,8,13}; // using vector
    for (int number: fibonacci)
        cout << number*2 << ' ';
    return 0;
}
