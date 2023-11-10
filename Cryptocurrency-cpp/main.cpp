#include <iostream>  // Include the iostream library
#include <unistd.h>  // for sleep() function
#include <cstdlib>   // for system("cls") function
using namespace std; // Using the standard namespace

void PrintMenu()
{
    // Print the menu
    cout << "==============================================" << endl;
    cout << "====Welcome to the Cryptocurrency Exchaneg====" << endl;
    cout << "==============================================" << endl;
    // cout << endl; // Print a new line
    cout << "1: Print Help" << endl;
    cout << "2: Print Exchange Stats" << endl;
    cout << "3: Make an offer" << endl;
    cout << "4: Make a bid" << endl;
    cout << "5: Print Wallet" << endl;
    cout << "6: Continue" << endl;
    cout << "7: Quit" << endl;
}

int main() // Main function
{
    // Print the menu
    PrintMenu();
    int UserOption;                                 // Variable to store user input
    cout << "============================" << endl; // Print the menu
    cout << "Enter your choice (1 - 6): ";          // Get user input for the option number
    cin >> UserOption;                              // Store the user input in the variable
    cout << "You Entered: " << UserOption << endl;  // Print the user input
    cout << "============================" << endl; // Print the menu
    while (true)                                    // Check the user input and print the corresponding message
    {
        if (UserOption == 0) // Bad Choice
        {
            cout << "Invalid Choice :(" << endl;
            cout << "Please enter a number between 1 to 6" << endl;
            // Pause the program for 2 seconds.
            sleep(2);
            // Clear the screen.
            system("cls");
            // Print the menu 
            PrintMenu();
        }
        else if (UserOption == 1) // Print Help
        {

            cout << "Help - Your Aim is to make money. Analyse the market and makes bid" << endl;
        }
        else if (UserOption == 2) // Print Exchange Stats
        {
            cout << "Exchange Stats - Looks Good" << endl;
        }
        else if (UserOption == 3) // Make an offer
        {
            cout << "Make an offer - Please Enter Your desire amount" << endl;
        }
        else if (UserOption == 4) // Make a bid
        {
            cout << "Make a bid - Please Enter Your desire amount" << endl;
        }
        else if (UserOption == 5) // Print Wallet
        {
            cout << "Wallet - Your Wallet is empty :(" << endl;
        }
        else if (UserOption == 6) // Continue
        {
            cout << "Going to next Time Frame" << endl;
        }
        else if (UserOption == 7) // Quit
        {
            cout << "Quit" << endl;
        }
        else // Bad Choice
        {
            cout << "Invalid Choice :(" << endl;
            cout << "Please enter a number between 1 to 6" << endl;
        }
    }
    return 0;
}