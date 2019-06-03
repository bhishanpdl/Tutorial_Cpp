#include <iostream>
using namespace std;

class Circle{
    double radius;
    public:
        Circle (double r) {radius = r;}
        double circum() {return 2 * radius * 3.14159265;}

};

int main(){
    Circle foo(10.0); // functional form, most famous legacy
    Circle bar = 20.0; // assignment initialization
    Circle baz {30.0}; // uniform initliazation, suggested by new versions
    Circle qux = {40.0}; // another method

    cout << "foo's circumference: " << foo.circum() << endl;
    cout << "bar's circumference: " << bar.circum() << endl;

}


