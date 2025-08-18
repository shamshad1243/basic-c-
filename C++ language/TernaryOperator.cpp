
#include "TernaryOperator.h"
#include <iostream>
using namespace std;

int main() {
    int a, b;
    cout << "Enter two numbers: ";
    cin >> a >> b;

    // ternary operator
    int max = (a > b) ? a : b;

    cout << "The greater number is: " << max << endl;

    return 0;
}
