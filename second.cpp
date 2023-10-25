// This is our second cpp programe
// what are variable

#include <iostream>
using namespace std;

int main(){
    int a = 4;
    int b = 5;
    cout << "Operators in C++:" << endl;
    cout << "Following are the types of operators in C++" << endl;
    // Arithmetic operators
    cout << "The value of a + b is " << a+b << endl;
    cout << "The value of a - b is " << a-b << endl;
    cout << "The value of a * b is " << a*b << endl;
    cout << "The value of a / b is " << a/b << endl;
    cout << "The value of a % b is " << a%b << endl;
    cout << "The value of a++ is " << a++ << endl;
    cout << "The value of a-- is " << a-- << endl;
    cout << "The value of ++a is " << ++a << endl;
    cout << "The value of --a is " << --a << endl;
    cout << endl;

    // Comparison operators
    cout << "Following are the comparison operators in C++" << endl;
    cout<<"The value of a == b is "<<(a==b)<<endl;
    cout<<"The value of a != b is "<<(a!=b)<<endl;
    cout<<"The value of a >= b is "<<(a>=b)<<endl;
    cout<<"The value of a <= b is "<<(a<=b)<<endl;
    cout<<"The value of a > b is "<<(a>b)<<endl;
    cout<<"The value of a < b is "<<(a<b)<<endl;
    cout << endl;

    // Logical operators
    cout << "Following are the logical operators in C++" << endl;
    cout<<"The value of this logical and operator ((a==b) && (a<b)) is:"<<((a==b) && (a<b))<<endl;
    cout<<"The value of this logical or operator ((a==b) || (a<b)) is:"<<((a==b) || (a<b))<<endl;
    cout<<"The value of this logical not operator (!(a==b)) is:"<<(!(a==b))<<endl;
    cout << endl;

    // Assignment operators --> used to assign values to variables
    // int a =3, b=9;
    // char d='d';

    cout<<"Following are the assignment operators in C++"<<endl;
    cout<<"The value of a = 3 is "<<(a)<<endl;
    cout<<"The value of b = 9 is "<<(b)<<endl;
    cout<<"The value of a += 3 is "<<(a += 3)<<endl;
    cout<<"The value of b -= 3 is "<<(b -= 3)<<endl;
    cout<<"The value of a *= 3 is "<<(a *= 3)<<endl;
    cout<<"The value of b /= 3 is "<<(b /= 3)<<endl;
    cout<<"The value of a %= 3 is "<<(a %= 3)<<endl;
    cout<<"The value of b &= 3 is "<<(b &= 3)<<endl;
    cout<<"The value of a |= 3 is "<<(a |= 3)<<endl;
    cout<<"The value of b ^= 3 is "<<(b ^= 3)<<endl;
    cout<<"The value of a >>= 3 is "<<(a >>= 3)<<endl;
    cout<<"The value of b <<= 3 is "<<(b <<= 3)<<endl;
    cout << endl; 
}