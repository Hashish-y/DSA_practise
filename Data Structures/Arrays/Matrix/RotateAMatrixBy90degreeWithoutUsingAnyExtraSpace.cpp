/*C++ program to turn it by 90 degrees in anti-clockwise direction without using any extra space 
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
using namespace std;
#define R 4
#define C 4

void reverseColumns(int arr[R][C]){
    for (int i = 0; i < C; i++)
        for (int j = 0, k = C - 1;
             j < k; j++, k--)
            swap(
                arr[j][i], arr[k][i]);
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
 
void rotate90(int arr[R][C]){
    transpose(arr);
    reverseColumns(arr);
}
 
// Driven code
int main(){
    int arr[R][C] = { { 1, 2, 3, 4 },{ 5, 6, 7, 8 },{ 9, 10, 11, 12 },{ 13, 14, 15, 16 } };
    rotate90(arr);
    printMatrix(arr);
    return 0;
}