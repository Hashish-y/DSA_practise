/*C++ program to rotate the matrix in clockwise rotate elements in it 
Input            Output:
1    2    3      4    1    2
4    5    6      7    5    3
7    8    9      8    9    6

For 4*4 matrix
Input:                 Output:
1    2    3    4       5    1    2    3   
5    6    7    8       9    10   6    4
9    10   11   12      13   11   7    8
13   14   15   16      14   15   16   12  */

#include <bits/stdc++.h>
#define R 4
#define C 4
using namespace std;

void rotateMatrix(int m, int n, int mat[R][C]){
	int row =0, col =0;
	int prev, curr;

	while(row <m && col < n){
		if((row+1 ==m) || (col+1 == n))
			break;

		prev = mat[row+1][col];

		for(int i=col; i<n; i++){
			curr = mat[row][i];
			mat[row][i] = prev;
			prev = curr;
		}

		row++;

		for(int i=row; i<m; i++){
			curr = mat[i][n-1];
			mat[i][n-1] = prev;
			prev = curr;
		}
        n--;

        if(row < m){
        	for(int i=n-1; i>=col; i--){
                curr = mat[m-1][i];
                mat[m-1][i] = prev;
                prev = curr;        		
        	}
        }
        m--;

        if(col < n){
        	for(int i=m-1; i>=row; i--){
        		curr = mat[i][col];
        		mat[i][col] = prev;
        		prev = curr;
        	}
        }
        col++;
	}

	for(int i=0; i<R; i++){
		for(int j=0; j<C; j++){
			cout << mat[i][j] << "  ";
		}
		cout << endl;		
	}
}

//Diver Code 
int main(){
	int arr[R][C] = {{1,2,3,4}, {5,6,7,8}, {9,10,11,12}, {13,14,15,16}};
	rotateMatrix(R, C, arr);

	return 0;
}