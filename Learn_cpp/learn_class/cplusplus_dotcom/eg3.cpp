#include <iostream>
using namespace std;

class Rectangle {
    int width, height;

    public:
    Rectangle(int,int);
    int area() {return width*height;}
};

// constructor function: do not use void, directly use name
// This consttructor is called for each instances of new objects.
Rectangle::Rectangle(int x, int y){
    width = x;
    height = y;
}

int main () {
    // Here we need to pass the arguments to objects
    Rectangle rect(3,4);
    Rectangle rectb(5,6);

    cout << "rect area: " << rect.area() << endl;
    cout << "rectb area: " << rectb.area() << endl;

    return 0;
}

