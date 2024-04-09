#include <iostream>
using namespace std;

int main() {
    int number;
    cout << "Enter a number: ";
    cin >> number;

    // Check if the number is larger than 10 or less than -20, inclusive
    if (number >= 10 || number <= -20) {
        cout << "The number is NOT between -20 and 10.";
    } else {
        cout << "The number is between -20 and 10.";
    }

    return 0;
}

