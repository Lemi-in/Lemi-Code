#include<iostream>
using namespace std;

int main() {
    int choice;
    double inputValue;

    // Display menu for conversion types
    cout << "Select the conversion type:" << endl;
    cout << "1. Feet to Centimeters" << endl;
    cout << "2. Miles to Kilometers" << endl;
    cout << "3. Gallons to Liters" << endl;

    // Get user's choice
    cout << "Enter your choice (1, 2, or 3): ";
    cin >> choice;

    // Prompt user for input value
    cout << "Enter the value in English units: ";
    cin >> inputValue;

    // Perform the selected conversion and display the result
    switch (choice) {
        case 1:
            // 1 foot = 30.48 centimeters
            cout << inputValue << " feet is equal to " << inputValue * 30.48 << " centimeters." << endl;
            break;
        case 2:
            // 1 mile = 1.60934 kilometers
            cout << inputValue << " miles is equal to " << inputValue * 1.60934 << " kilometers." << endl;
            break;
        case 3:
            // 1 gallon = 3.78541 liters
            cout << inputValue << " gallons is equal to " << inputValue * 3.78541 << " liters." << endl;
            break;
        default:
            cout << "Invalid choice. Please enter 1, 2, or 3." << endl;
            break;
    }

    return 0;
}








/***************************
#include<iostream>
using namespace std;

// Function prototypes
double feetToCentimeters(double feet);
double milesToKilometers(double miles);
double gallonsToLiters(double gallons);

int main() {
    int choice;
    double inputValue;

    // Display menu for conversion types
    cout << "Select the conversion type:" << endl;
    cout << "1. Feet to Centimeters" << endl;
    cout << "2. Miles to Kilometers" << endl;
    cout << "3. Gallons to Liters" << endl;

    // Get user's choice
    cout << "Enter your choice (1, 2, or 3): ";
    cin >> choice;

    // Prompt user for input value
    cout << "Enter the value in English units: ";
    cin >> inputValue;

    // Perform the selected conversion and display the result
    switch (choice) {
        case 1:
            cout << inputValue << " feet is equal to " << feetToCentimeters(inputValue) << " centimeters." << endl;
            break;
        case 2:
            cout << inputValue << " miles is equal to " << milesToKilometers(inputValue) << " kilometers." << endl;
            break;
        case 3:
            cout << inputValue << " gallons is equal to " << gallonsToLiters(inputValue) << " liters." << endl;
            break;
        default:
            cout << "Invalid choice. Please enter 1, 2, or 3." << endl;
            break;
    }

    return 0;
}

// Function to convert feet to centimeters
double feetToCentimeters(double feet) {
    // 1 foot = 30.48 centimeters
    return feet * 30.48;
}

// Function to convert miles to kilometers
double milesToKilometers(double miles) {
    // 1 mile = 1.60934 kilometers
    return miles * 1.60934;
}

// Function to convert gallons to liters
double gallonsToLiters(double gallons) {
    // 1 gallon = 3.78541 liters
    return gallons * 3.78541;
}

******************************/


