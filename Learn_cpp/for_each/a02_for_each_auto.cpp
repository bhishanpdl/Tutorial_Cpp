/* -.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.

* File Name : for_each_auto.cpp

* Purpose :

* Creation Date : May 26, 2019 Sun

* Last Modified : Sun May 26 15:39:58 2019

* Created By :  Bhishan Poudel

_._._._._._._._._._._._._._._._._._._._._.*/
#include<iostream>
#include<string>
using namespace std;

int main(int argc, char **argv){
    int fib[] = {0,1,1,2};

    for (auto number : fib)
        cout << number << ' ';
    return 0;
}
