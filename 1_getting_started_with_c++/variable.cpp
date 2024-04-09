#include <iostream>
using namespace std;

int main()

{
    string Name = "Alex";
    int Age = 40;
  
    cout << "There was a man named " << Name << endl;
    cout << Name << " was " <<  Age << " years old" << endl;

    // Updating a variable
    Age = 60;
    cout << Name << " did not like being " << Age << " years old" << endl;
    
    // length of a string
    cout << Name.length() << endl;
    
    // Finding character in a string
     cout << Name[0] << endl;
     Name[0] = 'S';
     cout << Name << endl; 
  
    // Finding text in a string
    string movie = "No country for old man";
    cout << movie.length() << endl;
    cout << movie.find("for",0) << endl;
   
    // Printing a substring of an entire string
    cout << movie.substr(4,7) << endl;
 
    return 0;
}
