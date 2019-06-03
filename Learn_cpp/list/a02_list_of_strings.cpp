/**
 * @author      : Bhishan Poudel
 * @file        : a02_list_of_strings.cpp
 * @created     : Monday Jun 03, 2019 10:31:01 EDT
 * NOTE: Do not use list in c++, they are slow, always use vector.
 */

#include <iostream>
#include <list>
using namespace std;

int main(int argc, char *argv[]){
    // list of integers
    list<int> lst1 = {1,2,3,4,5};
    for (auto &x: lst1) cout << x << " ";
    cout << endl;

    //create another list
    list<int> lst2(5,999); // 5 elements all 999
    for (auto &x: lst2) cout << x << " ";
    cout << endl;

    //list of strings
    initializer_list<string> init = {"Hi", "there", "!"};
    list<string> lst3(init);

    for (auto &x: lst3) cout << x << " ";
    cout << endl;

    return 0;
}

