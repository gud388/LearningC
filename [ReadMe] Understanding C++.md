---
title: '[ReadMe] Understanding C++'
disqus: hackmd
---

###### tags: `C++` `ReadMe`
**Authors:** Stefan Walker
**Date:** 17/12/2020
**Version:** 1.0 
**Git:** 

# Introduction to C++
C++ was  orginally designed in 1985, by the Danish computer scientist Bjarne Stroustrup at Bell Labs as an extension of the C language; with an orientation toward system programming and embedded, resource-constrained software and large systems, which required performance efficiency. C++ is a mixure of [procedural](https://en.wikipedia.org/wiki/Procedural_programming), [object-oriented](https://en.wikipedia.org/wiki/Object-oriented_programming) and [functional](https://en.wikipedia.org/wiki/Functional_programming) programming. This makes C++ powerful as well as flexible.

# Table of Contents 
[TOC]

# C++Basics.cpp 
## Basic Syntax in C++
## Data Types in C++
## Variable Types & Scope in C++
## Constants/Literals in C++
## Modifier Types in C++
## Storage Classes in C++
## Operators in C++
## Strings in C++
## Pointers in C++
## References in C++
## Data Structures in C++
## Input/Output in C++

**<iostream>**
This file defines the following input stream objects


| Column 1                   | Column 2 |
| -------------------------- | -------- |
| standrard input            | ``cin``  |
| standard output            | ``cout`` |
| un-buffered standard error | ``cerr`` |
| buffered standard error    | ``clog`` |

**<iomanip>**
This file declares services useful for performing formatted I/O with so-called parameterized stream manipulators, such as setw and setprecision.

**<fstream>**
This file declares services for user-controlled file processing. We will discuss about it in detail in File and Stream related chapter.

# C++Basic_Functions.cpp
## Defining a Function
A function is known with various names like a method or a sub-routine or a procedure

## Implementing a function in C++
The standard form of a C++ function is defined as the following 

``` c++=
return_type function_name(parameter) {
   body of the function
   statements;
}
```

Here are all the parts of a function 

**Return Type** − The ```return_type``` is the data type of the value the function returns. Some functions perform the desired operations without returning a value. In this case, the return_type is the keyword void.

**Function Name** − The ```function name``` and the parameter list together constitute the function signature.

**Parameters** − A ```parameter``` is like a placeholder. When a function is invoked, you pass a value to the parameter. This value is referred to as actual parameter or argument. The parameter list refers to the type, order, and number of the parameters of a function. Parameters are optional; that is, a function may contain no parameters.

**Function Body** − contains a collection of statements that define what the function does.

Is a file containg a small program to help with the understanding of input and output and c++ functions
``` c++ 
func_num(int num1, int num2)
```

``` c++
common_factors(long num1, long num2)
```

``` c++
func_greatest_common_factor(int num1, int num2)```
```

[What is a Common Facotor?](https://www.mathsisfun.com/greatest-common-factor.htmlhttps://www.mathsisfun.com/greatest-common-factor.html)

# C++Object_Oriented.cpp
## Defining Object-oriented Programming in C++
[Object-oriented programming](https://en.wikipedia.org/wiki/Object-oriented_programming)
Their are two important concepts in Object-oriented Programming Classes and Objects.A **class** provides the blueprints for **objects**, so basically an object is created from a class.

## Implementing Object-oriented Programming - Class & Objects  in C++
### Classes in C++
1. A class definition starts with the keyword ```class```
2. followed by the class name; 
3. and the class body, enclosed by a pair of curly braces. A class definition must be followed either by a semicolon or a list of declarations. 

An example:
``` C++
class Sphere {
    public:
    double diameter, radius, base; // demensions of a sphere
    double exponent ,volume , e; // volume of a sphere 
    }
};
```
The keyword ```public``` determines the access attributes of the members of the class that follows it. 
A ```public``` member can be accessed from outside the class anywhere within the scope of the class object. 
A ```private``` member  
A ```protected`` member 

### Objects in C++

# C++Inheritance.cpp
## Defining Inheritance in C++
[Inheritance](https://en.wikipedia.org/wiki/Inheritance_(object-oriented_programming) Is where a class **(derived class)** is define in terms of another class **(base class)**. Inheritance makes it easier to reuse the code.

## Access Control and Inheritance in C++
A **derived class** can access all the **non-private members** of its **base class**. Base-class members should not be accessible to the member functions of derived classes should be declared private in the base class.

| Access        |  Public     | Protected | Private  |
|-------------  | ----------- |-----------|----------|
| Same Class    | Yes         |  Yes      | Yes      |
| Derived Class | Yes         |  Yes      | No       |       
| Outside Class | Yes         |  No       | No       |

## Type of Inheritance
Deriving a class from a base class, the base class may be inherited through ```public```, ```protected``` or ```private``` inheritance. The type of inheritance is specified by the access-specifier as explained above.

   **Public Inheritance** 
   Deriving a class from a ```public``` **base class**, ```public``` members of the **base class** become ```public``` members of the **derived class** and ```protected``` members of the **base class** become ```protected``` members of the **derived class**. A **base class** ```private``` members are never accessible directly from a **derived class**, but can be accessed through calls to the ```public``` and ```protected``` members of the **base class**.

   **Protected Inheritance**
   Deriving from a **protected base class**, ```public``` and ```protected``` members of the **base class** become ```protected``` members of the **derived class**.

   **Private Inheritance** 
   Deriving from a ```private``` **base class**, ```public``` and ```protected``` members of the **base class*** become ```private``` members of the **derived class**.

# C++Namspaces.cpp
## Defining a Namespace in C++
A namespace is designed to overcome the situation when a compiler must differiate between a function foo() that might also have the same name from another library also called foo(). Using namespaces, you can define the context in which names are defined. In essence, a namespace defines a scope.
implmenting 

## Implementing Namespace in C++
A namespace is implemented as the following:

``` C++
namespace namespace_name {
   // code 
}
```
To call the namespace either function or variable, prepend (::) the namespace name as the following

``` C++
name::code; // .
```

# C++Polymorphism.cpp
[Polymorphism](https://en.wikipedia.org/wiki/Polymorphism_(computer_science) is the provision of a single interface to entities of different types or the use of a single symbol to represent multiple different types.

## Defining Polymorphism in C++

## Virtual Functions in C++

# C++ Versions
https://en.cppreference.com/w/cpp

[Changes between C++17 and C++20](http://www.open-std.org/jtc1/sc22/wg21/docs/papers/2020/p2131r0.html)


| Year | C++ Standard  | Short Name |
| -------- | -------- | -------- |
1998 |    ISO/IEC 14882:1998 | [C++98](https://en.wikipedia.org/wiki/C%2B%2B03) |
2003 |    ISO/IEC 14882:2003 | [C++03 ](https://en.wikipedia.org/wiki/C%2B%2B11) |
2011 |    ISO/IEC 14882:2011 | [C++11](https://en.wikipedia.org/wiki/C%2B%2B11) |
2014 |    ISO/IEC 14882:2014 | [C++14](https://en.wikipedia.org/wiki/C%2B%2B14) |
2017 |    ISO/IEC 14882:2017 | [C++17 ](https://en.wikipedia.org/wiki/C%2B%2B17)|
2020 |    ISO/IEC 14882:2020 | [C++20 ](https://en.wikipedia.org/wiki/C%2B%2B20)|
| 20XX | ISO/IEC ???????? | [C++23](https://en.wikipedia.org/wiki/C%2B%2B23)


# Coding Standards
[C++ Coding Standards](https://isocpp.org/wiki/faq/coding-standards#coding-std-wars)

[C++ Core Guidelines](http://isocpp.github.io/CppCoreGuidelines/CppCoreGuidelines)

# C++ Resources

1. [Learncpp.com](https://www.learncpp.com/)
1. [Codecademy](https://www.codecademy.com/learn/learn-c-plus-plus)
1. [Udemy](https://www.udemy.com/free-learn-c-tutorial-beginners/)
1. [Sololearn](https://www.sololearn.com/Course/CPlusPlus/)
1. [FreeCodeCamp.org](https://www.youtube.com/watch?v=vLnPwxZdW4Y)
1. [Tutorialspoint](https://www.tutorialspoint.com/cplusplus/cpp_useful_resources.htm)
1. [makeawebsite.com](https://makeawebsitehub.com/learning-c/)