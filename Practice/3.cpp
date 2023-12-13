#include <string>
#include <iostream>
#include <exception>
using namespace std;

int main()
{
    int i = 2;
    float f = 1.4;
    char c = 'a';
    bool b = true;
    c += i + f + b;
    cout << c;
    return 0;
}