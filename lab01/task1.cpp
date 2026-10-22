// Write a program that prints your name, roll number and program on separate lines.

#include <iostream>
#include <string>
using namespace std;
int main() {
    string name, rollno, program;
    cout << "Enter your name: ";
    getline(cin, name);
    cout << "Enter your roll no: ";
    getline(cin, rollno);
    cout << "Enter your program: ";
    getline(cin, program);
    cout << "Name: " << name << endl;
    cout << "Roll No: " << rollno << endl; // Replace with your actual roll number
    cout << "Program: " << program << endl;
    cout << "University: MNS University of Agriculture, Multan\n";
    return 0;
}