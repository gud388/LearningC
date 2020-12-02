#include <iostream>

using namespace std;

// function declaration
int func_num(int num1,int num2);
int common_factor(long num1, long num2, long i); 
int func_greatest_common_factor(int num1, int num2); 

int func_num(int num1,int num2) {
    if(num1 > num2) {
        cout << num1 << " is bigger than " << num2 << endl;
        return num1;
    } else { 
        cout << num2 << " is bigger than or equal to " << num1 << endl;
        return num2;
    }
}

long common_factor(long num1, long num2) {
    if(num1 == 1)
    return 1;
    if(num1 % num2 == 0)
    return num1 + common_factor(num1,num2 - 1);
    return common_factor(num1, num2 - 1);
}

int func_greatest_common_factor(int num1,int num2) {
    if (num2 == 0) 
    return num1;
    return func_greatest_common_factor(num2, num1 % num2); 
}

int main() {
    int callingfunc;
    int gcd;
    int common;
    long num1;
    long num2;
    long i;

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

    common = common_factor(num1, i);
    cout << "A common factor is " << common << endl;

    gcd = func_greatest_common_factor(num1, num2);
    cout << "The greatest commom factor is " << gcd << endl;
}