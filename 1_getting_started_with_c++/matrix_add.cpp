#include <iostream>
using namespace std;

int main() {
int r;
int c;
int matrix1[3][3] = {{1,3,4},{4,6,8},{10,4,0}};
int matrix2[3][3] = {{12,16,1},{5,12,11},{25,14,19}};
int matrix_sum[3][3] = {}; // initialize the matrix
  
  for(r=0; r<3; r++) {                                   
    for(c=0; c<3; c++){
       matrix_sum[r][c] = matrix1[r][c] + matrix2[r][c];

    cout << matrix_sum[r][c] << " ";
    }
   cout << endl;
  }
 return 0;
}
