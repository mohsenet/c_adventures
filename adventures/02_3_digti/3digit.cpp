// for c++ :
// g++ 3digit.c -o 3digit
// ./3digit

#include <stdio.h>
#include <iostream>
using namespace std;

int main() {
    int number;

    // Prompt the user to enter a three-digit number
    cout << "Enter a three-digit natural number: ";
    cin >> number;

    // Validate that the input is a three-digit number
    if (number < 100 || number > 999) {
        cout << "Invalid input! Please enter a three-digit number." << endl;
        return 1; // Exit the program with an error code
    }

    // Extract the digits
    int digit1 = number / 100;       // Extract the hundreds place
    int digit2 = (number / 10) % 10; // Extract the tens place
    int digit3 = number % 10;        // Extract the units place

    // Calculate the sum of the digits
    int sum = digit1 + digit2 + digit3;

    // Display the result
    cout << "The sum of the digits is: " << sum << endl;

    return 0; // Exit the program successfully
}
