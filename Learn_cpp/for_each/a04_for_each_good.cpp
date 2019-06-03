/* -.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.

* File Name : a04_for_each_good.cpp

* Purpose :

* Creation Date : May 26, 2019 Sun

* Last Modified : Sun May 26 15:52:38 2019

* Created By :  Bhishan Poudel

_._._._._._._._._._._._._._._._._._._._._.*/
#include<iostream>
#include<string>
using namespace std;

int main(int argc, char **argv){

    const int n = 5;
    int scores[n] = {10,20,300,40,50};

    int max = 0; //counter
    for (const auto &score: scores)
        if (score > max)
            max = score;

    cout << "The best score was " << max << endl;
    return 0;
}
