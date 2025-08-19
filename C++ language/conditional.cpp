//
// Created by hp on 8/19/2025.
//

#include <iostream>
using namespace std;

int main() {
    string name;

    int math, science, english;

    cout << "Enter Student Name: ";
    getline(cin, name);

    cout << "Enter Marks in Math: ";
    cin >> math;

    cout << "Enter Marks in Science: ";
    cin >> science;

    cout << "Enter Marks in English: ";
    cin >> english;

    // Total and Percentage
    int total = math + science + english;
    double percentage = total / 3.0;

    cout << "\nStudent Name: " << name << endl;
    cout << "Total Marks: " << total << endl;
    
    cout << "Percentage: " << percentage << "%" << endl;

    // Conditional statements for Grade
    if (percentage >= 90)
        cout << "Grade: A+" << endl;
    else if (percentage >= 80)
        cout << "Grade: A" << endl;
    else if (percentage >= 70)
        cout << "Grade: B" << endl;
    else if (percentage >= 60)
        cout << "Grade: C" << endl;
    else if (percentage >= 50)
        cout << "Grade: D" << endl;
    else
        cout << "Grade: F (Fail)" << endl;

    // Extra: Check pass/fail in individual subjects
    if (math < 35 || science < 35 || english < 35)
        cout << "Status: Fail in one or more subjects" << endl;
    else
        cout << "Status: Pass" << endl;

    return 0;
}
