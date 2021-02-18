#define _USE_MATH_DEFINES

#include <iostream> // input/output
#include <cstdint> // for std::int_fast64_t
#include <cmath> // for PI

// Class Defintions & Objects
// A class provides the blueprints for objects, so basically an object is created from a class.

class Box {
    public:
    int length, width, height; // demensions of a box
};

class Sphere {
    public:
    int diameter, radius; // demensions of a sphere
    double base, exponent; // volume of a sphere 
};

class Cylinder {
    public:
    int height, diameter, radius; // demensions of a cylinder
    double exponent; // volume of a cylinder
};

using namespace std;

//  exponent must be non-negative
std::int_fast64_t powint(int base, int exp) {
    std::int_fast64_t result{1};
    while (exp){
        if (exp & 1)
            result *= base;
        exp >>= 1;
        base *= base;
    }
 
    return result;
}

int main() {
    Box voxOne; // declare vox from type Box
    Box foxTwo; // declare fox from type Box 
    Sphere dogOne; // declare dog from type Sphere
    Cylinder catOne; // declare cat from type Cylinder

    double volumeVox = 0.0; // the volume of Box1
    double volumeFox = 0.0; // the volume of Box2
    long volumeSphere = 0.0000000; // the volume of Sephere
    long volumeCylinder = 0.00000;/// the volume of Cylinder

    // Box 1
    std::cout << "The dimensions of box 1 in cm: " << std::endl;
    std::cout << "Enter the length of box 1: "; std::cin >> voxOne.length;
    std::cout << "Enter the width of box 1: "; std::cin >> voxOne.width;
    std::cout << "Enter the height of box 1: "; std::cin >> voxOne.height;

    volumeVox = voxOne.length * voxOne.width * voxOne.height; 
    std::cout << "The volume of box 1 is \n\n" << volumeVox << "cm \n\n";

    // Box 2
    std::cout << "The dimensions of box 2 in cm: " << std::endl; 
    std::cout << "Enter the length of box 2: "; std::cin >> foxTwo.length;
    std::cout << "Enter the width of box 2: "; std::cin >> foxTwo.width;
    std::cout << "Enter the height of box 2: "; std::cin >> foxTwo.height;

    volumeFox = foxTwo.length * foxTwo.width * foxTwo.height;
    std::cout << "The volume of box 2 is  \n\n" << volumeFox << "cm \n\n";

    // Sphere V = 4/3*Pi*radius^3
    std::cout << "The value of Pie is " << M_PI << std::endl;
    std::cout << "The volume of a sphere in cm " << std::endl; 
    std::cout << "Enter the diameter of the sphere: "; std::cin >> dogOne.diameter;

    dogOne.base = dogOne.diameter/2;
    std::cout << "The radius is " << dogOne.base << "cm" << std::endl;
    dogOne.exponent = 3;
    int e = powint(dogOne.base, dogOne.exponent);
    std::cout << "pow = " << e << std::endl;
    volumeSphere = 4/3 * M_PI * e;
    std::cout << "why order of operations is important: \n\n" << volumeSphere << "cm \n\n";

    volumeSphere = e * M_PI * 4/3;
    std::cout << "The volume of sphere 1 is actually: \n\n" << volumeSphere << "cm \n\n";

    // Cylinder  V = Pi*radius^2 * Height
    std::cout << "The volume of a cylinder is" << std::endl;
    std::cout << "Enter the diameter of the cylinder: "; std::cin >> catOne.diameter;
    std::cout << "Enter the height of the cylinder: "; std::cin >> catOne.height;
    catOne.radius =  catOne.diameter/2;
    catOne.exponent = 2;
    e = powint(catOne.radius,catOne.exponent);
    volumeCylinder = M_PI * e * catOne.height;
    std::cout << "The volume of Cylinder 1 is: \n\n" << volumeCylinder << "cm \n\n";

return 0;

}