/* -.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.

* File Name : for_each_eg.cpp

* Purpose :

* Creation Date : May 26, 2019 Sun

* Last Modified : Sun May 26 15:25:25 2019

* Created By :  Bhishan Poudel

_._._._._._._._._._._._._._._._._._._._._.*/
#include<iostream>
#include<string>
using namespace std;

int main(int argc, char **argv){
    const int numStudents = 5;
    int scores[numStudents] = { 84, 92, 76, 81, 56 };
    int maxScore = 0; // keep track of our largest score
    for (int student = 0; student < numStudents; ++student)
        if (scores[student] > maxScore)
            maxScore = scores[student];
 
    std::cout << "The best score was " << maxScore << '\n';
    return 0;
}
