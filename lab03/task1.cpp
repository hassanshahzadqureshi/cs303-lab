// Read three numbers and print the largest using nested if.
#include <iostream>
using namespace std;
int main() {
    double a{0.0}, b{0.0}, c{0.0};
    cout << "Enter three numbers: ";
    if (!(cin >> a >> b >> c)) {
        cerr << "Error: Invalid input.\n";
        return 1;
    }
    double largest{0.0};
    // Using nested if structure
    if (a >= b) {
        if (a >= c) {
            largest = a;
        } else {
            largest = c;
        }
    } else {
        if (b >= c) {
            largest = b;
        } else {
            largest = c;
        }
    }
    cout << "The largest number is: " << largest << "\n";
    return 0;
}