#include <iostream>
using namespace std;

int main() {
int r;
int c;
int k; 
int matrixA[3][3] = {{1,3,4},{4,6,8},{10,4,0}};
int matrixB[3][3] = {{12,16,1},{5,12,11},{25,14,19}};
int matrix_prod[3][3] = {}; // optional initiation
    
  for(r=0; r<3; r++) {
    for(c=0; c<3; c++){
        // matrix_prod[1][1] = (matrixA[1][1] * matrixB[1][1] + matrixA[1][2] * matrixB[2][1] + matrixA[1][3] * matrixB[3][1])
        // similarly we can get matrix_prod[1][2] , matrix_prod[1][3], .....,matrix[3][3]
        // summation is represented as += 
  
      for(k=0; k<3; k++){
       matrix_prod[r][c] += matrixA[r][k] * matrixB[k][c];
      }
    cout << matrix_prod[r][c] << " ";
    }  
   cout << endl;
  }
 return 0;
}
