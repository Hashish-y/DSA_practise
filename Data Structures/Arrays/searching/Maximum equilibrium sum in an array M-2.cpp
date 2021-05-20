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
	int preSum[n], suffSum[n], ans = INT_MIN;

	preSum[0] = arr[0];
	for(int i=1; i<n; i++)
		preSum[i] = preSum[i-1] + arr[i];

    suffSum[n - 1] = arr[n - 1];
    if (preSum[n - 1] == suffSum[n - 1])
        ans = max(ans, preSum[n - 1]);
         
    for (int i = n - 2; i >= 0; i--){
        suffSum[i] = suffSum[i + 1] + arr[i];
        if (suffSum[i] == preSum[i])
            ans = max(ans, preSum[i]);    
    }
 
    return ans;	
}

// Driver Code
int main(){
    int arr[] = { -2, 5, 3, 1, 2, 6, -4, 2 };
    int n = sizeof(arr) / sizeof(arr[0]);

    cout << "Maximum Equilibrium sum: " << findMaxSum(arr, n);
    return 0;
}