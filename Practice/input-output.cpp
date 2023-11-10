// Insertion Operator (<<) is used to insert the data into the output stream.
// Extraction Operator (>>) is used to extract the data from the input stream.

// endl is used to insert a new line character and flushes the stream. It is equivalent to '\n' in c++ Language.
// endl is defined in the iostream header file.

// cin is a predefined variable that reads data from the keyboard with the extraction operator (>>)
// cout is a predefined variable that writes data to the screen with the insertion operator (<<)

// int x; 
// cout << "Type a number: "; // Type a number and press enter
// cin >> x; // Get user input from the keyboard
// cout << "Your number is: " << x; // Display the input value

// Good To Know
// cout is pronounced "see-out". Used for output, and uses the insertion operator (<<)
// cin is pronounced "see-in". Used for input, and uses the extraction operator (>>)

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