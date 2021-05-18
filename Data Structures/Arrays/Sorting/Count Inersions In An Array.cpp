/*C++ program to count the inersions in an array 
Inversion Count for an array indicates – how far (or close) the array is from being sorted
Input: arr[] = {8, 4, 2, 1}
Output: 6

Explanation: Given array has six inversions:
(8, 4), (4, 2), (8, 2), (8, 1), (4, 1), (2, 1).     */

#include <bits/stdc++.h>
using namespace std;
 
int CountInversions(int arr[], int n){
    int inv_count = 0;
    for (int i = 0; i < n - 1; i++)
        for (int j = i + 1; j < n; j++)
            if (arr[i] > arr[j])
                inv_count++;
 
    return inv_count;
}
 
// Driver Code
int main(){
    int arr[] = { 1, 20, 6, 4, 5 };
    int n = sizeof(arr) / sizeof(arr[0]);
    cout << " Number of inversions are " << CountInversions(arr, n) << endl;
    return 0;
}