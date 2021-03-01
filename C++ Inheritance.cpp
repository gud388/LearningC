// Inheritance allows us to define a class in terms of another class, 
// The existing class is called the base class, and the new class is referred 
// to as the derived class

#include <iostream> // input/output
#include <cstdint> // for std::int_fast64_t

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

        double setLength() {
            std::cout << "Enter the length: "; std::cin >> length;
            //length = l;
            return length;
        }

        double setWidth() {
            std::cout << "Enter the width: "; std::cin >> width;
            //width = w;
            return width;
        }

        double setHeight() {
            std::cout << "Enter the height: "; std::cin >> height;
            //height = h;
            return height;
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

int main(void) {
    Box boxOne; // declare boxOne from type Box
    Box boxTwo; // declare boxTwo from type Box
    Cube cubeOne; // declare cubeOne from type Box 

    boxOne.volumeBox();
    boxTwo.volumeBox();
    cubeOne.volumeCube();

    return 0;
}