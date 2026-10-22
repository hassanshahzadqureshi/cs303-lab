// lab03/task3_calculator.cpp
#include <iostream>
using namespace std;
int main() {
    double num1{0.0}, num2{0.0};
    char op{' '};
    cout << "=================================\n";
    cout << "      Simple Arithmetic Calculator\n";
    cout << "=================================\n";
    cout << "Enter first number: ";
    if (!(cin >> num1)) {
        cerr << "Error: Invalid first number.\n";
        return 1;
    }
    cout << "Enter an operator (+, -, *, /): ";
    cin >> op;
    cout << "Enter second number: ";
    if (!(cin >> num2)) {
        cerr << "Error: Invalid second number.\n";
        return 1;
    }
    switch (op) {
        case '+':
            cout << num1 << " + " << num2 << " = " << (num1 + num2) << "\n";
            break;
        case '-':
            cout << num1 << " - " << num2 << " = " << (num1 - num2) << "\n";
            break;
        case '*':
            cout << num1 << " * " << num2 << " = " << (num1 * num2) << "\n";
            break;
        case '/':
            if (num2 == 0.0) {
                cerr << "Error: Division by zero is undefined!\n";
            } else {
                cout << num1 << " / " << num2 << " = " << (num1 / num2) << "\n";
            }
            break;
        default:
            cerr << "Error: Unsupported operator '" << op << "'.\n";
            break;
    }
    return 0;
}