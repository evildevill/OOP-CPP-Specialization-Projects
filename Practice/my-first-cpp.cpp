#include <iostream> // This is a preprocessor directive. It tells the compiler to include the iostream library. This library is used for input and output operations.
using namespace std; //This is a namespace. It tells the compiler what library to use. In this case, it is the standard library.

int main() {
    cout << "Hello World!"; // cout is the output stream object, '<<' is the insertion operator, and "Hello World!" is the string we want to insert.
    return 0; // return 0 is the exit status of the program. It tells the computer that the program ran successfully.
}

// To compile this program, we need to run the following command in the terminal:
// g++ my-first-cpp.cpp -o my-first-cpp