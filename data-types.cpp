#include<iostream>
#include<string>
using namespace std;

    // There are six data types in c++. They are:

        // int          = 2 or 4 bytes              (depending on the compiler)     >>  int is used for integers.                       example: 1, 2, 3
        // float        = 4 bytes                   (32 bits)                       >>  float is used for decimal numbers.              example: 1.2, 2.3, 3.4
        // double       = 8 bytes                   (64 bits)                       >>  double is used for decimals.                    example: 1.2, 2.3, 3.4
        // char         = 1 byte                    (8 bits)                        >>  char is used for characters.                    example: a, b, c
        // string       = 1 byte per character      (8 bits per character)          >>  string is used for words                        example: hello, world
        // bool.        = 1 byte                    (8 bits)                        >>  and bool is used for true or flase statements.  example: true, false

int main() {
    int a = 1;
    float b = 1.2;
    double c = 1.2;
    char d = 'a';
    string e = "hello";
    bool f = true;

    cout << a << endl;
    cout << b << endl;
    cout << c << endl;
    cout << d << endl;
    cout << e << endl;
    cout << f << endl;
    return 0;
}