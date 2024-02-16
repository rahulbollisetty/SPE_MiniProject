#include <iostream>
#include <cmath>
using namespace std;
#include "functions.h"

// Function prototypes
double squareRoot(double x);
double factorial(int x);
double naturalLogarithm(double x);
double powerFunction(double base, double exponent);

int main() {
    while (true) {
        int choice;
        double operand, result;

        // Display menu
        cout << "Scientific Calculator Menu:\n";
        cout << "1. Square root function (√x)\n";
        cout << "2. Factorial function (x!)\n";
        cout << "3. Natural logarithm (ln(x))\n";
        cout << "4. Power function (x^y)\n";
        cout << "0. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                cout << "Enter the operand: ";
                cin >> operand;
                result = squareRoot(operand);
                cout << "Result: " << result << endl;
                break;
            case 2:
                cout << "Enter the operand: ";
                cin >> operand;
                result = factorial(static_cast<int>(operand));
                cout << "Result: " << result << endl;
                break;
            case 3:
                cout << "Enter the operand: ";
                cin >> operand;
                result = naturalLogarithm(operand);
                cout << "Result: " << result << endl;
                break;
            case 4:
                double base, exponent;
                cout << "Enter the base: ";
                cin >> base;
                cout << "Enter the exponent: ";
                cin >> exponent;
                result = powerFunction(base, exponent);
                cout << "Result: " << result << endl;
                break;
            case 0:
                cout << "Exiting the program. Goodbye!\n";
                return 0; // Exit the program
            default:
                cout << "Invalid choice. Please try again.\n";
        }
    }

    return 0;
}


