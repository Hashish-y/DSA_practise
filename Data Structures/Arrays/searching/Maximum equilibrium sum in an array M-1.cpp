/*C++ program to find the maximum value of prefix sum which is also suffix for index i in arr[]
Input : arr[] = {-1, 2, 3, 0, 3, 2, -1}
Output : 4
Prefix sum of arr[0..3] = Suffix sum of arr[3..6]

Input : arr[] = {-2, 5, 3, 1, 2, 6, -4, 2}
Output : 7
Prefix sum of arr[0..3] = Suffix sum of arr[3..7]   */

#include <bits/stdc++.h>
using namespace std;

int findMaxSum(int arr[], int n){
    int res = INT_MIN;

    for (int i = 0; i < n; i++){
        int prefix_sum = arr[i];
        for (int j = 0; j < i; j++)
            prefix_sum += arr[j];
 
        int suffix_sum = arr[i];
        for (int j = n - 1; j > i; j--)
            suffix_sum += arr[j];
 
        if (prefix_sum == suffix_sum)
            res = max(res, prefix_sum);
        }
    return res;
}
 
// Driver Code
int main(){
    int arr[] = {-2, 5, 3, 1, 2, 6, -4, 2 };
    int n = sizeof(arr) / sizeof(arr[0]);
    cout << "Maximum Equilibrium sum: " << findMaxSum(arr, n);
    return 0;
}