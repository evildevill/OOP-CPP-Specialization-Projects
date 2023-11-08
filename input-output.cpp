// Simple C++ program to print "Hello World"
// #include <iostream>
// using namespace std;

// int main(){
//     cout << "Hello World.!!" << endl;
//     cout << "i am learning CPP";
//     return 0;
// }

// taking input and givng ouput

#include <iostream> 
#include <unistd.h> // for sleep() function
#include <cstdlib> // for system("cls") function

using namespace std;

int main (){
    int InputNumber;
    cout << "Enter Any Number : ";
    cin >> InputNumber;
    cout << "The Number You Entered is : " << InputNumber << endl;
    // Pause the program for 2 seconds.
    sleep(2);
    // Clear the screen.
    system("cls");
    return 0;
}

// Insertion Operator (<<) is used to insert the data into the output stream.
// Extraction Operator (>>) is used to extract the data from the input stream.

// endl is used to insert a new line character and flushes the stream. It is equivalent to '\n' in c++ Language.
// endl is defined in the iostream header file.

// cin is an object of the iostream class and is used to read input from the standard input device (keyboard).
// cout is an object of the iostream class and is used to write on the standard output device (monitor).