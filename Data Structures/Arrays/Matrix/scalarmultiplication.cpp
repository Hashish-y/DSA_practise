/*C++ program for scalar multiplication of a matrix

Input : mat[][] = {{2, 3} {5, 4}}    k = 5
Output : 10 15 
         25 20 
We multiply 5 with every element.  */

#include <bits/stdc++.h>
#define N 3
using namespace std;

void scalarProductMat(int mat[][N], int k){
	for(int i=0; i<N; i++)
		for(int j=0; j<N; j++)
			mat[i][j] = k*mat[i][j];
}

//Driver Code
int main(){  
    int mat[N][N] = { { 1, 2, 3 },{ 4, 5, 6 }, { 7, 8, 9 } };
    int k = 4;
 
    scalarProductMat(mat, k);

    cout << "Scalar Product Matrix is : \n";
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++)
            printf("%d ", mat[i][j]);
        printf("\n");
    }
 
    return 0;
}