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
    vector<OderBookEntry> Orders;
    Orders.push_back(OderBookEntry{1000,
                                   0.002,
                                   "2023/11/13 17:01:24.884492",
                                   "BTC/USD",
                                   OrderBookType::BID});

    Orders.push_back(OderBookEntry{2000,
                                   0.002,
                                   "2023/11/13 17:01:24.884492",
                                   "BTC/USD",
                                   OrderBookType::BID});

    cout << "Price: " << Orders[1].Price << endl;
    return 0;
}