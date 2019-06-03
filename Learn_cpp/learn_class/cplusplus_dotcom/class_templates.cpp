/**
 * @author      : Bhishan Poudel
 * @file        : class_templates.cpp
 * @created     : Saturday May 25, 2019 17:52:20 EDT
 */

#include <iostream>
using namespace std;

template <class T>
class mypair{
    T a,b;
    public:
        mypair(T first, T second)
        {a=first; b=second;}
        T getmax();
};

template <class T>
T mypair<T>::getmax(){
    T retval;
    retval = a>b? a:b;
    return retval;
};


int main(int argc, char *argv[]){
    mypair <int> myobject(100,77);
    cout << myobject.getmax();
    return 0;
}

