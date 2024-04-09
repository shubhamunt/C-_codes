#include <iostream>
using namespace std;

// Function declaration (forward declaration)
int add(int a, int b);

int main() {
    int result = add(5, 3); // Calls the function
    cout << "The sum is: " << result << endl;
    return 0;
}

// Function definition
int add(int a, int b) {
    return a + b;
}
