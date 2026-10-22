// Read a number of seconds and print it as hours, minutes and seconds using / and %.
#include <iostream>
using namespace std;
int main() {
    long long totalSeconds{0};
    cout << "Enter total number of seconds: ";
    if (!(cin >> totalSeconds) || totalSeconds < 0) {
        cerr << "Error: Please enter a valid non-negative integer.\n";
        return 1;
    }
    long long hours = totalSeconds / 3600;
    long long remainingSeconds = totalSeconds % 3600;
    long long minutes = remainingSeconds / 60;
    long long seconds = remainingSeconds % 60;
    cout << totalSeconds << " seconds = "
    << hours << " hour(s), "
    << minutes << " minute(s), and "
    << seconds << " second(s).\n";
    return 0;
}