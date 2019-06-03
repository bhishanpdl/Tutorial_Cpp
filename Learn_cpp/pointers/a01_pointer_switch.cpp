/* -.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.

* File Name : pointer_switch.cpp

* Purpose :

* Creation Date : May 26, 2019 Sun

* Last Modified : Sun May 26 16:43:53 2019

* Created By :  Bhishan Poudel
* Ref: https://www.learncpp.com/cpp-tutorial/4-8-the-auto-keyword/
_._._._._._._._._._._._._._._._._._._._._.*/
#include<iostream>
#include<string>
using namespace std;

int main(int argc, char **argv){
    const int L = 7;
    char name[L] = "Mollie";
    int nVowels(0);

    for ( char *ptr = name; ptr < name + L; ++ptr)
    {
        switch (*ptr){
        case 'A':
        case 'a':
        case 'E':
        case 'e':
        case 'I':
        case 'i':
        case 'O':
        case 'o':
        case 'U':
        case 'u':
            ++nVowels;}
    }

    cout << name << " has " << nVowels  << " vowels." << '\n';
    return 0;
}
