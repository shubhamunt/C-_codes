#include <iostream>
using namespace std;

int main(){
 int day = 4;
  switch(day) {
  case 1: 
    cout << "Sunday";
    break;
  case 2:
    cout << "Monday";
    break;
  case 3:
    cout << "Tuesday";
    break;
  case 4:
    cout << "Wednesday";
    break;
  case 5:
    cout << "Thursady";
    break;
  case 6:
    cout << "Friday";
    break;
  case 7:
    cout << "Saturday";
    break;
  default:
    cout << "Invalid day number";
    break;
 }
 return 0;
}
