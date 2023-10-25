//  AgeCalculator of 10 Students

#include <iostream>
using namespace std;

int main()
{
    int age = 0;
    int TotalAge = 0, AvgAge = 0;
    int ageCounter = 0;

    while (ageCounter < 10)
    {
        cout << "Please enter the age of student " << ++ageCounter << " :\t";
        cin >> age;
        TotalAge = TotalAge + age;
    }

    cout << "Total Age of 10 Students = " << TotalAge << endl;
    AvgAge = TotalAge / 10;
    cout << "Average Age of Students is: " << AvgAge;
}

// // Path: age-cal.cpp

#include <iostream>
using namespace std;

int main (){
    int age1, age2, age3, age4, age5, age6, age7, age8, age9, age10;
    int TotalAge;
    int AvgAge;

    cout << "Please enter the age for student 1 : ";
    cin >> age1;
    cout << "Please enter the age for student 2 : ";
    cin >> age1;
    cout << "Please enter the age for student 3 : ";
    cin >> age3;
    cout << "Please enter the age for student 4 : ";
    cin >> age4;
    cout << "Please enter the age for student 5 : ";
    cin >> age5;
    cout << "Please enter the age for student 6 : ";
    cin >> age6;
    cout << "Please enter the age for student 7 : ";
    cin >> age7;
    cout << "Please enter the age for student 8 : ";
    cin >> age8;
    cout << "Please enter the age for student 9 : ";
    cin >> age9;
    cout << "Please enter the age for student 10 : ";
    cin >> age10;

    TotalAge = age1 + age2 + age3 + age4 + age5 + age6 + age7 + age8 + age9 + age10;
    AvgAge = TotalAge / 10;

    cout << "Total Age of 10 Students = " << TotalAge << endl; 
    cout << "Average Age of Students is: " << AvgAge;
}