#include<iostream>
#include<cctype> // For toupper() and tolower()
using namespace std;

int main() {
    char inputChar;

    // Input a letter from the keyboard
    cout << "Enter a letter: ";
    cin >> inputChar;

    // Check if the input is a letter
    if (isalpha(inputChar)) {
        // Convert to uppercase and display
        cout << "Uppercase: " << char(toupper(inputChar)) << endl;

        // Convert to lowercase and display
        cout << "Lowercase: " << char(tolower(inputChar)) << endl;
    } else {
        cout << "Invalid input. Please enter a letter." << endl;
    }

    return 0;
}
