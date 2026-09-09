// Power loss is formally defined as the product of resistance and the square of the current.
// Resistance is defined as resistivity * (L / A), where L is the length and A is the cross-sectional area.

// Write a program that prompts the user to enter L, A, resistivity, and current,
// and returns the power loss of a transmission line.

#include <iostream>
#include <cmath>

using namespace std;

int main() {
    double L, A, resistivity, current;

    // Prompt the user to enter the values
    cout << "Enter the length (L): ";
    cin >> L;

    cout << "Enter the cross-sectional area (A): ";
    cin >> A;

    cout << "Enter the resistivity: ";
    cin >> resistivity;

    cout << "Enter the current: ";
    cin >> current;

    // Calculate resistance
    double resistance = resistivity * (L / A);

    // Calculate power loss
    double powerLoss = resistance * pow(current, 2);

    // Display the result
    cout << "The power loss is " << powerLoss << " watts" << endl;

    return 0;
}
