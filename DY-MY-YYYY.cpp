#include<iostream>
using namespace std;

int main() {
    // Declare variables to store day, month, and year
    int day, month, year;

    // Input day, month, and year
    cout << "Enter day (DD): ";
    cin >> day;

    cout << "Enter month (MM): ";
    cin >> month;

    cout << "Enter year (YY): ";
    cin >> year;

    // Display the date in the desired format (MM-DD-YY)
    cout << "The date in the desired format is: " << month << "-" << day << "-" << year << endl;

    return 0;
}
