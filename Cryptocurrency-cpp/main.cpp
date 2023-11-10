#include <iostream>
#include <unistd.h>
#include <cstdlib>

using namespace std;

void PrintMenu()
{
    cout << "==============================================" << endl;
    cout << "====Welcome to the Cryptocurrency Exchange====" << endl;
    cout << "==============================================" << endl;
    cout << "1: Print Help" << endl;
    cout << "2: Print Exchange Stats" << endl;
    cout << "3: Make an offer" << endl;
    cout << "4: Make a bid" << endl;
    cout << "5: Print Wallet" << endl;
    cout << "6: Continue" << endl;
    cout << "7: Quit" << endl;
}

int main()
{
    while (true)
    {
        PrintMenu();
        int UserOption;
        cout << "============================" << endl;
        cout << "Enter your choice (1 - 7): ";
        cin >> UserOption;

        cout << "You Entered: " << UserOption << endl;
        cout << "============================" << endl;

        if (UserOption == 0) // Bad Choice
        {
            cout << "Invalid Choice :(" << endl;
            cout << "Please enter a number between 1 to 7" << endl;
            sleep(2);
            system("cls");
        }
        else if (UserOption == 1) // Print Help
        {
            cout << "Help - Your Aim is to make money. Analyze the market and make a bid" << endl;
        }
        else if (UserOption == 2) // Print Exchange Stats
        {
            cout << "Exchange Stats - Looks Good" << endl;
        }
        else if (UserOption == 3) // Make an offer
        {
            cout << "Make an offer - Please Enter Your desired amount" << endl;
        }
        else if (UserOption == 4) // Make a bid
        {
            cout << "Make a bid - Please Enter Your desired amount" << endl;
        }
        else if (UserOption == 5) // Print Wallet
        {
            cout << "Wallet - Your Wallet is empty :(" << endl;
        }
        else if (UserOption == 6) // Continue
        {
            cout << "Going to the next Time Frame" << endl;
        }
        else if (UserOption == 7) // Quit
        {
            cout << "Quit" << endl;
            break; // Exit the loop if the user chooses to quit
        }
        else // Bad Choice
        {
            cout << "Invalid Choice :(" << endl;
            cout << "Please enter a number between 1 to 7" << endl;
        }
    }

    return 0;
}
