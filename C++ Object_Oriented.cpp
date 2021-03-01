// Class Defintions & Objects
// A class provides the blueprints for objects, so basically an object is created from a class.

#define _USE_MATH_DEFINES

#include <iostream> // input/output
#include <cstdint> // for std::int_fast64_t
#include <cmath> // for PI
#include <bits/stdc++.h> //pow fuction for double

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

class Box {
    public:
    double length, width, height; // demensions of a box
    double volume, e;  // volume of a box

    void volumeBox() {
    std::cout << "The volume of a box in cm " << std::endl; 
    std::cout << "Enter the length of box: "; std::cin >> length;
    std::cout << "Enter the width of box: "; std::cin >> width;
    std::cout << "Enter the height of box: "; std::cin >> height;

    volume = length * width * height; 
    std::cout << "The volume of this box is \n\n" << volume << "cm \n\n";
    }
};

class Cube {
    public:
    double width; // demensions of a cube
    double volume, e;  // volume of a cube 

    void volumeCube() {
        std::cout << "Calculating the volume of a Cube in cm \n\n";
        std::cout << "Enter the width of Cube: "; std::cin >> width;
        int exponent = 3;
        int e = pow(width, exponent);
        volume = e;
        std::cout << "The volume of this cube is \n\n" << volume << "cm \n\n";
    }
};

class Sphere {
    public:
    double diameter, radius, base; // demensions of a sphere
    double exponent ,volume , e; // volume of a sphere 

    void volumeSphere() {
    //std::cout << "The value of Pie is " << M_PI << std::endl;
    std::cout << "The volume of a sphere in cm " << std::endl; 
    std::cout << "Enter the diameter of the sphere: "; std::cin >> diameter;
    base = diameter/2;
    std::cout << "The radius is " << base << "cm" << std::endl;
    exponent = 3;
    e = pow(base, exponent);
    volume = 4/3 * M_PI * e;
    std::cout << "why order of operations is important: \n\n" << volume << "cm \n\n";
    volume = e * M_PI * 4/3;
    std::cout << "The volume of this sphere is actually: \n\n" << volume << "cm \n\n";
    }
};

int main() {
    Box boxOne; // declare boxOne from type Box
    Box boxTwo; // declare boxTwo from type Box
    Cube cubeThree; // declare cubeThree from type Cube 
    Sphere sphereFour; // declare sphereFour from type Sphere

    // Box Volume = Length*Width*Height 
    double volumeVox = 0.0; // the volume of Box1
    double volumeFox = 0.0; // the volume of Box2
    long e =0.0000; // exponent 

    // Box Volume = Length*Width*Height 
    boxOne.volumeBox();
    boxTwo.volumeBox();

    // Cube Volume = Width(edge)^3
    cubeThree.volumeCube();

    // Sphere Volume = 4/3*Pi*Radius^3
    sphereFour.volumeSphere();

}