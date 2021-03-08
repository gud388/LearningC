// polymorphism occurs when there is a hierarchy of classes and they are related by inheritance.
// C++ polymorphism means that a call to a member function will cause a different function 
// to be executed depending on the type of object that invokes the function.
// 

#include <iostream> // input/output
#include <math.h>   
#include <tgmath.h> // provides a type-generic macro version of this function.
#include <cstdint> // for std::int_fast64_t
#include <bits/stdc++.h> // pow fuction for double

using namespace std;

// Base Class
class Shape {
    protected:
            double volume, length, width, height, diameter, radius, exponent, answer; 

    public:
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

        double calVolume(double length, double width, double height) {
            std::cout << "Parent Class volume \n\n";
            return 0;
        };
    };

// Class Box inherits class Shape
class Box: public Shape {
    public:
    void BoxDimensions() {
        setLength();
        setWidth();
        setHeight();
        
    double calVolume(double length, double width, double height) {
        std::cout << "Calculating the volume of a Box in cm \n\n";
        volume = length * width * height; 
        std::cout << "The volume of this box is \n\n" << volume << "cm \n\n";
    }
};

//Class Cube inherits class Shape
class Cube: public Shape {
    public:
    void volumeCube() {
        double exponent = 3;
        std::cout << "Calculating the volume of a Cube in cm \n\n";
        setWidth();
        double e = pow(this->width, exponent);
        volume = e;
        std::cout << "The volume of this cube is \n\n" << volume << "cm \n\n";
    }
};

//Class Sphere inherits class Shape
class Sphere: public Shape {
    public:
    void volumeSphere() {
        double exponent = 3;
        std::cout << "Calculating the volume of a Sphere in cm \n\n";
        this->radius = setRadius();
        double e = pow(this->radius, exponent);
        volume = e * M_PI * 4/3;
        std::cout << "The volume of this sphere is \n\n" << volume << "cm \n\n";
    }
};

int main(void) {
    Box boxFour; // declare boxOne from type Box
    Box boxThree; // declare boxTwo from type Box
    Cube cubeTwo; // declare cubeThree from type Cube 
    Sphere sphereOne; //declare sphereFour from type Sphere 

    boxFour.volumeBox();
    boxThree.volumeBox();
    cubeTwo.volumeCube();
    sphereOne.volumeSphere();

    return 0;
}