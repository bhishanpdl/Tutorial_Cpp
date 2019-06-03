/**
 * @author      : Bhishan Poudel
 * @file        : a01_vector_of_vector.cpp
 * @created     : Monday Jun 03, 2019 11:05:58 EDT
 */

#include <iostream>
#include <vector>

using namespace std;

int main(int argc, char *argv[]){

    // create vectors
    vector<int> v1 = {1,1,0,0};
    vector<int> v2 = {1,0,0,1};
    vector<int> v3 = {0,1,1,1};
    vector<int> v4 = {1,0,1,0};

    // initialize vector of vectors
    vector< vector<int> > vec;

    // fill vectors
    vec.push_back(v1);
    vec.push_back(v2);
    vec.push_back(v3);
    vec.push_back(v4);

    // print
    for (auto v: vec){
        for (auto x: v)
            cout << x << " , ";
        cout << endl;
    }


    return 0;
}

