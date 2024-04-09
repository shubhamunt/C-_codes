#include <iostream>
using namespace std;

int main()

{
    string name;
    string movie;

    cout << "What is your name? " << endl;
    cin >> name;
    // input from the user will be stored in the string "name"

    cout << "Hello " << name << "!" << endl;
    
    cin.ignore(numeric_limits<streamsize>::max(), '\n'); // Consume the leftover newline character
    cout << "What is your favorite movie?" << endl;
    getline(cin,movie);

    cout << movie << " is a good movie indeed!" << endl;

    return 0;
}
