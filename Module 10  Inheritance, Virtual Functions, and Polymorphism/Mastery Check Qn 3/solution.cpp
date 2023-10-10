/*
    Create a derived class of TwoDShape called Circle. Include an area() function that computes the area of the circle.
*/
#include <iostream>
#include <cstring>
using namespace std;

// A class for two-dimensional objects
class TwoDShape {
    //these are private
    double width;
    double height;

    //add a name field
    char name[20];

public:
    // defaut constructor
    TwoDShape() {
        width = height = 0.0;
        strcpy(name, "unknown");
    }

    TwoDShape(double w) {
        width = height = w;
        strcpy(name, "unknown");
    }
    // Constructor for TwoDShape.
    TwoDShape(double w, double h, char *n) {
        width = w;
        height = h;
        strcpy(name,n);
    }

    // Construct object with equal width and height.
    TwoDShape(double x, char *n) {
        width = height = x;
        strcpy(name, n);
    }

    void showDim() {
        cout << "Width and height are " << width << " and " <<height << endl;
    }

    //accessor functions
    double getWidth() {return width;}
    double getHeight() {return height;}
    void setWidth(double w) {width = w;}
    void setHeight(double h) {height = h;}
    char *getName() {return name;}

    //area() is now a pure virtual function
    virtual double area() = 0;
};

// Circle is dervied from TwoDShape
class Circle : public TwoDShape {
    char style[20];
public:
    Circle(double r) : TwoDShape(r) {}

    double area() {return getWidth() * getWidth() * 3.1416;}  
};

int main() {
    Circle small_circle (5.0);
    cout << "Area of small circle: " << small_circle.area() << endl;

    return 0;
}