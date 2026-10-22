// Write a grade calculator for marks 0–100 using the grading scheme of the University semester rules.
#include <iostream>
using namespace std;
int main() {
    double marks{0.0};
    cout << "Enter course marks (0 - 100): ";
    if (!(cin >> marks) || marks < 0.0 || marks > 100.0) {
        cerr << "Error: Invalid marks! Must be between 0 and 100.\n";
        return 1;
    }
    string grade;
    double gpa = 0.0;
    if (marks >= 85.0) {
        grade = "A";   gpa = 4.0;
    } else if (marks >= 80.0) {
        grade = "A-";  gpa = 3.7;
    } else if (marks >= 75.0) {
        grade = "B+";  gpa = 3.3;
    } else if (marks >= 70.0) {
        grade = "B";   gpa = 3.0;
    } else if (marks >= 65.0) {
        grade = "B-";  gpa = 2.7;
    } else if (marks >= 61.0) {
        grade = "C+";  gpa = 2.3;
    } else if (marks >= 58.0) {
        grade = "C";   gpa = 2.0;
    } else if (marks >= 50.0) {
        grade = "D";   gpa = 1.0;
    } else {
        grade = "F";   gpa = 0.0;
    }
    cout << "Marks: " << marks 
         << " | Grade: " << grade 
         << " | Grade Points: " << gpa << "\n";
    return 0;
}