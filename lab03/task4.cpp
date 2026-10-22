// Determine whether a year is a leap year
#include <iostream>
using namespace std;
int main() {
    int year{0};
    cout << "Enter a year: ";
    if(!(cin >> year) || year < 0) {
        cerr << "Error: Invalid Year\n";
    }
    if (year % 4 == 0) {
        cout << year << " is a leap year.\n";
    } else {
        cout << year << " not a leap year.\n";
    }
    return 0;
}