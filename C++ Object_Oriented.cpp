#define _USE_MATH_DEFINES

#include <iostream> // input/output
#include <cstdint> // for std::int_fast64_t
#include <cmath> // for PI

// Class Defintions & Objects
// A class provides the blueprints for objects, so basically an object is created from a class.

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
    int length, width, height; // demensions of a box
    double volume, e;

    void volumeBox() {
    std::cout << "The volume of a box in cm " << std::endl; 
    std::cout << "Enter the length of box: "; std::cin >> length;
    std::cout << "Enter the width of box: "; std::cin >> width;
    std::cout << "Enter the height of box: "; std::cin >> height;

    volume = length * width * height; 
    std::cout << "The volume of this box is \n\n" << volume << "cm \n\n";
    }
};

class Sphere {
    public:
    int diameter, radius, base; // demensions of a sphere
    double exponent ,volume , e; // volume of a sphere 

    void volumeSphere() {
    //std::cout << "The value of Pie is " << M_PI << std::endl;
    std::cout << "The volume of a sphere in cm " << std::endl; 
    std::cout << "Enter the diameter of the sphere: "; std::cin >> diameter;
    base = diameter/2;
    std::cout << "The radius is " << base << "cm" << std::endl;
    exponent = 3;
    e = powint(base, exponent);
    volume = 4/3 * M_PI * e;
    std::cout << "why order of operations is important: \n\n" << volume << "cm \n\n";
    volume = e * M_PI * 4/3;
    std::cout << "The volume of this sphere is actually: \n\n" << volume << "cm \n\n";
    }
};

class Cylinder {
    public:
    int height, diameter, exponent, base; // demensions of a cylinder
    double volume, e; // volume of a cylinder

    void volumeCylinder() {
    std::cout << "The volume of a cylinder in cm" << std::endl;
    std::cout << "Enter the diameter of the cylinder: "; std::cin >> diameter;
    std::cout << "Enter the height of the cylinder: "; std::cin >> height;
    base =  diameter/2;
    exponent = 2;
    e = powint(base,exponent);
    volume = M_PI * e * height;
    std::cout << "The volume of this cylinder is: \n\n" << volume << "cm \n\n";
    }
};

class Pyramid {
    public:
    double baseLength, baseWidth, height, volume; // demensions of a pyramid
    
    void volumePyramid() {
    std::cout << "The volume of a pyramid in cm" << std::endl;
    std::cout << "Enter the length of the pyramid: "; std::cin >> baseLength;
    std::cout << "Enter the width of the pyramid: "; std::cin >> baseWidth;
    std::cout << "Enter the height of the pyramid: "; std::cin >> height;
    volume = baseLength*baseWidth*height/3;
    std::cout << "The volume of this pyramid is: \n\n" << volume << "cm \n\n";
    }
};

using namespace std;

int main() {
    Box voxOne; // declare vox from type Box
    Box foxTwo; // declare fox from type Box 
    Sphere dogOne; // declare dog from type Sphere
    Cylinder catOne; // declare cat from type Cylinder
    Pyramid head; // declare head from type Pyramid

    double volumeVox = 0.0; // the volume of Box1
    double volumeFox = 0.0; // the volume of Box2
    long volumeSphere = 0.0000000; // the volume of Sephere
    long volumeCylinder = 0.00000;/// the volume of Cylinder
    long e =0.0000; // exponent 

    // Box Volume = Length*Width*Height 
    voxOne.volumeBox();
    foxTwo.volumeBox();

    // Sphere Volume = 4/3*Pi*Radius^3
    dogOne.volumeSphere();
    
    // Cylinder  V = Pi*radius^2 * Height
    catOne.volumeCylinder();

    // V = Base Length * Base Width * Pyramid Height/3
    head.volumePyramid();

    return 0;

}