/* C++ program to find maximum avarage subarray of length k
Input:  arr[] = {1, 12, -5, -6, 50, 3}, k = 4
Output: Maximum average subarray of length 4 begins at index 1.
Maximum average is (12 - 5 - 6 + 50)/4 = 51/4    */

#include <bits/stdc++.h>
using namespace std;

int findMaxAvg(int arr[], int n, int k){
	if(k>n)
		return -1;
	int sum = arr[0]
	for(int i=1; i<k; i++)
		sum+=arr[i];

	int max_sum = sum, max_end = k-1;

	for(int i=k; i<n; i++){
		sum = sum +arr[i] - arr[i-k];
		if(sum > max_sum){
			max_sum = sum;
			max_end =i;
		}
	}

	return max_end-k+1;
}

//Driver Code
int main(){
    int arr[] = {1, 12, -5, -6, 50, 3};
    int k = 4;
    int n = sizeof(arr)/sizeof(arr[0]);
    cout << "The maximum average subarray of length "<< k << " begins at index "<< findMaxAverage(arr, n, k);
    return 0;
}