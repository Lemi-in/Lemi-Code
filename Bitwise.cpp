// Adding two numbers without using the Addition operator

#include<iostream>
using namespace std;

int addWithoutPlus(int a, int b) {
    while (b != 0) {
        // Carry contains common set bits of a and b
        int carry = a & b;

        // Sum of bits of a and b where at least one of the bits is not set
        a = a ^ b;

        // Carry is shifted by one so that adding it to a gives the required sum
        b = carry << 1;
    }

    return a;
}

int main() {
    int num1, num2;

    // Input two numbers
    cout << "Enter the first number: ";
    cin >> num1;

    cout << "Enter the second number: ";
    cin >> num2;

    // Display the sum without using '+'
    cout << "Sum of " << num1 << " and " << num2 << " is: " << addWithoutPlus(num1, num2) << endl;

    return 0;
}
