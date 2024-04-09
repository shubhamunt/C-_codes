#include <iostream>
using namespace std;

int main() {
    int number;
    cout << "Enter a number: ";
    cin >> number;

    // Check if the number is between 10 and 20, inclusive
    if (number >= 10 && number <= 20) {
        cout << "The number is between 10 and 20.";
    } else {
        cout << "The number is not between 10 and 20.";
    }

    return 0;
}

