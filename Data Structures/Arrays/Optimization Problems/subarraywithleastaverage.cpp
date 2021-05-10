/* C++ program to find the subarray with minimum average 

Input:  arr[] = {3, 7, 90, 20, 10, 50, 40}, k = 3
Output: Subarray between indexes 3 and 5
The subarray {20, 10, 50} has the least average 
among all subarrays of size 3.

Input:  arr[] = {3, 7, 5, 20, -10, 0, 12}, k = 2
Output: Subarray between [4, 5] has minimum average */

#include <bits/stdc++.h>
using namespace std;
 
void findMinAvgSubarray(int arr[], int n, int k) {
    // k must be smaller than or equal to n
    if (n < k)
        return;
 
    // Initialize  beginning index of result
    int res_index = 0;
 
    // Compute sum of first subarray of size k
    int curr_sum = 0;
    for (int i = 0; i < k; i++)
        curr_sum += arr[i];
 
    // Initialize minimum sum as current sum
    int min_sum = curr_sum;
 
    // Traverse from (k+1)'th element to n'th element
    for (int i = k; i < n; i++) {
        // Add current item and remove first item of previous subarray
        curr_sum += arr[i] - arr[i - k];
 
        // Update result if needed
        if (curr_sum < min_sum) {
            min_sum = curr_sum;
            res_index = (i - k + 1);
        }
    }
 
    cout << "Subarray between [" << res_index << ", " << res_index + k - 1 << "] has minimum average";
}
 
// Driver program
int main() {
    int arr[] = { 3, 7, 90, 20, 10, 50, 40 };
    int k = 3; // Subarray size
    int n = sizeof(arr)/ sizeof(arr[0]);
    findMinAvgSubarray(arr, n, k);
    return 0;
}