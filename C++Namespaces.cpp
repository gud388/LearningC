// https://stackoverflow.com/questions/4326176/inheritance-and-namespaces

#include <iostream> // input/output
#include <math.h>  
#include <tgmath.h> // provides a type-generic macro version of this function.
#include <cstdint> // for std::int_fast64_t
#include <bits/stdc++.h> // pow fuction for double

using namespace std;

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
        double volume; 
};

    namespace Shape_One {

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
                std::cout << "..........Go terraHawks from Earth" << endl;
            }
        };
    }

    namespace Shape_Two {

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
                std::cout << ".........Zelda's Aliens from Mars" << endl;
            }
        };
    }

//using namespace std::Box_Shape_One;

int main(void) {
    Shape_Two::Cube cubeOne; // declare Cube from namespace Shape_Two
    Shape_Two::Cube cubeTwo; // declare Cube from namespace Shape_Two
    Shape_One::Sphere zeroidsOne; // declare Sphere from namespace Shape_One

    cubeOne.volumeCube();
    cubeTwo.volumeCube();
    zeroidsOne.volumeSphere();

    return 0;
}