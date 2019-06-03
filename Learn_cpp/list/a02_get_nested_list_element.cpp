#include <vector>
#include <iostream>

using namespace std;

typedef vector<int> row;
typedef vector<row> matrix;

matrix mat(2,2);

int getElement (unsigned int ri, unsigned int ci)
{
    return mat[ri][ci] ;
}

int main() {

    mat[1][0] = 1234;
    cout << getElement(1,0) << endl;

    return 0;
}