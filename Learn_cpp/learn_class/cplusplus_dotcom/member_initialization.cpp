/*Date: May 25, 2019 Sat
 *Author: Bhishan Poudel
 *Purpose: Learnig cpp class
 *Reference: http://www.cplusplus.com/doc/tutorial/classes/
 *
 */

#include <iostream>
using namespace std;

class Circle {
    double radius;
    public:
        // public member initialization
        //Circle (double r) : radius(r) {}

        // another way of member initialization
        Circle (double r) {radius = r;}

        double area() { return radius * radius * 3.1416;}
};

class Cylinder {
    Circle base;
    double height;
    public:
        // member init
        //Cylinder (double r, double h): base(r), height(h) {}
        
        // member init using uniform init
        Cylinder (double r, double h): base{r}, height{h} {}
        
        // member init
        double volume() {return base.area() * height;}
};

int main(){
    Circle cir(1);
    Cylinder cyl(1,2);

    cout << "circle area: " << cir.area() << endl;
    cout << "cylinder volume: " << cyl.volume() << endl;

    return 0;
}
