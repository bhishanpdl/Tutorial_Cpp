/**
 * @author      : Bhishan 
 * @file        : reverse_string.cpp
 * @created     : May 25, 2019 Sat
 */

 #include<iostream>
 #include<string.h>
 using namespace std;

 int main(int argc, char *argv[]){
   char str[1024], temp;
   int i,j;

   cout << "Enter a string: ";
   gets(str);

   j = strlen(str) - 1;
   for (i=0; i<j; i++, j--){
        temp = str[i];
        str[i] = str[j];
        str[j] = temp;
   }

   cout << "\nReversed string: " << str << endl;
    return 0;
 }


