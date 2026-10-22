// Demonstrate overflow by adding 1 to INT_MAX and explain the result
#include <climits>
#include <iostream>
using namespace std;
int main() {
    int maxVal = INT_MAX;
    cout << "Value of INT_MAX: " << maxVal << "\n";

    // Adding 1 causes signed integer overflow
    int overflowedVal = maxVal + 1;
    cout << "Value of INT_MAX + 1: " << overflowedVal << "\n";
    int underflowedVal = overflowedVal - 1;
    cout << "Value of INT_MAX - 1: " << underflowedVal << "\n";
    return 0;
}