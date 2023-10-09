/*
    Create a class called Triangle that stores the length fo the base and height of a right triangle in
    two private instance variables. Include a constructor that sets these values. Define two functions. The first is hypot(),
    which returns the legnth fo the hypothenuse. The second is area(), which returns the area of the triangle.
*/
#include <iostream>
#include <cmath>

class Triangle{
    double base;
    double height;

public:
    Triangle(double base, double height){
        this->base = base;
        this->height = height;
    };
    ~Triangle(){};

    double hypot(){
        return sqrt(base*base + height*height);
    }

    double area(){
        return 0.5*base*height;
    }
};

int main() {

    Triangle new_t(5.0,6.0);


    std::cout << "Hypothenuse of triangle of base 5 and height 6: " << new_t.hypot() << std::endl;
    std::cout << "Area of triangle of base 5 and height 6: " << new_t.area() << std::endl;

    return 0;
}