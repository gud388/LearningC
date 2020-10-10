#include <iostream>
#include <string>

using namespace std;

int main() {
    cout << "Hello PraCman\n";
    cout << "Lets get practicing\n\n\n";
    cout << "....IM COOOOOODING\n" << endl;
    cout << "Size of char : " << sizeof(char) << endl;


    // typedef 
    typedef char testdef;
    testdef alpha = 'a';
    testdef beta = 'b';
    cout << alpha;
    cout << beta;

    // Enumerated types
    enum colour {red = 3,green = 5,blue = 4,yellow = 2} c;

    // Interger Literals 
    int one = 2u; // u unsigned
    int two = 0xFeel; cout << endl; //  0x radix 
    cout << two, cout << " = radix example\n" << endl;
    cout << one, cout << " = unsigned example\n" << endl;

    /* character Literals

        \\ 	\ character
        \' 	' character
        \" 	" character
        \? 	? character
        \a 	Alert or bell
        \b 	Backspace
        \f 	Form feed
        \n 	Newline
        \r 	Carriage return
        \t 	Horizontal tab
        \v 	Vertical tab
        \ooo 	Octal number of one to three digits
        \xhh . . . 	Hexadecimal number of one or more digits
    */

    /** The Define Preprocessor 
     *      #define identifier value
    */
    #define MAGIC 3
    #define THE +0
    #define GATHERING -0
    #define NEWLINE '\n'

    int magic = MAGIC + THE + GATHERING; 
    cout << "The magic number is ", cout << magic;
    cout << NEWLINE;

    /** The Consantant Keyword 
    *       const type variable = value
    */
    const int SPACE = 10;
    const double TIME = 5.00;
    const int CONTINUM = 3;

    double answer = SPACE + TIME + CONTINUM;
    cout << "The answer is " << answer << NEWLINE;

    /** The Modifier
     * A modifier is used to alter the meaning of the base type
     */
     short int them; 
     short unsigned int they;

     they = 50000;
     them = they;
     cout << them << " vs " << they << NEWLINE;

    return 0;
}