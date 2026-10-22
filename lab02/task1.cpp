// Read the length and width of a field in metres and print its area in square metres and in kanals (1 kanal = 505.857 m²).

#include <iostream>
#include <iomanip>
using namespace std;
int main() {
    constexpr double kSquareMetresPerKanal = 505.857;
    double length{0.0};
    double width{0.0};
    cout << "Enter field length in metres: ";
    if (!(cin >> length) || length <= 0) {
        cerr << "Error: Invalid length input.\n";
        return 1;
    }
    cout << "Enter field width in metres: ";
    if (!(cin >> width) || width <= 0) {
        cerr << "Error: Invalid width input.\n";
        return 1;
    }
    double areaSqM = length * width;
    double areaKanals = areaSqM / kSquareMetresPerKanal;
    cout << fixed << setprecision(3);
    cout << "\n--- Field Area Results ---\n";
    cout << "Area in Square Metres: " << areaSqM << " m^2\n";
    cout << "Area in Kanals:        " << areaKanals << " kanals\n";
    return 0;
}