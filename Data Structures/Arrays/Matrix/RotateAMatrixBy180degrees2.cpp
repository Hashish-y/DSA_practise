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
 
#define R 4
#define C 4
 
void reverseColumns(int arr[R][C]) {
    for (int i = 0; i < C; i++)
        for (int j = 0, k = C - 1; j < k; j++, k--)
            swap(arr[j][i], arr[k][i]);
}
 
void transpose(int arr[R][C]){
    for (int i = 0; i < R; i++)
        for (int j = i; j < C; j++)
            swap(arr[i][j], arr[j][i]);
}
 
void printMatrix(int arr[R][C]){
    for (int i = 0; i < R; i++) {
        for (int j = 0; j < C; j++)
            cout << arr[i][j] << " ";
        cout << '\n';
    }
}

void rotate180(int arr[R][C]){
    transpose(arr);
    reverseColumns(arr);
    transpose(arr);
    reverseColumns(arr);
}
 
int main(){
    int arr[R][C] = { { 1, 2, 3, 4 }, { 5, 6, 7, 8 },{ 9, 10, 11, 12 },{ 13, 14, 15, 16 } };
    rotate180(arr);
    printMatrix(arr);
    return 0;
}