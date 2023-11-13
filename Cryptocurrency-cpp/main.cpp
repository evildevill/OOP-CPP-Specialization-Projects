#include <iostream> // USED FOR INPUT AND OUTPUT
#include <string>   // USED FOR STRINGS
#include <vector>   // USED FOR VECTORS
#include <unistd.h> // USED FOR SLEEP
#include <cstdlib>  // USED FOR SYSTEM(CLS)

using namespace std; // USED FOR STD FUNCTIONS

void PrintMenu() // PRINTS THE MENU
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

void PrintHelp() // PRINTS THE HELP
{
    cout << "Help - Your Aim is to make money. Analyze the market and make a bid" << endl;
}

void PrintExchangeStats() // PRINTS THE EXCHANGE STATS
{
    cout << "Exchange Stats - Looks Good" << endl;
}

void MakeAnOffer() // PRINTS THE MAKE AN OFFER
{
    cout << "Make an offer - Please Enter Your desired amount" << endl;
}

void MakeABid() // PRINTS THE MAKE A BID
{
    cout << "Make a bid - Please Enter Your desired amount" << endl;
}

void PrintWallet() // PRINTS THE WALLET
{
    cout << "Wallet - Your Wallet is empty :(" << endl;
}

void Continue() // PRINTS THE CONTINUE
{
    cout << "Continue - Going to the next Time Frame" << endl;
}

void Quit() // PRINTS THE QUIT
{
    cout << "Quit - Bye Bye" << endl;
}

int getUserOption() // GETS THE USER OPTION
{
    int UserOption; // UserOption is an integer
    cout << "============================" << endl;
    cout << "Enter your choice (1 - 7): ";
    cin >> UserOption; // UserOption is the input
    cout << "You Entered: " << UserOption << endl;
    cout << "============================" << endl;
    return UserOption; // Returns the UserOption
}

void ProcessUserOption(int UserOption) // PROCESSES THE USER OPTION
{
    if (UserOption == 0) // Bad Choice
    {
        cout << "Invalid Choice :(" << endl;
        cout << "Please enter a number between 1 to 7" << endl;
        sleep(1);
        system("cls");
    }
    else if (UserOption == 1) // Print Help
    {
        PrintHelp();
    }
    else if (UserOption == 2) // Print Exchange Stats
    {
        PrintExchangeStats();
    }
    else if (UserOption == 3) // Make an offer
    {
        MakeAnOffer();
    }
    else if (UserOption == 4) // Make a bid
    {
        MakeABid();
    }
    else if (UserOption == 5) // Print Wallet
    {
        PrintWallet();
    }
    else if (UserOption == 6) // Continue
    {
        Continue();
    }
    else if (UserOption == 7) // Quit
    {
        Quit(); // Exit the loop if the user chooses to quit
    }
    else // Bad Choice
    {
        cout << "Invalid Choice :(" << endl;
        cout << "Please enter a number between 1 to 7" << endl;
    }
}

int main() // MAIN FUNCTION
{
    enum class OrderBookType
    {
        BID,
        ASK,
        SHOUT
    }; // ENUM CLASS FOR ORDER BOOK TYPE

    // double Price = 5319.450228; // DOUBLE FOR PRICE
    // double Amount = 0.00020075; // DOUBLE FOR AMOUNT
    // string TimeStamp{"2023/11/13 17:01:24.884492"}; // STRING FOR TIMESTAMP
    // string Product{"BTC/USD"}; // STRING FOR PRODUCT
    // // string OderType{"anything"};
    // OrderBookType OrderType = OrderBookType::ASK; // ORDER TYPE IS ASK

    vector<double> Prices;            // VECTOR FOR PRICES
    vector<double> Amounts;           // VECTOR FOR AMOUNTS
    vector<string> TimeStamps;        // VECTOR FOR TIMESTAMPS
    vector<string> Products;          // VECTOR FOR PRODUCTS
    vector<OrderBookType> OrderTypes; // VECTOR FOR ORDER TYPES

    Prices.push_back(5000.01);                          // PUSH BACK THE PRICE
    Amounts.push_back(0.001);                           // PUSH BACK THE AMOUNT
    TimeStamps.push_back("2023/11/13 17:01:24.884492"); // PUSH BACK THE TIMESTAMP
    Products.push_back("BTC/USD");                      // PUSH BACK THE PRODUCT
    OrderTypes.push_back(OrderBookType::ASK);           // PUSH BACK THE ORDER TYPE

    Prices.push_back(10.01);                            // PUSH BACK THE PRICE
    Amounts.push_back(0.001);                           // PUSH BACK THE AMOUNT
    TimeStamps.push_back("2023/11/13 17:01:24.884492"); // PUSH BACK THE TIMESTAMP
    Products.push_back("BTC/USD");                      // PUSH BACK THE PRODUCT
    OrderTypes.push_back(OrderBookType::BID);           // PUSH BACK THE ORDER TYPE

    cout << "Price: " << Prices[0] << endl; // PRINTS THE PRICE
    cout << "Price: " << Prices[1] << endl; // PRINTS THE PRICE

    // while (true) // WHILE LOOP FOR THE MENU
    // {
    //     PrintMenu(); // Prints the menu
    //     int UserOption = getUserOption(); // UserOption is the input
    //     ProcessUserOption(UserOption); // Processes the UserOption
    // }

    return 0; // Returns 0
}
