// Read temperature in Celsius and print it in Fahrenheit and Kelvin with two decimal places.
#include <iomanip>
#include <iostream>
using namespace std;
int main() {
    double celsius{0.0};
    cout << "Enter temperature in Celsius: ";
    if (!(cin >> celsius)) {
        cerr << "Error: Invalid numeric input.\n";
        return 1;
    }
    double fahrenheit = (celsius * 9.0 / 5.0) + 32.0;
    double kelvin = celsius + 273.15;
    cout << fixed << setprecision(2);
    cout << "\n--- Temperature Conversion ---\n";
    cout << "Celsius:    " << celsius << " C\n";
    cout << "Fahrenheit: " << fahrenheit << " F\n";
    cout << "Kelvin:     " << kelvin << " K\n";
    return 0;
}