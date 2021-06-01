/* C++ program to rotate a matrix by 180 degrees 

Input :  1  2  3      Output : 9 8 7 
         4  5  6               6 5 4 
         7  8  9               3 2 1

         

Input :  1 2 3 4      Output : 6 5 4 3 
         5 6 7 8               2 1 0 9 
         9 0 1 2               8 7 6 5
         3 4 5 6               4 3 2 1  */

#include <bits/stdc++.h>
using namespace std;

void reverRow(vector<vector<int>>& data, int index){
	int cols = data[index].size();

	for(int i=0; i<cols/2; i++){
		int temp = data[index][i];
		data[index][i] = data[index][cols-i-1];
		data[index][cols-i-1];
	}
}

void printMatrix(vector<vector<int>>& data){
	for(int i=0; i<data.size(); i++){
		for(int j=0; j<data[i].size(); j++)
			cout << data[i][j] << " ";

		cout << endl;
	}
}

void rotateMatrix180(vector<vector<int>>& data){
	int rows = data.size();
	int cols = data[0].size();

	if(rows %2 != 0)
		reverRow(data, data.size()/2);

	for(int i=0; i<=(rows/2)-1; i++){
		for(int j=0; j<cols; j++){
			int temp = data[i][j];
			data[i][j] = data[rows-i-1][cols-j-1];
			data[rows-i-1][cols-j-1] = temp;
		}
	}
}

//Driver Code
int main() {
    vector<vector<int>> data{ { 1, 2, 3, 4, 5 },{ 6, 7, 8, 9, 10 },{ 11, 12, 13, 14, 15 },{ 16, 17, 18, 19, 20 },{ 21, 22, 23, 24, 25 } };
 
    rotateMatrix180(data);
 
    printMatrix(data);
 
    return 0;
}