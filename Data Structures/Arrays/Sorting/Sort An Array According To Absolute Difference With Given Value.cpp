/* C++ program to sort an array according to absolute difference with given array 
Input : arr[] : x = 7, arr[] = {10, 5, 3, 9, 2}
Output : arr[] = {5, 9, 10, 3, 2}

Input : x = 6, arr[] = {1, 2, 3, 4, 5}   
Output :  arr[] = {5, 4, 3, 2, 1}     */

#include<bits/stdc++.h>
using namespace std;

void rearrange(int arr[], int n, int x){
    multimap<int, int> m;
    multimap<int ,int >:: iterator it;

    for (int i = 0 ; i < n; i++)
        m.insert(make_pair(abs(x-arr[i]),arr[i]));
 
    int i = 0;
    for (it = m.begin(); it != m.end(); it++)
        arr[i++] = (*it).second ;
}
 
// Function to print the array
void printArray(int arr[] , int n){
    for (int i = 0 ; i < n; i++)
        cout << arr[i] << " ";
}
 
// Driver code
int main() {
    int arr[] = {10, 5, 3, 9 ,2};
    int n = sizeof(arr)/sizeof(arr[0]);
    int x = 7;
    rearrange(arr, n, x);
    printArray(arr, n);
    return 0;
}