/* C++ program to rotate a matrix by 180 degrees 

Input :  1  2  3      Output : 9 8 7 
         4  5  6               6 5 4 
         7  8  9               3 2 1

         

Input :  1 2 3 4      Output : 6 5 4 3 
         5 6 7 8               2 1 0 9 
         9 0 1 2               8 7 6 5
         3 4 5 6               4 3 2 1  */

#include <bits/stdc++.h>
#define N 3
using namespace std;
 
void rotateMatrix(int mat[][N]){
    for (int i = N - 1; i >= 0; i--) {
        for (int j = N - 1; j >= 0; j--)
            printf("%d ", mat[i][j]);
 
        printf("\n");
    }
}
 
// Driven code
int main(){
    int mat[N][N] = {{ 1, 2, 3 },{ 4, 5, 6 },{ 7, 8, 9 }};
 
    rotateMatrix(mat);
    return 0;
}