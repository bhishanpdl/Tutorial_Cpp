/**
 * @author      : Bhishan Poudel 
 * @file        : a2_read_stdin.cpp
 * @created     : May 25, 2019 Sat
 */

 #include<iostream>
 #include<string.h>
 using namespace std;

 int main(int argc, char **argv){
    if (argc < 2){
        cerr << "Usage: " << argv[0] << " Argument" << endl;
        return 1;
    }

    //Print argument
    cout << "You gave an argument " << argv[1] << endl;
    
    return 0;
 }


