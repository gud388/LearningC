#include <iostream>

using namespace std;

// function declaration
int func_num(int num1,int num2);
int func_common_factor(long num1, long num2, long i); 
int func_greatest_common_factor(int num1, int num2);
int func_factorial(int num1, int num2);
 
int func_num(int num1,int num2) {
    if(num1 > num2) {
        cout << num1 << " is bigger than " << num2 << endl;
        return num1;
    } else { 
        cout << num2 << " is bigger than or equal to " << num1 << endl;
        return num2;
    }
}

long func_common_factor(long num1, long num2) {
    if(num1 == 1) {
        return 1;
    }
    if(num1 % num2 == 0) {
        cout << num1 << " is a factor" << num2 << " is a factor" << endl; 
        return func_common_factor(num1, num2 % num1);
    }
}

int func_greatest_common_factor(int num1,int num2) {
    if (num2 == 0) {
        return num1;
        return func_greatest_common_factor(num2, num1 % num2);
    } 
}

int func_factorial(int fact_num) {
    if(fact_num <= 1)  
        return 1;
    else {
        return fact_num*func_factorial(fact_num-1);
    }
}

int main() {
    int callingfunc, gcd, common, factorial_num1, factorial_num2;
    long num1, num2, i;

    char err[] = "unable to read";

    // cerr is un-buffered
    cerr << "This is an un-buffered ERROR:" << err << endl;

    // clog is buffered 
    clog << "This is a buffered ERROR:" << err << endl;

    // cin is standard input
    cout << "Please enter 2 numbers" << endl;
    cin >> num1;
    cin >> num2;

    cout << "The first value is " << num1 << endl;
    cout << "The second value is " << num2 << endl;
    
    callingfunc = func_num(num1, num2);

    //common = func_common_factor(num1, i);
    //cout << "A common factor is " << common << endl;

    gcd = func_greatest_common_factor(num1, num2);
    cout << "The greatest commom factor is " << gcd << endl;

    factorial_num1 = func_factorial(num1);
    cout << "The factorials for the first value are " << factorial_num1 << endl;

    factorial_num2 = func_factorial(num2);
    cout << "The factorials for the second value are " << factorial_num2 << endl;
}