#include <iostream>
#include <string>
#include <vector>
#include <unistd.h>
#include <cstdlib>

using namespace std;

enum class OrderBookType
{
    BID,
    ASK,
    SHOUT
};

class OderBookEntry
{
public:
    OderBookEntry(double _Price,
                  double _Amount,
                  string _TimeStamp,
                  string _Product,
                  OrderBookType _OrderType)
        : Price(_Price),
          Amount(_Amount),
          TimeStamp(_TimeStamp),
          Product(_Product),
          OrderType(_OrderType)
    {
    }

    double Price;
    double Amount;
    string TimeStamp;
    string Product;
    OrderBookType OrderType;
};

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

void PrintHelp()
{
    cout << "Help - Your Aim is to make money. Analyze the market and make a bid" << endl;
}

void PrintExchangeStats()
{
    cout << "Exchange Stats - Looks Good" << endl;
}

void MakeAnOffer()
{
    cout << "Make an offer - Please Enter Your desired amount" << endl;
}

void MakeABid()
{
    cout << "Make a bid - Please Enter Your desired amount" << endl;
}

void PrintWallet()
{
    cout << "Wallet - Your Wallet is empty :(" << endl;
}

void Continue()
{
    cout << "Continue - Going to the next Time Frame" << endl;
}

void Quit()
{
    cout << "Quit - Bye Bye" << endl;
}

int getUserOption()
{
    int UserOption;
    cout << "============================" << endl;
    cout << "Enter your choice (1 - 7): ";
    cin >> UserOption;
    cout << "You Entered: " << UserOption << endl;
    cout << "============================" << endl;
    return UserOption;
}

void ProcessUserOption(int UserOption)
{
    if (UserOption == 0)
    {
        cout << "Invalid Choice :(" << endl;
        cout << "Please enter a number between 1 to 7" << endl;
        sleep(1);
        system("cls");
    }
    else if (UserOption == 1)
    {
        PrintHelp();
    }
    else if (UserOption == 2)
    {
        PrintExchangeStats();
    }
    else if (UserOption == 3)
    {
        MakeAnOffer();
    }
    else if (UserOption == 4)
    {
        MakeABid();
    }
    else if (UserOption == 5)
    {
        PrintWallet();
    }
    else if (UserOption == 6)
    {
        Continue();
    }
    else if (UserOption == 7)
    {
        Quit();
    }
    else
    {
        cout << "Invalid Choice :(" << endl;
        cout << "Please enter a number between 1 to 7" << endl;
    }
}

int main()
{
    // double Price = 5319.450228; // DOUBLE FOR PRICE
    // double Amount = 0.00020075; // DOUBLE FOR AMOUNT
    // string TimeStamp{"2023/11/13 17:01:24.884492"}; // STRING FOR TIMESTAMP
    // string Product{"BTC/USD"}; // STRING FOR PRODUCT
    // // string OderType{"anything"};
    // OrderBookType OrderType = OrderBookType::ASK; // ORDER TYPE IS ASK

    // vector<double> Prices;            // VECTOR FOR PRICES
    // vector<double> Amounts;           // VECTOR FOR AMOUNTS
    // vector<string> TimeStamps;        // VECTOR FOR TIMESTAMPS
    // vector<string> Products;          // VECTOR FOR PRODUCTS
    // vector<OrderBookType> OrderTypes; // VECTOR FOR ORDER TYPES

    // Prices.push_back(5000.01);                          // PUSH BACK THE PRICE
    // Amounts.push_back(0.001);                           // PUSH BACK THE AMOUNT
    // TimeStamps.push_back("2023/11/13 17:01:24.884492"); // PUSH BACK THE TIMESTAMP
    // Products.push_back("BTC/USD");                      // PUSH BACK THE PRODUCT
    // OrderTypes.push_back(OrderBookType::ASK);           // PUSH BACK THE ORDER TYPE

    // Prices.push_back(10.01);                            // PUSH BACK THE PRICE
    // Amounts.push_back(0.001);                           // PUSH BACK THE AMOUNT
    // TimeStamps.push_back("2023/11/13 17:01:24.884492"); // PUSH BACK THE TIMESTAMP
    // Products.push_back("BTC/USD");                      // PUSH BACK THE PRODUCT
    // OrderTypes.push_back(OrderBookType::BID);           // PUSH BACK THE ORDER TYPE

    // cout << "Price: " << Prices[0] << endl; // PRINTS THE PRICE
    // cout << "Price: " << Prices[1] << endl; // PRINTS THE PRICE

    // while (true) // WHILE LOOP FOR THE MENU
    // {
    //     PrintMenu(); // Prints the menu
    //     int UserOption = getUserOption(); // UserOption is the input
    //     ProcessUserOption(UserOption); // Processes the UserOption
    // }

    OderBookEntry order1{10000,
                         0.002,
                         "2023/11/13 17:01:24.884492",
                         "BTC/USD",
                         OrderBookType::BID};

    // order1.Price = 10000;
    // order1.Amount = 0.002;
    // order1.TimeStamp = "2023/11/13 17:01:24.884492";
    // order1.Product = "BTC/USD";
    // order1.OrderType = OrderBookType::BID;

    cout << "Price: " << order1.Price << endl;
    return 0;
}
