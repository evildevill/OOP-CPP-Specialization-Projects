// Name : Muhammad Waseem Akram
// Student ID: bc230202388
// Assignment No: 1
// Subject: CS-201
// Submission Date: 2023-11-10
// Description: This program prints the multiplication table for a given number
// IDE Used:  Visual Studio Code
// Compiler Used: MinGW

#include <iostream>  // Include the iostream library
using namespace std; // Using the standard namespace

// Function to print the multiplication table for a given number
void MultiplicationTable(int number) // Function definition
{
    cout << "Multiplication Table for " << number << ":\n"; // Print the table header
    for (int i = 1; i <= 10; ++i)                           // Loop to print the table
    {
        cout << number << " * " << i << " = " << (number * i) << endl; // Print the table row
    }                                                                  // End of loop
} // End of function definition

int main() // Main function
{
    // Variable to store user input
    int baseNumber;
    // Get user input for the base number
    cout << "Enter a number to generate its multiplication table: ";
    cin >> baseNumber; // Store the user input in the variable
    // Print the multiplication table using the function
    MultiplicationTable(baseNumber);
    return 0; // Return 0 to the operating system
}
