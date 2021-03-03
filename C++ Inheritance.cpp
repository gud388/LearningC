// Inheritance allows us to define a class in terms of another class, 
// The existing class is called the base class, and the new class is referred 
// to as the derived class

#include <iostream> // input/output
#include <cstdint> // for std::int_fast64_t
#include <bits/stdc++.h> //pow fuction for double

using namespace std;

extern int powint(int base, int exponent) { //  exponent must be non-negative
    std::int_fast64_t result{1};
    while (exponent){ 
        if (exponent & 1)
            result *= base;
        exponent >>= 1;
        base *= base;
    }
 
    return result;
}  

// Base Class
class Shape {
    public:

    double length; 
    double width;
    double height;
    double diameter;
    double radius;
    double exponent;
    double answer; 

        double setLength() {
            std::cout << "Enter the length: "; std::cin >> length;
            std::cout << "The length is " << length << "cm" << std::endl;
            return length;
        }

        double setWidth() {
            std::cout << "Enter the width: "; std::cin >> width;
            std::cout << "The width is " << width << "cm" << std::endl;
            return width;
        }

        double setHeight() {
            std::cout << "Enter the height: "; std::cin >> height;
            std::cout << "The height is " << height << "cm" << std::endl;
            return height;
        }

        double setRadius() {
            std::cout << "Enter the diameter of the sphere: "; std::cin >> diameter;
            double radius = diameter/2;
            std::cout << "The radius is " << radius << "cm" << std::endl;
            return radius; 
        }

        double calPower(double radius) { 
            exponent = 3;
            answer = pow(radius, exponent);
            return answer;
        }

    protected:
        long volume; 
};

// Class Box inherits class Shape
class Box: public Shape {
    public:
    void volumeBox() {
        std::cout << "Calculating the volume of a Box in cm \n\n";
        setLength();
        setWidth();
        setHeight();
        volume = length * width * height; 
        std::cout << "The volume of this box is \n\n" << volume << "cm \n\n";
    }
};

//Class Cube inherits class Shape
class Cube: public Shape {
    public:
    void volumeCube() {
        std::cout << "Calculating the volume of a Cube in cm \n\n";
        setWidth();
        int exponent = 3;
        int e = powint(width, exponent);
        volume = e;
        std::cout << "The volume of this cube is \n\n" << volume << "cm \n\n";
    }
};

//Class Sphere inherits class Shape
class Sphere: public Shape {
    public:
    void volumeSphere() {
        std::cout << "Calculating the volume of a Sphere in cm \n\n";
        this->radius = setRadius();
        double exponent = 3;
        double e = pow(this->radius, exponent);
        volume = e * M_PI * 4/3;
        std::cout << "The volume of this sphere is \n\n" << volume << "cm \n\n";
    }
};

int main(void) {
    Box boxOne; // declare boxOne from type Box
    Box boxTwo; // declare boxTwo from type Box
    Cube cubeOne; // declare cubeOne from type Cube 
    Sphere sphereOne; //declare sphereOne from type Sphere 

    boxOne.volumeBox();
    boxTwo.volumeBox();
    cubeOne.volumeCube();
    sphereOne.volumeSphere();

    return 0;
}