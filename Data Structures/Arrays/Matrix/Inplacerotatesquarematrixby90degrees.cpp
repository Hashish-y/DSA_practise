/* C++ program to turn it by 90 degrees in anti-clockwise without using any extra space
Input:          Output:
1  2  3         3  6  9 
4  5  6         2  5  8 
7  8  9         1  4  7

Input:          Output:
1  2  3  4      4  8 12 16 
5  6  7  8      3  7 11 15 
9 10 11 12      2  6 10 14 
13 14 15 16     1  5  9 13  */

#include <bits/stdc++.h>
#define N 4
using namespace std;

void displayMatrix(int mat[N][N]){
	for(int i=0; i<N; i++){
		for(int j=0; j<N; j++){
			cout << mat[i][j] << " ";
		}
		cout << endl;
	}
	cout << endl;
}

void rotateMatrix(int mat[N][N]){
	for(int x=0; x<N/2; x++){
		for(int y=x; y<N-x-1; y++){

			int temp = mat[x][y];

			mat[x][y] = mat[y][N-x-1];  //right to top

			mat[y][N-x-1] = mat[N-x-1][N-y-1];  //bottom to right 

			mat[N-x-1][N-y-1] = mat[N-y-1][x];  //left to bottom

			mat[N-y-1][x] = temp;  //temp to left
		}
	}
}

//Driver Code 
int main(){
	int mat[N][N] = {{ 1, 2, 3, 4 },{ 5, 6, 7, 8 },{ 9, 10, 11, 12 },{ 13, 14, 15, 16 }};

	rotateMatrix(mat);
	displayMatrix(mat);
}