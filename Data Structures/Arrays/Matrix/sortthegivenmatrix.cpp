/*C++ program to sort the given matrix 
Input : mat[][] = { {5, 4, 7}, {1, 3, 8}, {2, 9, 6} }
Output : 1 2 3
         4 5 6
         7 8 9  */

#include <bits/stdc++.h>
#define SIZE 10
using namespace std;

void sortMat(int mat[SIZE][SIZE], int n){
	int temp[n*n];
	int k =0;

	for(int i=0; i<n; i++)
		for(int j=0; j<n; j++)
			temp[k++] = mat[i][j];

	sort(temp, temp+k);

	k=0; 
	for(int i=0; i<n; i++)
		for(int j=0; j<n; j++)
			mat[i][j] = temp[k++];
}

void printMat(int mat[SIZE][SIZE], int n){
	for(int i=0; i<n; i++){
		for(int j=0; j<n; j++)
			cout << mat[i][j] << " ";
	    cout << endl;
	}
}

//Driver Code 
int main(){
	int mat[SIZE][SIZE] = {{ 5, 4, 7 }, { 1, 3, 8 }, { 2, 9, 6 }};
	int n = 3;

	cout << "Original Matrix: " << endl;
	printMat(mat, n);
    
    sortMat(mat, n);

	cout << "\nMatrix after sorting: " << endl;
	printMat(mat, n);

	return 0;
}