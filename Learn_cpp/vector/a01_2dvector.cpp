#include <iostream> 
#include <vector>
#include <iterator>

using namespace std; 

//function to print vector of vector
void print_vector2d(vector< vector<int> > vec2d){
    cout << "\n 2d vector\n";
    cout << "[\n";

    // nested iterator
    vector< vector<int> >::iterator itn;

    for (itn = vec2d.begin();
        itn != vec2d.end();
        ++itn){
        
        cout << " [";

        // iterator
        vector<int>::iterator it;

        // change pointer for each rows
        vector<int>  &ptr = *itn;

        for (it = ptr.begin();
             it != ptr.end();
             it++){
        
            cout << " " << *it << " ";
        }
        cout << "],\n";

    }
    cout << "]";

}

// print vector using template
template <class T>
void print_vector(vector< vector<T> > const &mat){
    for (vector<T> row: mat){
        for (T val: row){
            cout << val << " ";
        }
        cout << "\n";
    }

}



int main() 
{ 
    // Initializing 2D vector "vect" with 
    // values 
    vector<vector<int> > vect{ { 1, 2, 3 }, 
                               { 4, 5, 6 }, 
                               { 7, 8, 9 } }; 
  
    // Displaying the 2D vector 
    for (int i = 0; i < vect.size(); i++) { 
        for (int j = 0; j < vect[i].size(); j++) 
            cout << vect[i][j] << " "; 
        cout << endl; 
    } 
    

    // print 2d vec
    print_vector2d(vect);

    //print vector
    cout << "\n\nprint using template:\n";
    print_vector(vect);
    return 0; 
}
