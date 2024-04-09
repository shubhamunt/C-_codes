#include <iostream>
using namespace std;

// function declaration above main() function

int add_fxn(int a, int b) 
{ 
  return a + b; // function body

} 

// We can now use the declared function anywhere in our code

int main()
{
  int result = add_fxn(4,12);
  cout << "The sum is " << result << endl;

  return 0;  
}


