#include <iostream>
using namespace std;

int calculateFactorial(int n) {
    if (n == 0 || n == 1) {
        return 1;
    } else {
        int result = 1;
        for (int i = 2; i <= n; ++i) {
            result *= i;
        }
        return result;
    }
}

int main() {
    int userInput;
    cout << "Enter a number to calculate its factorial: ";
    cin >> userInput;
    int factorial = calculateFactorial(userInput);
    cout << "The factorial of " << userInput << " is: " << factorial << endl;
    return 0;
}
