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

# Input/Output

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

# Functions
A function is known with various names like a method or a sub-routine or a procedure

## Defining a Function
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

## 
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

# Object Oriented Programming C++

## Namspaces

A namespace is designed to overcome the situation when a compiler must differiate between a function foo() that might also have the same name from another library also called foo(). Using namespaces, you can define the context in which names are defined. In essence, a namespace defines a scope.

### Defining a Namespace

A namespace is defined as the following:

``` C++
namespace namespace_name {
   // code 
}
```
To call the namespace either function or variable, prepend (::) the namespace name as the following

```C++
name::code; // .
```

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