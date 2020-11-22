#include <iostream>

using namespace std;

// function declaration
int func_num(int num1,int num2);
int func_common_factor(int num1, int num2); 

int func_num(int num1,int num2) {
    if(num1 > num2) {
        cout << num1 << " is bigger than " << num2 << endl;
        return num1;
    } else { 
        cout << num2 << " is bigger than or equal to " << num1 << endl;
        return num2;
    }
}

int func_common_factor(int num1,int num2) {
    if (num2 == 0) 
    return num1;
    return func_common_factor(num2, num1 % num2);
}

int main() {
    int num1;
    int num2;
    int callingfunc;
    int gcd;

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
    
    callingfunc = func_num(num1,num2);
    gcd = func_common_factor(num1,num2);

    cout << "The commom factor is " << gcd << endl;
}