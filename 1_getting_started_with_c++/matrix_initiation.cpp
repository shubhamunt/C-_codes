#include <iostream>
using namespace std;

int main() {
int r;
int c;
int matrix[3][3];

  for(r=0; r<3; r++) {        // outer loop for rows        
    for(c=0; c<3; c++){       // inner loop for columns
       matrix[r][c] = r + c;  // random relation of r's and c's  

   // printing the matrix
    cout << matrix[r][c] << " "; 
    } 
   cout << endl; // for a space after each row 
  }
 return 0;
}

  
