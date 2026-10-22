// Record three different compiler errors and explain what caused each.

#include <iostream>
using namespace std;
int main() {
    // Error 1: Missing semicolon
    // cout << "Hello" 
    
    // Error 2: Undeclared identifier
    // count = 10;
    
    // Error 3: Missing header or unresolved identifier (e.g., without #include <string>)
    // string s = "test"; // (fails if <string> is omitted in strict standard modes)
    // OR Type mismatch assignment:
    // int x = "Hello";
    cout << "Read comments above for the 3 documented errors.\n";
    return 0;
}