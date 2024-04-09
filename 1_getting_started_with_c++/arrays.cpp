#include <iostream>
using namespace std;

int main()
{
    int lucky_numbers[] = {2, 3, 5, 7, 9, 1, 33, 42, 5};
    // To print the entire array, loop through its elements
    for(int i = 0; i < 9; i++) {
        cout << lucky_numbers[i] << " ";
    }
    cout << endl; // Print a newline after the array
    
    cout << lucky_numbers[4] << endl; // Print the fifth element of the array

    lucky_numbers[4] = 99; // Change the fifth element to 99

    // Print the array again to see the change
    for(int i = 0; i < 9; i++) {
        cout << lucky_numbers[i] << " ";
    }
    cout << endl;

    return 0;
}

