/*
Author: Bhishan Poudel
Date: Jun 2, 2019
Ref: 
*/
#include <iostream>
#include <list>
#include <vector>
#include <valarray>
#include <string>
#include <sstream>
#include <forward_list>
#include<iterator>
#include<algorithm>

using namespace std;

template<class> ForwardIt
    void quicksort(ForwardIt first, ForwardIt last){
        if (first == last) return;

        auto pivot = *next(first, distance(first,last)/2);
        ForwardIt middle1 = partition(first, last,
        [pivot](const &em) {return em < pivot;});

        ForwardIt middle2 = partition(middle1, last,
        [pivot](const &em) {return !(pivot < em;)});

        quicksort(first, middle1);
        quicksort(middle2,last);
    }

int main(int argc, char **argv){
    vector<int> v = {0,1,2,3,4,5,6,7,8,9};


    return 0;
}
